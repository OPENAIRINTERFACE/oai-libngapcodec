/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_NB_IoT_PagingDRX_H_
#define	_Ngap_NB_IoT_PagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NB_IoT_PagingDRX {
	Ngap_NB_IoT_PagingDRX_rf32	= 0,
	Ngap_NB_IoT_PagingDRX_rf64	= 1,
	Ngap_NB_IoT_PagingDRX_rf128	= 2,
	Ngap_NB_IoT_PagingDRX_rf256	= 3,
	Ngap_NB_IoT_PagingDRX_rf512	= 4,
	Ngap_NB_IoT_PagingDRX_rf1024	= 5
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_NB_IoT_PagingDRX;

/* Ngap_NB-IoT-PagingDRX */
typedef long	 Ngap_NB_IoT_PagingDRX_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_NB_IoT_PagingDRX_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NB_IoT_PagingDRX;
extern const asn_INTEGER_specifics_t asn_SPC_NB_IoT_PagingDRX_specs_1;
asn_struct_free_f NB_IoT_PagingDRX_free;
asn_struct_print_f NB_IoT_PagingDRX_print;
asn_constr_check_f NB_IoT_PagingDRX_constraint;
ber_type_decoder_f NB_IoT_PagingDRX_decode_ber;
der_type_encoder_f NB_IoT_PagingDRX_encode_der;
xer_type_decoder_f NB_IoT_PagingDRX_decode_xer;
xer_type_encoder_f NB_IoT_PagingDRX_encode_xer;
oer_type_decoder_f NB_IoT_PagingDRX_decode_oer;
oer_type_encoder_f NB_IoT_PagingDRX_encode_oer;
per_type_decoder_f NB_IoT_PagingDRX_decode_uper;
per_type_encoder_f NB_IoT_PagingDRX_encode_uper;
per_type_decoder_f NB_IoT_PagingDRX_decode_aper;
per_type_encoder_f NB_IoT_PagingDRX_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NB_IoT_PagingDRX_H_ */
#include <asn_internal.h>
