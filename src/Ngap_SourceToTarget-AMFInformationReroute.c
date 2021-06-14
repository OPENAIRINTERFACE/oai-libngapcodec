/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_SourceToTarget-AMFInformationReroute.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_SourceToTarget_AMFInformationReroute_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Ngap_SourceToTarget_AMFInformationReroute, configuredNSSAI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ConfiguredNSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configuredNSSAI"
		},
	{ ATF_POINTER, 3, offsetof(struct Ngap_SourceToTarget_AMFInformationReroute, rejectedNSSAIinPLMN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_RejectedNSSAIinPLMN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rejectedNSSAIinPLMN"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_SourceToTarget_AMFInformationReroute, rejectedNSSAIinTA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_RejectedNSSAIinTA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rejectedNSSAIinTA"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_SourceToTarget_AMFInformationReroute, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P243,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_SourceToTarget_AMFInformationReroute_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_SourceToTarget_AMFInformationReroute_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* configuredNSSAI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rejectedNSSAIinPLMN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rejectedNSSAIinTA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_SourceToTarget_AMFInformationReroute_specs_1 = {
	sizeof(struct Ngap_SourceToTarget_AMFInformationReroute),
	offsetof(struct Ngap_SourceToTarget_AMFInformationReroute, _asn_ctx),
	asn_MAP_Ngap_SourceToTarget_AMFInformationReroute_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ngap_SourceToTarget_AMFInformationReroute_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_SourceToTarget_AMFInformationReroute = {
	"SourceToTarget-AMFInformationReroute",
	"SourceToTarget-AMFInformationReroute",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1,
	sizeof(asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1)
		/sizeof(asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1[0]), /* 1 */
	asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1)
		/sizeof(asn_DEF_Ngap_SourceToTarget_AMFInformationReroute_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_SourceToTarget_AMFInformationReroute_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_SourceToTarget_AMFInformationReroute_specs_1	/* Additional specs */
};
