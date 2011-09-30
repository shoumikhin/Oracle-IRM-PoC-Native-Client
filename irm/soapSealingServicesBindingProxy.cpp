/* soapSealingServicesBindingProxy.cpp
   Generated by gSOAP 2.7.16 from IRM.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapSealingServicesBindingProxy.h"

SealingServicesBindingProxy::SealingServicesBindingProxy()
{	SealingServicesBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

SealingServicesBindingProxy::SealingServicesBindingProxy(const struct soap &_soap) :soap(_soap)
{ }

SealingServicesBindingProxy::SealingServicesBindingProxy(soap_mode iomode)
{	SealingServicesBindingProxy_init(iomode, iomode);
}

SealingServicesBindingProxy::SealingServicesBindingProxy(soap_mode imode, soap_mode omode)
{	SealingServicesBindingProxy_init(imode, omode);
}

void SealingServicesBindingProxy::SealingServicesBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns3", "http://xmlns.oracle.com/irm/system", NULL, NULL},
	{"ns1", "http://xmlns.oracle.com/irm/core", NULL, NULL},
	{"ns2", "http://xmlns.oracle.com/irm/content", NULL, NULL},
	{"ns5", "http://xmlns.oracle.com/irm/classifications", NULL, NULL},
	{"ns6", "http://xmlns.oracle.com/irm/rights", NULL, NULL},
	{"ns4", "http://xmlns.oracle.com/irm/content/wsdl", NULL, NULL},
	{"ns7", "http://xmlns.oracle.com/irm/rights/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	this->namespaces = namespaces;
}

SealingServicesBindingProxy::~SealingServicesBindingProxy()
{ }

void SealingServicesBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void SealingServicesBindingProxy::soap_noheader()
{	header = NULL;
}

const SOAP_ENV__Fault *SealingServicesBindingProxy::soap_fault()
{	return this->fault;
}

const char *SealingServicesBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *SealingServicesBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int SealingServicesBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

void SealingServicesBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void SealingServicesBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *SealingServicesBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int SealingServicesBindingProxy::Seal(_ns4__Seal *ns4__Seal, _ns4__SealResponse *ns4__SealResponse)
{	struct soap *soap = this;
	struct __ns4__Seal soap_tmp___ns4__Seal;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#Seal";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Seal.ns4__Seal = ns4__Seal;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Seal(soap, &soap_tmp___ns4__Seal);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Seal(soap, &soap_tmp___ns4__Seal, "-ns4:Seal", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Seal(soap, &soap_tmp___ns4__Seal, "-ns4:Seal", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__SealResponse)
		return soap_closesock(soap);
	ns4__SealResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__SealResponse->soap_get(soap, "ns4:SealResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SealingServicesBindingProxy::Unseal(_ns4__Unseal *ns4__Unseal, _ns4__UnsealResponse *ns4__UnsealResponse)
{	struct soap *soap = this;
	struct __ns4__Unseal soap_tmp___ns4__Unseal;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#Unseal";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Unseal.ns4__Unseal = ns4__Unseal;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Unseal(soap, &soap_tmp___ns4__Unseal);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Unseal(soap, &soap_tmp___ns4__Unseal, "-ns4:Unseal", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Unseal(soap, &soap_tmp___ns4__Unseal, "-ns4:Unseal", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__UnsealResponse)
		return soap_closesock(soap);
	ns4__UnsealResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__UnsealResponse->soap_get(soap, "ns4:UnsealResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SealingServicesBindingProxy::Reseal(_ns4__Reseal *ns4__Reseal, _ns4__ResealResponse *ns4__ResealResponse)
{	struct soap *soap = this;
	struct __ns4__Reseal soap_tmp___ns4__Reseal;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#Reseal";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Reseal.ns4__Reseal = ns4__Reseal;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Reseal(soap, &soap_tmp___ns4__Reseal);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Reseal(soap, &soap_tmp___ns4__Reseal, "-ns4:Reseal", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Reseal(soap, &soap_tmp___ns4__Reseal, "-ns4:Reseal", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ResealResponse)
		return soap_closesock(soap);
	ns4__ResealResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ResealResponse->soap_get(soap, "ns4:ResealResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SealingServicesBindingProxy::Reclassify(_ns4__Reclassify *ns4__Reclassify, _ns4__ReclassifyResponse *ns4__ReclassifyResponse)
{	struct soap *soap = this;
	struct __ns4__Reclassify soap_tmp___ns4__Reclassify;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#Reclassify";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Reclassify.ns4__Reclassify = ns4__Reclassify;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Reclassify(soap, &soap_tmp___ns4__Reclassify);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Reclassify(soap, &soap_tmp___ns4__Reclassify, "-ns4:Reclassify", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Reclassify(soap, &soap_tmp___ns4__Reclassify, "-ns4:Reclassify", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ReclassifyResponse)
		return soap_closesock(soap);
	ns4__ReclassifyResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ReclassifyResponse->soap_get(soap, "ns4:ReclassifyResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SealingServicesBindingProxy::Peek(_ns4__Peek *ns4__Peek, _ns4__PeekResponse *ns4__PeekResponse)
{	struct soap *soap = this;
	struct __ns4__Peek soap_tmp___ns4__Peek;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#Peek";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__Peek.ns4__Peek = ns4__Peek;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__Peek(soap, &soap_tmp___ns4__Peek);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__Peek(soap, &soap_tmp___ns4__Peek, "-ns4:Peek", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__Peek(soap, &soap_tmp___ns4__Peek, "-ns4:Peek", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__PeekResponse)
		return soap_closesock(soap);
	ns4__PeekResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__PeekResponse->soap_get(soap, "ns4:PeekResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SealingServicesBindingProxy::ValidatedPeek(_ns4__ValidatedPeek *ns4__ValidatedPeek, _ns4__ValidatedPeekResponse *ns4__ValidatedPeekResponse)
{	struct soap *soap = this;
	struct __ns4__ValidatedPeek soap_tmp___ns4__ValidatedPeek;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_sealing/sealing_services";
	soap_action = "urn:SealingServices#ValidatedPeek";
	soap->encodingStyle = NULL;
	soap_tmp___ns4__ValidatedPeek.ns4__ValidatedPeek = ns4__ValidatedPeek;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns4__ValidatedPeek(soap, &soap_tmp___ns4__ValidatedPeek);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns4__ValidatedPeek(soap, &soap_tmp___ns4__ValidatedPeek, "-ns4:ValidatedPeek", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns4__ValidatedPeek(soap, &soap_tmp___ns4__ValidatedPeek, "-ns4:ValidatedPeek", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns4__ValidatedPeekResponse)
		return soap_closesock(soap);
	ns4__ValidatedPeekResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns4__ValidatedPeekResponse->soap_get(soap, "ns4:ValidatedPeekResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */