/*
	wsrm.h

	Usage: See import/wsrx.h and plugin/wsrmapi.c

	Generated with:
	wsdl2h -cgyex -o wsrm.h -t WS/WS-typemap.dat WS/WS-ReliableMessaging.xsd

	Modified by Robert van Engelen:

	- Removed //gsoapopt
	- Changed //gsoap wsrm schema namespace directive to import directive
	- Added #import "wsrx.h" at the end of these definitions

*/

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://docs.oasis-open.org/ws-rx/wsrm/200702                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "wsa5.h"	// wsa5 = <http://www.w3.org/2005/08/addressing>

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/

#define SOAP_NAMESPACE_OF_wsrm	"http://docs.oasis-open.org/ws-rx/wsrm/200702"
//gsoap wsrm  schema import:	http://docs.oasis-open.org/ws-rx/wsrm/200702
//gsoap wsrm  schema elementForm:	qualified
//gsoap wsrm  schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


// Imported type "http://www.w3.org/2005/08/addressing":EndpointReferenceType defined by wsa5__EndpointReferenceType


/// Typedef synonym for struct wsrm__SequenceType.
typedef struct wsrm__SequenceType wsrm__SequenceType;

/// Typedef synonym for struct wsrm__AckRequestedType.
typedef struct wsrm__AckRequestedType wsrm__AckRequestedType;

/// Typedef synonym for struct wsrm__SequenceFaultType.
typedef struct wsrm__SequenceFaultType wsrm__SequenceFaultType;

/// Imported complexType "http://docs.oasis-open.org/ws-rx/wsrm/200702":DetailType from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// complexType definition intentionally left blank.

/// Typedef synonym for struct wsrm__CreateSequenceType.
typedef struct wsrm__CreateSequenceType wsrm__CreateSequenceType;

/// Typedef synonym for struct wsrm__CreateSequenceResponseType.
typedef struct wsrm__CreateSequenceResponseType wsrm__CreateSequenceResponseType;

/// Typedef synonym for struct wsrm__CloseSequenceType.
typedef struct wsrm__CloseSequenceType wsrm__CloseSequenceType;

/// Typedef synonym for struct wsrm__CloseSequenceResponseType.
typedef struct wsrm__CloseSequenceResponseType wsrm__CloseSequenceResponseType;

/// Typedef synonym for struct wsrm__TerminateSequenceType.
typedef struct wsrm__TerminateSequenceType wsrm__TerminateSequenceType;

/// Typedef synonym for struct wsrm__TerminateSequenceResponseType.
typedef struct wsrm__TerminateSequenceResponseType wsrm__TerminateSequenceResponseType;

/// Typedef synonym for struct wsrm__OfferType.
typedef struct wsrm__OfferType wsrm__OfferType;

/// Typedef synonym for struct wsrm__AcceptType.
typedef struct wsrm__AcceptType wsrm__AcceptType;

/// Typedef synonym for struct _wsrm__SequenceAcknowledgement.
typedef struct _wsrm__SequenceAcknowledgement _wsrm__SequenceAcknowledgement;

/// Imported complexType "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
/// @brief This type is for elements whose [children] is an anyURI and can have arbitrary attributes.
// complexType definition intentionally left blank.

/// Imported complexType "http://docs.oasis-open.org/ws-rx/wsrm/200702":Address from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// complexType definition intentionally left blank.

/// Imported complexType "http://docs.oasis-open.org/ws-rx/wsrm/200702":Expires from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
#import "custom/duration.h"

/// Typedef synonym for struct _wsrm__UsesSequenceSTR.
typedef struct _wsrm__UsesSequenceSTR _wsrm__UsesSequenceSTR;

/// Typedef synonym for struct _wsrm__UsesSequenceSSL.
typedef struct _wsrm__UsesSequenceSSL _wsrm__UsesSequenceSSL;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://docs.oasis-open.org/ws-rx/wsrm/200702                             *
 *                                                                            *
\******************************************************************************/


