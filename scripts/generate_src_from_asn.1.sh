#!/bin/bash

set -e

export ASN1C_PREFIX=Ngap_
export ASN1C=${ASN1C:-asn1c}

$ASN1C \
    -pdu=all \
    -fcompound-names \
    -fno-include-deps \
    -findirect-choice \
    -gen-PER \
    -D src \
    asn.1/*.asn1

rm -f src/converter-example.mk src/Makefile.am.asn1convert
mv src/converter-example.c src/pdu_collection.c example
