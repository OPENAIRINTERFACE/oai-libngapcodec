/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_MDTModeNr_H_
#define	_Ngap_MDTModeNr_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_MDTModeNr_PR {
	Ngap_MDTModeNr_PR_NOTHING,	/* No components present */
	Ngap_MDTModeNr_PR_immediateMDTNr,
	Ngap_MDTModeNr_PR_loggedMDTNr,
	Ngap_MDTModeNr_PR_choice_Extensions
} Ngap_MDTModeNr_PR;

/* Forward declarations */
struct Ngap_ImmediateMDTNr;
struct Ngap_LoggedMDTNr;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_MDTModeNr */
typedef struct Ngap_MDTModeNr {
	Ngap_MDTModeNr_PR present;
	union Ngap_MDTModeNr_u {
		struct Ngap_ImmediateMDTNr	*immediateMDTNr;
		struct Ngap_LoggedMDTNr	*loggedMDTNr;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_MDTModeNr_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_MDTModeNr;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_MDTModeNr_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_MDTModeNr_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_MDTModeNr_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_MDTModeNr_H_ */
#include <asn_internal.h>
