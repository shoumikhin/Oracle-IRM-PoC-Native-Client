QT          -=  core gui

TARGET      =   TestIRM

TEMPLATE    =   app

DEFINES     +=

INCLUDEPATH +=\
                irm\
                gsoap\

HEADERS     +=\
                soapH.h\
                soapStub.h\
                soapSealingServicesBindingProxy.h\
                soapDocumentRightOperationsBindingProxy.h

SOURCES     += \
                main.cpp

win32\
{
LIBS        +=  irm/oracleirm.dll
}

unix\
{
LIBS        +=  irm/liboracleirm.so
}
