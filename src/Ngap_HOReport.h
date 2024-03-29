/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_HOReport_H_
#define	_Ngap_HOReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "Ngap_Cause.h"
#include "Ngap_NGRAN-CGI.h"
#include <BIT_STRING.h>
#include "Ngap_MobilityInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_HOReport__handoverReportType {
	Ngap_HOReport__handoverReportType_ho_too_early	= 0,
	Ngap_HOReport__handoverReportType_ho_to_wrong_cell	= 1,
	Ngap_HOReport__handoverReportType_intersystem_ping_pong	= 2
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_HOReport__handoverReportType;

/* Forward declarations */
struct Ngap_NGRAN_CGI;
struct Ngap_EUTRA_CGI;
struct Ngap_UERLFReportContainer;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_HOReport */
typedef struct Ngap_HOReport {
	long	 handoverReportType;
	Ngap_Cause_t	 handoverCause;
	Ngap_NGRAN_CGI_t	 sourcecellCGI;
	Ngap_NGRAN_CGI_t	 targetcellCGI;
	struct Ngap_NGRAN_CGI	*reestablishmentcellCGI;	/* OPTIONAL */
	BIT_STRING_t	*sourcecellC_RNTI;	/* OPTIONAL */
	struct Ngap_EUTRA_CGI	*targetcellinE_UTRAN;	/* OPTIONAL */
	Ngap_MobilityInformation_t	*mobilityInformation;	/* OPTIONAL */
	struct Ngap_UERLFReportContainer	*uERLFReportContainer;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_HOReport_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_handoverReportType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_HOReport;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_HOReport_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_HOReport_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_HOReport_H_ */
#include <asn_internal.h>