/// Imported simpleType "http://docs.oasis-open.org/ws-rx/wsrm/200702":MessageNumberType from typemap /Users/engelen/Projects/gsoap/WS/WS-typemap.dat.
// simpleType definition intentionally left blank.

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":FaultCodes is a simpleType restriction of xs:QName.
enum wsrm__FaultCodes
{
	wsrm__SequenceTerminated,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceTerminated"
	wsrm__UnknownSequence,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":UnknownSequence"
	wsrm__InvalidAcknowledgement,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":InvalidAcknowledgement"
	wsrm__MessageNumberRollover,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":MessageNumberRollover"
	wsrm__CreateSequenceRefused,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceRefused"
	wsrm__SequenceClosed,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceClosed"
	wsrm__WSRMRequired,	///< xs:QName value=""http://docs.oasis-open.org/ws-rx/wsrm/200702":WSRMRequired"
};
/// Typedef synonym for enum wsrm__FaultCodes.
typedef enum wsrm__FaultCodes wsrm__FaultCodes;

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":IncompleteSequenceBehaviorType is a simpleType restriction of xs:string.
enum wsrm__IncompleteSequenceBehaviorType
{
	DiscardEntireSequence,	///< xs:string value="DiscardEntireSequence"
	DiscardFollowingFirstGap,	///< xs:string value="DiscardFollowingFirstGap"
	NoDiscard,	///< xs:string value="NoDiscard"
};
/// Typedef synonym for enum wsrm__IncompleteSequenceBehaviorType.
typedef enum wsrm__IncompleteSequenceBehaviorType wsrm__IncompleteSequenceBehaviorType;

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":UnsupportedElement is a simpleType restriction of xs:QName.

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://docs.oasis-open.org/ws-rx/wsrm/200702                             *
 *                                                                            *
\******************************************************************************/


/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceType is a complexType.
struct wsrm__SequenceType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// Element MessageNumber of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":MessageNumberType.
    ULONG64                              MessageNumber                  1;	///< Required element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":AckRequestedType is a complexType.
