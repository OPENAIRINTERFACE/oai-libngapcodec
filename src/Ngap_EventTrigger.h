/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_EventTrigger_H_
#define	_Ngap_EventTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_EventTrigger_PR {
	Ngap_EventTrigger_PR_NOTHING,	/* No components present */
	Ngap_EventTrigger_PR_outOfCoverage,
	Ngap_EventTrigger_PR_eventL1LoggedMDTConfig,
	Ngap_EventTrigger_PR_choice_Extensions
} Ngap_EventTrigger_PR;
typedef enum Ngap_EventTrigger__outOfCoverage {
	Ngap_EventTrigger__outOfCoverage_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_EventTrigger__outOfCoverage;

/* Forward declarations */
struct Ngap_EventL1LoggedMDTConfig;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_EventTrigger */
typedef struct Ngap_EventTrigger {
	Ngap_EventTrigger_PR present;
	union Ngap_EventTrigger_u {
		long	 outOfCoverage;
		struct Ngap_EventL1LoggedMDTConfig	*eventL1LoggedMDTConfig;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_EventTrigger_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_outOfCoverage_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_EventTrigger;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_EventTrigger_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_EventTrigger_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_EventTrigger_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_EventTrigger_H_ */
#include <asn_internal.h>
