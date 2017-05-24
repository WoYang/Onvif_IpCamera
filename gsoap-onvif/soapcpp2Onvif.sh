#!/bin/bash
rm ./onvif_out/* -rf
/usr/local/gSOAP/bin/soapcpp2 -2 -C -L -c++ -d ./onvif_out -i -I ../gsoap-2.8/gsoap:../gsoap-2.8/gsoap/import:../gsoap-2.8/gsoap/custom:../gsoap-2.8/gsoap/extras -x onvif.h
/usr/local/gSOAP/bin/soapcpp2 -2 -C -L -c++ -d ./onvif_out -I ../gsoap-2.8/gsoap:../gsoap-2.8/gsoap/import:../gsoap-2.8/gsoap/custom:../gsoap-2.8/gsoap/extras -x onvif.h