struct wsrm__AckRequestedType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceFaultType is a complexType.
struct wsrm__SequenceFaultType
{
/// Element FaultCode of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":FaultCodes.
    enum wsrm__FaultCodes                FaultCode                      1;	///< Required element.
/// Element Detail of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":DetailType.
    struct SOAP_ENV__Detail*             Detail                         0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceType is a complexType.
struct wsrm__CreateSequenceType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":AcksTo.
    wsa5__EndpointReferenceType          AcksTo                         1;	///< Required element.
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Expires.
    xsd__duration*                       Expires                        0;	///< Optional element.
/// Element Offer of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":OfferType.
    struct wsrm__OfferType*              Offer                          0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceResponseType is a complexType.
struct wsrm__CreateSequenceResponseType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Expires.
    xsd__duration*                       Expires                        0;	///< Optional element.
/// Element IncompleteSequenceBehavior of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":IncompleteSequenceBehaviorType.
    enum wsrm__IncompleteSequenceBehaviorType*  IncompleteSequenceBehavior     0;	///< Optional element.
/// Element Accept of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":AcceptType.
    struct wsrm__AcceptType*             Accept                         0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequenceType is a complexType.
struct wsrm__CloseSequenceType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// Element LastMsgNumber of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":MessageNumberType.
    ULONG64*                             LastMsgNumber                  0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequenceResponseType is a complexType.
struct wsrm__CloseSequenceResponseType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequenceType is a complexType.
struct wsrm__TerminateSequenceType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// Element LastMsgNumber of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":MessageNumberType.
    ULONG64*                             LastMsgNumber                  0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequenceResponseType is a complexType.
struct wsrm__TerminateSequenceResponseType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":OfferType is a complexType.
struct wsrm__OfferType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// Element Endpoint of type "http://www.w3.org/2005/08/addressing":EndpointReferenceType.
    wsa5__EndpointReferenceType          Endpoint                       1;	///< Required element.
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Expires.
    xsd__duration*                       Expires                        0;	///< Optional element.
/// Element IncompleteSequenceBehavior of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":IncompleteSequenceBehaviorType.
    enum wsrm__IncompleteSequenceBehaviorType*  IncompleteSequenceBehavior     0;	///< Optional element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":AcceptType is a complexType.
struct wsrm__AcceptType
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":AcksTo.
    wsa5__EndpointReferenceType          AcksTo                         1;	///< Required element.
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceAcknowledgement

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceAcknowledgement is a complexType.
struct _wsrm__SequenceAcknowledgement
{
/// Element reference "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier.
    char*                                Identifier                     1;	///< Required element.
/// CHOICE OF ELEMENTS <xs:choice>
/// Note: <xs:choice> with embedded <xs:sequence> or <xs:group> prevents the use of a union
/// Size of array of ULONG64* is 1..unbounded
   $int                                  __sizeNack                     0;
/// Array ULONG64* of length 1..unbounded
    ULONG64*                             Nack                          ;
/// SEQUENCE OF ELEMENTS <xs:sequence>
    struct _wsrm__SequenceAcknowledgement_Final
    {
/// SEQUENCE OF ELEMENTS <xs:sequence>
//  END OF SEQUENCE
    }                                   *Final                         ;
/// CHOICE OF ELEMENTS <xs:choice>
/// Note: <xs:choice> of element with maxOccurs>1 prevents the use of a union
/// Size of AcknowledgementRange array is 1..unbounded
   $int                                  __sizeAcknowledgementRange     0;
    struct _wsrm__SequenceAcknowledgement_AcknowledgementRange
    {
/// SEQUENCE OF ELEMENTS <xs:sequence>
//  END OF SEQUENCE
/// Attribute Upper of type xs:unsignedLong.
   @ULONG64                              Upper                          1;	///< Required attribute.
/// Attribute Lower of type xs:unsignedLong.
   @ULONG64                              Lower                          1;	///< Required attribute.
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
    }                                   *AcknowledgementRange          ;
    struct _wsrm__SequenceAcknowledgement_None
    {
/// SEQUENCE OF ELEMENTS <xs:sequence>
//  END OF SEQUENCE
    }                                   *None                          ;
//  END OF CHOICE
//  END OF SEQUENCE
//  END OF CHOICE
/// TODO: <any namespace="##other" minOccurs="0" maxOccurs="unbounded">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this element.
///       Use wsdl2h option -d for xsd__anyType DOM (soap_dom_element).
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":UsesSequenceSTR

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":UsesSequenceSTR is a complexType.
struct _wsrm__UsesSequenceSTR
{
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":UsesSequenceSSL

/// "http://docs.oasis-open.org/ws-rx/wsrm/200702":UsesSequenceSSL is a complexType.
struct _wsrm__UsesSequenceSSL
{
/// <anyAttribute namespace="##other">
/// TODO: Schema extensibility is user-definable.
///       Consult the protocol documentation to change or insert declarations.
///       Use wsdl2h option -x to remove this attribute.
///       Use wsdl2h option -d for xsd__anyAttribute DOM (soap_dom_attribute).
};


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":Identifier


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":Address


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":Expires

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://docs.oasis-open.org/ws-rx/wsrm/200702                             *
 *                                                                            *
\******************************************************************************/


/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":Sequence of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceType.
typedef struct wsrm__SequenceType _wsrm__Sequence;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":AckRequested of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":AckRequestedType.
typedef struct wsrm__AckRequestedType _wsrm__AckRequested;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceFault of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":SequenceFaultType.
typedef struct wsrm__SequenceFaultType _wsrm__SequenceFault;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequence of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceType.
typedef struct wsrm__CreateSequenceType _wsrm__CreateSequence;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceResponse of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":CreateSequenceResponseType.
typedef struct wsrm__CreateSequenceResponseType _wsrm__CreateSequenceResponse;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequence of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequenceType.
typedef struct wsrm__CloseSequenceType _wsrm__CloseSequence;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequenceResponse of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":CloseSequenceResponseType.
typedef struct wsrm__CloseSequenceResponseType _wsrm__CloseSequenceResponse;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequence of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequenceType.
typedef struct wsrm__TerminateSequenceType _wsrm__TerminateSequence;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequenceResponse of type "http://docs.oasis-open.org/ws-rx/wsrm/200702":TerminateSequenceResponseType.
typedef struct wsrm__TerminateSequenceResponseType _wsrm__TerminateSequenceResponse;

/// Top-level root element "http://docs.oasis-open.org/ws-rx/wsrm/200702":AcksTo of type "http://www.w3.org/2005/08/addressing":EndpointReferenceType.
typedef wsa5__EndpointReferenceType _wsrm__AcksTo;

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://docs.oasis-open.org/ws-rx/wsrm/200702                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a FILE* fd, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a FILE* fd, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section wsrm Top-level root elements of schema "http://docs.oasis-open.org/ws-rx/wsrm/200702"

