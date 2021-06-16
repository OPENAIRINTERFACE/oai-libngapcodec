PKGCONFIGPACKAGE=ngapcodec-15.3.0
LIBS += -lm
CFLAGS += -DASN_PDU_COLLECTION -I. -I ../include/asn1c
LDFLAGS += -L.. -lm -lngapcodec
ASN_PROGRAM ?= converter-example
ASN_PROGRAM_SRCS ?= \
	converter-example.c\
	pdu_collection.c

NGAP_PDU_SAMPLES = \
	../test/aper/NGSetupRequest_1.aper \
	../test/aper/NGSetupRequest_2.aper \
	../test/aper/NGReset.aper

.PHONY: $(NGAP_PDU_SAMPLES)

all: $(ASN_PROGRAM)

$(ASN_PROGRAM): $(ASN_PROGRAM_SRCS:.c=.o)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(ASN_PROGRAM) $(ASN_PROGRAM_SRCS:.c=.o) $(LDFLAGS)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(ASN_PROGRAM)
	rm -f $(ASN_MODULE_SRCS:.c=.o) $(ASN_PROGRAM_SRCS:.c=.o)

test: $(NGAP_PDU_SAMPLES)

$(NGAP_PDU_SAMPLES):
	./converter-example -iaper -per-nopad -pNGAP-PDU $@ -oxer

