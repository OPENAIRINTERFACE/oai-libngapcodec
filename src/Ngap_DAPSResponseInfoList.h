/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_DAPSResponseInfoList_H_
#define	_Ngap_DAPSResponseInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_DAPSResponseInfoItem;

/* Ngap_DAPSResponseInfoList */
typedef struct Ngap_DAPSResponseInfoList {
	A_SEQUENCE_OF(struct Ngap_DAPSResponseInfoItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DAPSResponseInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DAPSResponseInfoList;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_DAPSResponseInfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DAPSResponseInfoList_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_DAPSResponseInfoList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DAPSResponseInfoList_H_ */
#include <asn_internal.h>
