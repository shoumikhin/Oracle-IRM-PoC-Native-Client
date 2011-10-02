#include <IRM.nsmap>
#include <soapSealingServicesBindingProxy.h>
#include <soapDocumentRightOperationsBindingProxy.h>

#include <iostream>
#include <fstream>
#include <memory>
#include <algorithm>
#include <vector>

#define TIXML_USE_STL
#include <tinyxml.h>

#define USERNAME "admin"
#define PASSWORD "password1"

//=======================================================================================
namespace irm
{
//=======================================================================================
//reads the whole content of a file
size_t read_file(char const *filename, std::auto_ptr<char> &buffer)
{
    std::ifstream file(filename);
    std::filebuf *rdbuf;
    size_t size;

    rdbuf = file.rdbuf();

    size = rdbuf->pubseekoff(0, std::ios::end, std::ios::in);
    rdbuf->pubseekpos(0, std::ios::in);

    buffer.reset(new char[size]);
    rdbuf->sgetn(buffer.get(), size);

    file.close();

    return size;
}
//--------------------------------------------------------------------------------------
//parses classification XML to get context's UUID
void context_from_classification(ns1__Classification const *classification, ns6__ContextInstanceRef *context)
{
    TiXmlDocument xml;

    xml.Parse(classification->__any, 0, TIXML_ENCODING_UTF8);
    context->uuid = xml.RootElement()->FirstChildElement("context")->FirstChildElement("uuid")->GetText();
}
//--------------------------------------------------------------------------------------
void dump_label(ns1__Label *label)
{
    std::cout << "Label:  " << label->name << std::endl;
};
//--------------------------------------------------------------------------------------
void dump_feature(ns1__Feature *feature)
{
    std::cout << "  " << feature->id << std::endl;
};
//--------------------------------------------------------------------------------------
void dump_right(ns6__DocumentRight *right)
{
    std::cout << "Right: " << std::endl;
    std::for_each(right->role->features.begin(), right->role->features.end(), dump_feature);
};
//=======================================================================================
}
//=======================================================================================
int main()
{
    std::auto_ptr<char> buffer;
    size_t size = irm::read_file("hello.sdocx", buffer);

    _ns4__Peek peekRequest;
    _ns4__PeekResponse peekResponse;

    //init the request with contents of a file and its size
    peekRequest.input.__ptr = (unsigned char *)buffer.get();
    peekRequest.input.__size = size;

    //setup sealing services proxy
    SealingServicesBindingProxy sealingServices;

    sealingServices.userid = USERNAME;
    sealingServices.passwd = PASSWORD;

    //peek file's metadata
    if (SOAP_OK != sealingServices.Peek(&peekRequest, &peekResponse))
        exit(-1);

    //extract classification and dump it
    ns1__Classification *classification = peekResponse.return_->classification;

    std::for_each(classification->labels.begin(), classification->labels.end(), irm::dump_label);

    //initialize a context with UUID from the classification cookie
    ns6__ContextInstanceRef context;

    irm::context_from_classification(classification, &context);

    //setup a range of rights to get for this context
    ns1__PageRange pageRange;

    pageRange.first = 1;
    pageRange.last = 10;  //hope, it's big enough

    _ns7__ListRightsByContext rightsRequest;
    _ns7__ListRightsByContextResponse rightsResponse;

    //init the request with context and range
    rightsRequest.context = &context;
    rightsRequest.pageRange = &pageRange;

    DocumentRightOperationsBindingProxy documentRightOperations;

    //setup rights operations proxy
    documentRightOperations.userid = USERNAME;
    documentRightOperations.passwd = PASSWORD;

    //get rights for the context
    if (SOAP_OK != documentRightOperations.ListRightsByContext(&rightsRequest, &rightsResponse))
        exit(-1);

    std::for_each(rightsResponse.return_.begin(), rightsResponse.return_.end(), irm::dump_right);

    return 0;
}
//=======================================================================================
