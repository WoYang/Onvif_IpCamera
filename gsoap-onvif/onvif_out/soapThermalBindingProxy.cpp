/* soapThermalBindingProxy.cpp
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

#include "soapThermalBindingProxy.h"

ThermalBindingProxy::ThermalBindingProxy() : soap(SOAP_IO_DEFAULT)
{	ThermalBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ThermalBindingProxy::ThermalBindingProxy(const ThermalBindingProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

ThermalBindingProxy::ThermalBindingProxy(const struct soap &_soap) : soap(_soap)
{ }

ThermalBindingProxy::ThermalBindingProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	ThermalBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

ThermalBindingProxy::ThermalBindingProxy(soap_mode iomode) : soap(iomode)
{	ThermalBindingProxy_init(iomode, iomode);
}

ThermalBindingProxy::ThermalBindingProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	ThermalBindingProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

ThermalBindingProxy::ThermalBindingProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	ThermalBindingProxy_init(imode, omode);
}

ThermalBindingProxy::~ThermalBindingProxy()
{
	this->destroy();
	}

void ThermalBindingProxy::ThermalBindingProxy_init(soap_mode imode, soap_mode omode)
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
ThermalBindingProxy *ThermalBindingProxy::copy()
{	ThermalBindingProxy *dup = SOAP_NEW_COPY(ThermalBindingProxy(*(struct soap*)this));
	return dup;
}
#endif

ThermalBindingProxy& ThermalBindingProxy::operator=(const ThermalBindingProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void ThermalBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void ThermalBindingProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	ThermalBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ThermalBindingProxy::soap_noheader()
{	this->header = NULL;
}

void ThermalBindingProxy::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

::SOAP_ENV__Header *ThermalBindingProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *ThermalBindingProxy::soap_fault()
{	return this->fault;
}

const char *ThermalBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *ThermalBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int ThermalBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

int ThermalBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void ThermalBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ThermalBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *ThermalBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int ThermalBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns11__GetServiceCapabilities *ns11__GetServiceCapabilities, _ns11__GetServiceCapabilitiesResponse &ns11__GetServiceCapabilitiesResponse)
{	struct soap *soap = this;
	struct __ns11__GetServiceCapabilities soap_tmp___ns11__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/thermal/wsdl/GetServiceCapabilities";
	soap_tmp___ns11__GetServiceCapabilities.ns11__GetServiceCapabilities = ns11__GetServiceCapabilities;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns11__GetServiceCapabilities(soap, &soap_tmp___ns11__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns11__GetServiceCapabilities(soap, &soap_tmp___ns11__GetServiceCapabilities, "-ns11:GetServiceCapabilities", "")
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
	 || soap_put___ns11__GetServiceCapabilities(soap, &soap_tmp___ns11__GetServiceCapabilities, "-ns11:GetServiceCapabilities", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns11__GetServiceCapabilitiesResponse*>(&ns11__GetServiceCapabilitiesResponse)) // NULL ref?
		return soap_closesock(soap);
	ns11__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns11__GetServiceCapabilitiesResponse.soap_get(soap, "ns11:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ThermalBindingProxy::GetConfigurationOptions(const char *endpoint, const char *soap_action, _ns11__GetConfigurationOptions *ns11__GetConfigurationOptions, _ns11__GetConfigurationOptionsResponse &ns11__GetConfigurationOptionsResponse)
{	struct soap *soap = this;
	struct __ns11__GetConfigurationOptions soap_tmp___ns11__GetConfigurationOptions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/thermal/wsdl/GetConfigurationOptions";
	soap_tmp___ns11__GetConfigurationOptions.ns11__GetConfigurationOptions = ns11__GetConfigurationOptions;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns11__GetConfigurationOptions(soap, &soap_tmp___ns11__GetConfigurationOptions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns11__GetConfigurationOptions(soap, &soap_tmp___ns11__GetConfigurationOptions, "-ns11:GetConfigurationOptions", "")
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
	 || soap_put___ns11__GetConfigurationOptions(soap, &soap_tmp___ns11__GetConfigurationOptions, "-ns11:GetConfigurationOptions", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns11__GetConfigurationOptionsResponse*>(&ns11__GetConfigurationOptionsResponse)) // NULL ref?
		return soap_closesock(soap);
	ns11__GetConfigurationOptionsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns11__GetConfigurationOptionsResponse.soap_get(soap, "ns11:GetConfigurationOptionsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ThermalBindingProxy::GetConfiguration(const char *endpoint, const char *soap_action, _ns11__GetConfiguration *ns11__GetConfiguration, _ns11__GetConfigurationResponse &ns11__GetConfigurationResponse)
{	struct soap *soap = this;
	struct __ns11__GetConfiguration soap_tmp___ns11__GetConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/thermal/wsdl/GetConfiguration";
	soap_tmp___ns11__GetConfiguration.ns11__GetConfiguration = ns11__GetConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns11__GetConfiguration(soap, &soap_tmp___ns11__GetConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns11__GetConfiguration(soap, &soap_tmp___ns11__GetConfiguration, "-ns11:GetConfiguration", "")
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
	 || soap_put___ns11__GetConfiguration(soap, &soap_tmp___ns11__GetConfiguration, "-ns11:GetConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns11__GetConfigurationResponse*>(&ns11__GetConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	ns11__GetConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns11__GetConfigurationResponse.soap_get(soap, "ns11:GetConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ThermalBindingProxy::SetConfiguration(const char *endpoint, const char *soap_action, _ns11__SetConfiguration *ns11__SetConfiguration, _ns11__SetConfigurationResponse &ns11__SetConfigurationResponse)
{	struct soap *soap = this;
	struct __ns11__SetConfiguration soap_tmp___ns11__SetConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/thermal/wsdl/SetConfiguration";
	soap_tmp___ns11__SetConfiguration.ns11__SetConfiguration = ns11__SetConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns11__SetConfiguration(soap, &soap_tmp___ns11__SetConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns11__SetConfiguration(soap, &soap_tmp___ns11__SetConfiguration, "-ns11:SetConfiguration", "")
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
	 || soap_put___ns11__SetConfiguration(soap, &soap_tmp___ns11__SetConfiguration, "-ns11:SetConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns11__SetConfigurationResponse*>(&ns11__SetConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	ns11__SetConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns11__SetConfigurationResponse.soap_get(soap, "ns11:SetConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
