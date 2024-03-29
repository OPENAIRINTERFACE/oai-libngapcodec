/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_TWIF_ID_H_
#define	_Ngap_TWIF_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_TWIF_ID_PR {
	Ngap_TWIF_ID_PR_NOTHING,	/* No components present */
	Ngap_TWIF_ID_PR_tWIF_ID,
	Ngap_TWIF_ID_PR_choice_Extensions
} Ngap_TWIF_ID_PR;

/* Forward declarations */
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_TWIF-ID */
typedef struct Ngap_TWIF_ID {
	Ngap_TWIF_ID_PR present;
	union Ngap_TWIF_ID_u {
		BIT_STRING_t	 tWIF_ID;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_TWIF_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TWIF_ID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_TWIF_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_TWIF_ID_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_TWIF_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_TWIF_ID_H_ */
#include <asn_internal.h>
