/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_Allowed_PNI_NPN_Item_H_
#define	_Ngap_Allowed_PNI_NPN_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PLMNIdentity.h"
#include <NativeEnumerated.h>
#include "Ngap_Allowed-CAG-List-per-PLMN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_Allowed_PNI_NPN_Item__pNI_NPN_restricted {
	Ngap_Allowed_PNI_NPN_Item__pNI_NPN_restricted_restricted	= 0,
	Ngap_Allowed_PNI_NPN_Item__pNI_NPN_restricted_not_restricted	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_Allowed_PNI_NPN_Item__pNI_NPN_restricted;

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_Allowed-PNI-NPN-Item */
typedef struct Ngap_Allowed_PNI_NPN_Item {
	Ngap_PLMNIdentity_t	 pLMNIdentity;
	long	 pNI_NPN_restricted;
	Ngap_Allowed_CAG_List_per_PLMN_t	 allowed_CAG_List_per_PLMN;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_Allowed_PNI_NPN_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_pNI_NPN_restricted_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Allowed_PNI_NPN_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_Allowed_PNI_NPN_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_Allowed_PNI_NPN_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_Allowed_PNI_NPN_Item_H_ */
#include <asn_internal.h>
