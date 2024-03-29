/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_QoSFlowsUsageReport_Item_H_
#define	_Ngap_QoSFlowsUsageReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_QosFlowIdentifier.h"
#include <NativeEnumerated.h>
#include "Ngap_VolumeTimedReportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_QoSFlowsUsageReport_Item__rATType {
	Ngap_QoSFlowsUsageReport_Item__rATType_nr	= 0,
	Ngap_QoSFlowsUsageReport_Item__rATType_eutra	= 1,
	/*
	 * Enumeration is extensible
	 */
	Ngap_QoSFlowsUsageReport_Item__rATType_nr_unlicensed	= 2,
	Ngap_QoSFlowsUsageReport_Item__rATType_e_utra_unlicensed	= 3
} e_Ngap_QoSFlowsUsageReport_Item__rATType;

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_QoSFlowsUsageReport-Item */
typedef struct Ngap_QoSFlowsUsageReport_Item {
	Ngap_QosFlowIdentifier_t	 qosFlowIdentifier;
	long	 rATType;
	Ngap_VolumeTimedReportList_t	 qoSFlowsTimedReportList;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_QoSFlowsUsageReport_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_rATType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_QoSFlowsUsageReport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_QoSFlowsUsageReport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_QoSFlowsUsageReport_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_QoSFlowsUsageReport_Item_H_ */
#include <asn_internal.h>
