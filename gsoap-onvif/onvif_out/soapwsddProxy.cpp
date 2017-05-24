/* soapwsddProxy.cpp
   Generated by gSOAP 2.8.45 for onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapwsddProxy.h"

wsddProxy::wsddProxy() : soap(SOAP_IO_DEFAULT)
{	wsddProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

wsddProxy::wsddProxy(const wsddProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

wsddProxy::wsddProxy(const struct soap &_soap) : soap(_soap)
{ }

wsddProxy::wsddProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	wsddProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

wsddProxy::wsddProxy(soap_mode iomode) : soap(iomode)
{	wsddProxy_init(iomode, iomode);
}

wsddProxy::wsddProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	wsddProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

wsddProxy::wsddProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	wsddProxy_init(imode, omode);
}

wsddProxy::~wsddProxy()
{
	this->destroy();
	}

void wsddProxy::wsddProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
        {"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
        {"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
        {"saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL},
        {"saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL},
        {"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
        {"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
        {"wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", NULL, NULL},
        {"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
        {"ns2", "http://www.onvif.org/ver10/pacs", NULL, NULL},
        {"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
        {"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
        {"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
        {"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
        {"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
        {"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
        {"ns1", "http://www.onvif.org/ver10/accesscontrol/wsdl", NULL, NULL},
        {"ns10", "http://www.onvif.org/ver10/schedule/wsdl", NULL, NULL},
        {"ns11", "http://www.onvif.org/ver10/thermal/wsdl", NULL, NULL},
        {"ns3", "http://www.onvif.org/ver10/accessrules/wsdl", NULL, NULL},
        {"ns4", "http://www.onvif.org/ver10/actionengine/wsdl", NULL, NULL},
        {"ns5", "http://www.onvif.org/ver10/advancedsecurity/wsdl", NULL, NULL},
        {"ns6", "http://www.onvif.org/ver10/credential/wsdl", NULL, NULL},
        {"ns7", "http://www.onvif.org/ver10/doorcontrol/wsdl", NULL, NULL},
        {"ns8", "http://www.onvif.org/ver20/media/wsdl", NULL, NULL},
        {"ns9", "http://www.onvif.org/ver10/provisioning/wsdl", NULL, NULL},
        {"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
        {"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
        {"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
        {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
        {"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
        {"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
        {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
        {"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
        {"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
        {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
        {"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
        {"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
        {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
        {"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
        {"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

#ifndef WITH_PURE_VIRTUAL
wsddProxy *wsddProxy::copy()
{	wsddProxy *dup = SOAP_NEW_COPY(wsddProxy(*(struct soap*)this));
	return dup;
}
#endif

wsddProxy& wsddProxy::operator=(const wsddProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void wsddProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void wsddProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	wsddProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void wsddProxy::soap_noheader()
{	this->header = NULL;
}

void wsddProxy::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
{	::soap_header(this);
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsdd__AppSequence = wsdd__AppSequence;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
	this->header->chan__ChannelInstance = chan__ChannelInstance;
	this->header->wsse__Security = wsse__Security;
}

::SOAP_ENV__Header *wsddProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *wsddProxy::soap_fault()
{	return this->fault;
}

const char *wsddProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *wsddProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int wsddProxy::soap_close_socket()
{	return soap_closesock(this);
}

int wsddProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void wsddProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void wsddProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *wsddProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int wsddProxy::send_Hello(const char *endpoint, const char *soap_action, struct wsdd__HelloType *wsdd__Hello)
{	struct soap *soap = this;
	struct __wsdd__Hello soap_tmp___wsdd__Hello;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Hello";
	soap_tmp___wsdd__Hello.wsdd__Hello = wsdd__Hello;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__Hello(soap, &soap_tmp___wsdd__Hello);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__Hello(soap, &soap_tmp___wsdd__Hello, "-wsdd:Hello", "")
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
	 || soap_put___wsdd__Hello(soap, &soap_tmp___wsdd__Hello, "-wsdd:Hello", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_Hello(struct __wsdd__Hello& tmp)
{	struct soap *soap = this;

	struct __wsdd__Hello *_param_1 = &tmp;
	soap_default___wsdd__Hello(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__Hello(soap, _param_1, "-wsdd:Hello", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int wsddProxy::send_Bye(const char *endpoint, const char *soap_action, struct wsdd__ByeType *wsdd__Bye)
{	struct soap *soap = this;
	struct __wsdd__Bye soap_tmp___wsdd__Bye;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Bye";
	soap_tmp___wsdd__Bye.wsdd__Bye = wsdd__Bye;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__Bye(soap, &soap_tmp___wsdd__Bye);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__Bye(soap, &soap_tmp___wsdd__Bye, "-wsdd:Bye", "")
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
	 || soap_put___wsdd__Bye(soap, &soap_tmp___wsdd__Bye, "-wsdd:Bye", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_Bye(struct __wsdd__Bye& tmp)
{	struct soap *soap = this;

	struct __wsdd__Bye *_param_1 = &tmp;
	soap_default___wsdd__Bye(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__Bye(soap, _param_1, "-wsdd:Bye", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int wsddProxy::send_Probe(const char *endpoint, const char *soap_action, struct wsdd__ProbeType *wsdd__Probe)
{	struct soap *soap = this;
	struct __wsdd__Probe soap_tmp___wsdd__Probe;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Probe";
	soap_tmp___wsdd__Probe.wsdd__Probe = wsdd__Probe;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__Probe(soap, &soap_tmp___wsdd__Probe);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__Probe(soap, &soap_tmp___wsdd__Probe, "-wsdd:Probe", "")
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
	 || soap_put___wsdd__Probe(soap, &soap_tmp___wsdd__Probe, "-wsdd:Probe", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_Probe(struct __wsdd__Probe& tmp)
{	struct soap *soap = this;

	struct __wsdd__Probe *_param_1 = &tmp;
	soap_default___wsdd__Probe(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__Probe(soap, _param_1, "-wsdd:Probe", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int wsddProxy::send_ProbeMatches(const char *endpoint, const char *soap_action, struct wsdd__ProbeMatchesType *wsdd__ProbeMatches)
{	struct soap *soap = this;
	struct __wsdd__ProbeMatches soap_tmp___wsdd__ProbeMatches;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/ProbeMatches";
	soap_tmp___wsdd__ProbeMatches.wsdd__ProbeMatches = wsdd__ProbeMatches;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches, "-wsdd:ProbeMatches", "")
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
	 || soap_put___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches, "-wsdd:ProbeMatches", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_ProbeMatches(struct __wsdd__ProbeMatches& tmp)
{	struct soap *soap = this;

	struct __wsdd__ProbeMatches *_param_1 = &tmp;
	soap_default___wsdd__ProbeMatches(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__ProbeMatches(soap, _param_1, "-wsdd:ProbeMatches", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int wsddProxy::send_Resolve(const char *endpoint, const char *soap_action, struct wsdd__ResolveType *wsdd__Resolve)
{	struct soap *soap = this;
	struct __wsdd__Resolve soap_tmp___wsdd__Resolve;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/Resolve";
	soap_tmp___wsdd__Resolve.wsdd__Resolve = wsdd__Resolve;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve, "-wsdd:Resolve", "")
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
	 || soap_put___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve, "-wsdd:Resolve", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_Resolve(struct __wsdd__Resolve& tmp)
{	struct soap *soap = this;

	struct __wsdd__Resolve *_param_1 = &tmp;
	soap_default___wsdd__Resolve(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__Resolve(soap, _param_1, "-wsdd:Resolve", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int wsddProxy::send_ResolveMatches(const char *endpoint, const char *soap_action, struct wsdd__ResolveMatchesType *wsdd__ResolveMatches)
{	struct soap *soap = this;
	struct __wsdd__ResolveMatches soap_tmp___wsdd__ResolveMatches;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://docs.oasis-open.org/ws-dd/ns/discovery/2009/01/ResolveMatches";
	soap_tmp___wsdd__ResolveMatches.wsdd__ResolveMatches = wsdd__ResolveMatches;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches, "-wsdd:ResolveMatches", "")
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
	 || soap_put___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches, "-wsdd:ResolveMatches", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int wsddProxy::recv_ResolveMatches(struct __wsdd__ResolveMatches& tmp)
{	struct soap *soap = this;

	struct __wsdd__ResolveMatches *_param_1 = &tmp;
	soap_default___wsdd__ResolveMatches(soap, _param_1);
	soap_begin(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get___wsdd__ResolveMatches(soap, _param_1, "-wsdd:ResolveMatches", NULL);
	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
		soap->error = SOAP_OK;
	if (soap->error
	 || soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
