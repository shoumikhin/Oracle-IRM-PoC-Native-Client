QT          -=  core gui

TARGET      =   oracleirm

TEMPLATE    =   lib

CONFIG      +=  dll

DEFINES     +=\
                WITH_NONAMESPACES

INCLUDEPATH +=\
                ../gsoap\
                ../gsoap/import

HEADERS     +=\
                IRM.h\
                soapH.h\
                soapStub.h\
                ../gsoap/stdsoap2.h\
                soapSealingServicesBindingProxy.h\
                soapDocumentRightOperationsBindingProxy.h

SOURCES     +=\
                soapC.cpp\
                ../gsoap/stdsoap2.cpp\
                soapSealingServicesBindingProxy.cpp\
                soapDocumentRightOperationsBindingProxy.cpp

win32\
{
LIBS        +=\
                -lwsock32
}