  - <wsrm:Sequence> @ref _wsrm__Sequence
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__Sequence(struct soap*, _wsrm__Sequence*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__Sequence(struct soap*, _wsrm__Sequence*);
    @endcode

  - <wsrm:SequenceAcknowledgement> @ref _wsrm__SequenceAcknowledgement
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__SequenceAcknowledgement(struct soap*, struct _wsrm__SequenceAcknowledgement*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__SequenceAcknowledgement(struct soap*, struct _wsrm__SequenceAcknowledgement*);
    @endcode

  - <wsrm:AckRequested> @ref _wsrm__AckRequested
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__AckRequested(struct soap*, _wsrm__AckRequested*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__AckRequested(struct soap*, _wsrm__AckRequested*);
    @endcode

  - <wsrm:Identifier> @ref _wsrm__Identifier
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__Identifier(struct soap*, char* );
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__Identifier(struct soap*, char* );
    @endcode

  - <wsrm:Address> @ref _wsrm__Address
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__Address(struct soap*, char* );
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__Address(struct soap*, char* );
    @endcode

  - <wsrm:SequenceFault> @ref _wsrm__SequenceFault
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__SequenceFault(struct soap*, _wsrm__SequenceFault*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__SequenceFault(struct soap*, _wsrm__SequenceFault*);
    @endcode

  - <wsrm:CreateSequence> @ref _wsrm__CreateSequence
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__CreateSequence(struct soap*, _wsrm__CreateSequence*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__CreateSequence(struct soap*, _wsrm__CreateSequence*);
    @endcode

  - <wsrm:CreateSequenceResponse> @ref _wsrm__CreateSequenceResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__CreateSequenceResponse(struct soap*, _wsrm__CreateSequenceResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__CreateSequenceResponse(struct soap*, _wsrm__CreateSequenceResponse*);
    @endcode

  - <wsrm:CloseSequence> @ref _wsrm__CloseSequence
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__CloseSequence(struct soap*, _wsrm__CloseSequence*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__CloseSequence(struct soap*, _wsrm__CloseSequence*);
    @endcode

  - <wsrm:CloseSequenceResponse> @ref _wsrm__CloseSequenceResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__CloseSequenceResponse(struct soap*, _wsrm__CloseSequenceResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__CloseSequenceResponse(struct soap*, _wsrm__CloseSequenceResponse*);
    @endcode

  - <wsrm:TerminateSequence> @ref _wsrm__TerminateSequence
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__TerminateSequence(struct soap*, _wsrm__TerminateSequence*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__TerminateSequence(struct soap*, _wsrm__TerminateSequence*);
    @endcode

  - <wsrm:TerminateSequenceResponse> @ref _wsrm__TerminateSequenceResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__TerminateSequenceResponse(struct soap*, _wsrm__TerminateSequenceResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__TerminateSequenceResponse(struct soap*, _wsrm__TerminateSequenceResponse*);
    @endcode

  - <wsrm:AcksTo> @ref _wsrm__AcksTo
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__AcksTo(struct soap*, _wsrm__AcksTo*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__AcksTo(struct soap*, _wsrm__AcksTo*);
    @endcode

  - <wsrm:Expires> @ref _wsrm__Expires
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__Expires(struct soap*, xsd__duration*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__Expires(struct soap*, xsd__duration*);
    @endcode

  - <wsrm:UsesSequenceSTR> @ref _wsrm__UsesSequenceSTR
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__UsesSequenceSTR(struct soap*, struct _wsrm__UsesSequenceSTR*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__UsesSequenceSTR(struct soap*, struct _wsrm__UsesSequenceSTR*);
    @endcode

  - <wsrm:UsesSequenceSSL> @ref _wsrm__UsesSequenceSSL
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__UsesSequenceSSL(struct soap*, struct _wsrm__UsesSequenceSSL*);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__UsesSequenceSSL(struct soap*, struct _wsrm__UsesSequenceSSL*);
    @endcode

  - <wsrm:UnsupportedElement> @ref _wsrm__UnsupportedElement
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__wsrm__UnsupportedElement(struct soap*, _QName);
    // Writer (returns SOAP_OK on success):
    soap_write__wsrm__UnsupportedElement(struct soap*, _QName);
    @endcode

*/

#import "wsrx.h"

/* End of wsrm.h */
