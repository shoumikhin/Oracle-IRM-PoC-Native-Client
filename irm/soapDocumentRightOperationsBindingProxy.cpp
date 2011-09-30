/* soapDocumentRightOperationsBindingProxy.cpp
   Generated by gSOAP 2.7.16 from IRM.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapDocumentRightOperationsBindingProxy.h"

DocumentRightOperationsBindingProxy::DocumentRightOperationsBindingProxy()
{	DocumentRightOperationsBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DocumentRightOperationsBindingProxy::DocumentRightOperationsBindingProxy(const struct soap &_soap) :soap(_soap)
{ }

DocumentRightOperationsBindingProxy::DocumentRightOperationsBindingProxy(soap_mode iomode)
{	DocumentRightOperationsBindingProxy_init(iomode, iomode);
}

DocumentRightOperationsBindingProxy::DocumentRightOperationsBindingProxy(soap_mode imode, soap_mode omode)
{	DocumentRightOperationsBindingProxy_init(imode, omode);
}

void DocumentRightOperationsBindingProxy::DocumentRightOperationsBindingProxy_init(soap_mode imode, soap_mode omode)
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

DocumentRightOperationsBindingProxy::~DocumentRightOperationsBindingProxy()
{ }

void DocumentRightOperationsBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void DocumentRightOperationsBindingProxy::soap_noheader()
{	header = NULL;
}

const SOAP_ENV__Fault *DocumentRightOperationsBindingProxy::soap_fault()
{	return this->fault;
}

const char *DocumentRightOperationsBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *DocumentRightOperationsBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int DocumentRightOperationsBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

void DocumentRightOperationsBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void DocumentRightOperationsBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *DocumentRightOperationsBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int DocumentRightOperationsBindingProxy::AssignRole(_ns7__AssignRole *ns7__AssignRole, _ns7__AssignRoleResponse *ns7__AssignRoleResponse)
{	struct soap *soap = this;
	struct __ns7__AssignRole soap_tmp___ns7__AssignRole;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#AssignRole";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__AssignRole.ns7__AssignRole = ns7__AssignRole;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__AssignRole(soap, &soap_tmp___ns7__AssignRole);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__AssignRole(soap, &soap_tmp___ns7__AssignRole, "-ns7:AssignRole", NULL)
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
	 || soap_put___ns7__AssignRole(soap, &soap_tmp___ns7__AssignRole, "-ns7:AssignRole", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__AssignRoleResponse)
		return soap_closesock(soap);
	ns7__AssignRoleResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__AssignRoleResponse->soap_get(soap, "ns7:AssignRoleResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::ReassignRole(_ns7__ReassignRole *ns7__ReassignRole, _ns7__ReassignRoleResponse *ns7__ReassignRoleResponse)
{	struct soap *soap = this;
	struct __ns7__ReassignRole soap_tmp___ns7__ReassignRole;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#ReassignRole";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__ReassignRole.ns7__ReassignRole = ns7__ReassignRole;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__ReassignRole(soap, &soap_tmp___ns7__ReassignRole);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__ReassignRole(soap, &soap_tmp___ns7__ReassignRole, "-ns7:ReassignRole", NULL)
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
	 || soap_put___ns7__ReassignRole(soap, &soap_tmp___ns7__ReassignRole, "-ns7:ReassignRole", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__ReassignRoleResponse)
		return soap_closesock(soap);
	ns7__ReassignRoleResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__ReassignRoleResponse->soap_get(soap, "ns7:ReassignRoleResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::CheckInRightsForAccount(_ns7__CheckInRightsForAccount *ns7__CheckInRightsForAccount, _ns7__CheckInRightsForAccountResponse *ns7__CheckInRightsForAccountResponse)
{	struct soap *soap = this;
	struct __ns7__CheckInRightsForAccount soap_tmp___ns7__CheckInRightsForAccount;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#CheckInRightsForAccount";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__CheckInRightsForAccount.ns7__CheckInRightsForAccount = ns7__CheckInRightsForAccount;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__CheckInRightsForAccount(soap, &soap_tmp___ns7__CheckInRightsForAccount);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__CheckInRightsForAccount(soap, &soap_tmp___ns7__CheckInRightsForAccount, "-ns7:CheckInRightsForAccount", NULL)
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
	 || soap_put___ns7__CheckInRightsForAccount(soap, &soap_tmp___ns7__CheckInRightsForAccount, "-ns7:CheckInRightsForAccount", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__CheckInRightsForAccountResponse)
		return soap_closesock(soap);
	ns7__CheckInRightsForAccountResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__CheckInRightsForAccountResponse->soap_get(soap, "ns7:CheckInRightsForAccountResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::SaveChangesToItems(_ns7__SaveChangesToItems *ns7__SaveChangesToItems, _ns7__SaveChangesToItemsResponse *ns7__SaveChangesToItemsResponse)
{	struct soap *soap = this;
	struct __ns7__SaveChangesToItems soap_tmp___ns7__SaveChangesToItems;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#SaveChangesToItems";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__SaveChangesToItems.ns7__SaveChangesToItems = ns7__SaveChangesToItems;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__SaveChangesToItems(soap, &soap_tmp___ns7__SaveChangesToItems);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__SaveChangesToItems(soap, &soap_tmp___ns7__SaveChangesToItems, "-ns7:SaveChangesToItems", NULL)
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
	 || soap_put___ns7__SaveChangesToItems(soap, &soap_tmp___ns7__SaveChangesToItems, "-ns7:SaveChangesToItems", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__SaveChangesToItemsResponse)
		return soap_closesock(soap);
	ns7__SaveChangesToItemsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__SaveChangesToItemsResponse->soap_get(soap, "ns7:SaveChangesToItemsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::UnassignRights(_ns7__UnassignRights *ns7__UnassignRights, _ns7__UnassignRightsResponse *ns7__UnassignRightsResponse)
{	struct soap *soap = this;
	struct __ns7__UnassignRights soap_tmp___ns7__UnassignRights;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#UnassignRights";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__UnassignRights.ns7__UnassignRights = ns7__UnassignRights;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__UnassignRights(soap, &soap_tmp___ns7__UnassignRights);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__UnassignRights(soap, &soap_tmp___ns7__UnassignRights, "-ns7:UnassignRights", NULL)
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
	 || soap_put___ns7__UnassignRights(soap, &soap_tmp___ns7__UnassignRights, "-ns7:UnassignRights", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__UnassignRightsResponse)
		return soap_closesock(soap);
	ns7__UnassignRightsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__UnassignRightsResponse->soap_get(soap, "ns7:UnassignRightsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::ListRightsByContext(_ns7__ListRightsByContext *ns7__ListRightsByContext, _ns7__ListRightsByContextResponse *ns7__ListRightsByContextResponse)
{	struct soap *soap = this;
	struct __ns7__ListRightsByContext soap_tmp___ns7__ListRightsByContext;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#ListRightsByContext";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__ListRightsByContext.ns7__ListRightsByContext = ns7__ListRightsByContext;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__ListRightsByContext(soap, &soap_tmp___ns7__ListRightsByContext);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__ListRightsByContext(soap, &soap_tmp___ns7__ListRightsByContext, "-ns7:ListRightsByContext", NULL)
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
	 || soap_put___ns7__ListRightsByContext(soap, &soap_tmp___ns7__ListRightsByContext, "-ns7:ListRightsByContext", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__ListRightsByContextResponse)
		return soap_closesock(soap);
	ns7__ListRightsByContextResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__ListRightsByContextResponse->soap_get(soap, "ns7:ListRightsByContextResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DocumentRightOperationsBindingProxy::ListRightsByAccount(_ns7__ListRightsByAccount *ns7__ListRightsByAccount, _ns7__ListRightsByAccountResponse *ns7__ListRightsByAccountResponse)
{	struct soap *soap = this;
	struct __ns7__ListRightsByAccount soap_tmp___ns7__ListRightsByAccount;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://ium-vbox-win2k8:16100/irm_services/document_right_operations";
	soap_action = "urn:DocumentRightOperations#ListRightsByAccount";
	soap->encodingStyle = NULL;
	soap_tmp___ns7__ListRightsByAccount.ns7__ListRightsByAccount = ns7__ListRightsByAccount;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns7__ListRightsByAccount(soap, &soap_tmp___ns7__ListRightsByAccount);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns7__ListRightsByAccount(soap, &soap_tmp___ns7__ListRightsByAccount, "-ns7:ListRightsByAccount", NULL)
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
	 || soap_put___ns7__ListRightsByAccount(soap, &soap_tmp___ns7__ListRightsByAccount, "-ns7:ListRightsByAccount", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns7__ListRightsByAccountResponse)
		return soap_closesock(soap);
	ns7__ListRightsByAccountResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns7__ListRightsByAccountResponse->soap_get(soap, "ns7:ListRightsByAccountResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */