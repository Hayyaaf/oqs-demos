// qsc.h - OID definitions for Wireshark

#define QSC_OIDS_SIGS \
    oid_add_from_string("dilithium2", "1.3.6.1.4.1.2.267.7.4.4"); \
    oid_add_from_string("p256_dilithium2", "1.3.9999.2.7.1"); \
    oid_add_from_string("rsa3072_dilithium2", "1.3.9999.2.7.2"); \
    oid_add_from_string("dilithium3", "1.3.6.1.4.1.2.267.7.6.5"); \
    oid_add_from_string("p384_dilithium3", "1.3.9999.2.7.3"); \
    oid_add_from_string("dilithium5", "1.3.6.1.4.1.2.267.7.8.7"); \
    oid_add_from_string("p521_dilithium5", "1.3.9999.2.7.4"); \
    oid_add_from_string("mldsa44", "1.3.6.1.4.1.2.267.12.4.4"); \
    oid_add_from_string("p256_mldsa44", "1.3.9999.7.1"); \
    oid_add_from_string("rsa3072_mldsa44", "1.3.9999.7.2"); \
    oid_add_from_string("mldsa44_pss2048", "2.16.840.1.114027.80.8.1.1"); \
    oid_add_from_string("mldsa44_rsa2048", "2.16.840.1.114027.80.8.1.2"); \
    oid_add_from_string("mldsa44_ed25519", "2.16.840.1.114027.80.8.1.3"); \
    oid_add_from_string("mldsa44_p256", "2.16.840.1.114027.80.8.1.4"); \
    oid_add_from_string("mldsa44_bp256", "2.16.840.1.114027.80.8.1.5"); \
    oid_add_from_string("mldsa65", "1.3.6.1.4.1.2.267.12.6.5"); \
    oid_add_from_string("p384_mldsa65", "1.3.9999.7.3"); \
    oid_add_from_string("mldsa65_pss3072", "2.16.840.1.114027.80.8.1.6"); \
    oid_add_from_string("mldsa65_rsa3072", "2.16.840.1.114027.80.8.1.7"); \
    oid_add_from_string("mldsa65_p256", "2.16.840.1.114027.80.8.1.8"); \
    oid_add_from_string("mldsa65_bp256", "2.16.840.1.114027.80.8.1.9"); \
    oid_add_from_string("mldsa65_ed25519", "2.16.840.1.114027.80.8.1.10"); \
    oid_add_from_string("mldsa87", "1.3.6.1.4.1.2.267.12.8.7"); \
    oid_add_from_string("p521_mldsa87", "1.3.9999.7.4"); \
    oid_add_from_string("mldsa87_p384", "2.16.840.1.114027.80.8.1.11"); \
    oid_add_from_string("mldsa87_bp384", "2.16.840.1.114027.80.8.1.12"); \
    oid_add_from_string("mldsa87_ed448", "2.16.840.1.114027.80.8.1.13"); \
    oid_add_from_string("falcon512", "1.3.9999.3.11"); \
    oid_add_from_string("p256_falcon512", "1.3.9999.3.12"); \
    oid_add_from_string("rsa3072_falcon512", "1.3.9999.3.13"); \
    oid_add_from_string("falconpadded512", "1.3.9999.3.16"); \
    oid_add_from_string("p256_falconpadded512", "1.3.9999.3.17"); \
    oid_add_from_string("rsa3072_falconpadded512", "1.3.9999.3.18"); \
    oid_add_from_string("falcon1024", "1.3.9999.3.14"); \
    oid_add_from_string("p521_falcon1024", "1.3.9999.3.15"); \
    oid_add_from_string("falconpadded1024", "1.3.9999.3.19"); \
    oid_add_from_string("p521_falconpadded1024", "1.3.9999.3.20"); \
    oid_add_from_string("sphincssha2128fsimple", "1.3.9999.6.4.13"); \
    oid_add_from_string("p256_sphincssha2128fsimple", "1.3.9999.6.4.14"); \
    oid_add_from_string("rsa3072_sphincssha2128fsimple", "1.3.9999.6.4.15"); \
    oid_add_from_string("sphincssha2128ssimple", "1.3.9999.6.4.16"); \
    oid_add_from_string("p256_sphincssha2128ssimple", "1.3.9999.6.4.17"); \
    oid_add_from_string("rsa3072_sphincssha2128ssimple", "1.3.9999.6.4.18"); \
    oid_add_from_string("sphincssha2192fsimple", "1.3.9999.6.5.10"); \
    oid_add_from_string("p384_sphincssha2192fsimple", "1.3.9999.6.5.11"); \
    oid_add_from_string("sphincssha2192ssimple", "1.3.9999.6.5.12"); \
    oid_add_from_string("p384_sphincssha2192ssimple", "1.3.9999.6.5.13"); \
    oid_add_from_string("sphincssha2256fsimple", "1.3.9999.6.6.10"); \
    oid_add_from_string("p521_sphincssha2256fsimple", "1.3.9999.6.6.11"); \
    oid_add_from_string("sphincssha2256ssimple", "1.3.9999.6.6.12"); \
    oid_add_from_string("p521_sphincssha2256ssimple", "1.3.9999.6.6.13"); \
    oid_add_from_string("sphincsshake128fsimple", "1.3.9999.6.7.13"); \
    oid_add_from_string("p256_sphincsshake128fsimple", "1.3.9999.6.7.14"); \
    oid_add_from_string("rsa3072_sphincsshake128fsimple", "1.3.9999.6.7.15"); \
    oid_add_from_string("sphincsshake128ssimple", "1.3.9999.6.7.16"); \
    oid_add_from_string("p256_sphincsshake128ssimple", "1.3.9999.6.7.17"); \
    oid_add_from_string("rsa3072_sphincsshake128ssimple", "1.3.9999.6.7.18"); \
    oid_add_from_string("sphincsshake192fsimple", "1.3.9999.6.8.10"); \
    oid_add_from_string("p384_sphincsshake192fsimple", "1.3.9999.6.8.11"); \
    oid_add_from_string("sphincsshake192ssimple", "1.3.9999.6.8.12"); \
    oid_add_from_string("p384_sphincsshake192ssimple", "1.3.9999.6.8.13"); \
    oid_add_from_string("sphincsshake256fsimple", "1.3.9999.6.9.10"); \
    oid_add_from_string("p521_sphincsshake256fsimple", "1.3.9999.6.9.11"); \
    oid_add_from_string("sphincsshake256ssimple", "1.3.9999.6.9.12"); \
    oid_add_from_string("p521_sphincsshake256ssimple", "1.3.9999.6.9.13");

#define QSC_OIDS_KEX \
    oid_add_from_string("kyber512", "1.3.6.1.4.1.2.267.8.2.2"); \
    oid_add_from_string("kyber768", "1.3.6.1.4.1.2.267.8.3.3"); \
    oid_add_from_string("kyber1024", "1.3.6.1.4.1.2.267.8.4.4"); \
    oid_add_from_string("mlkem512", "2.16.840.1.101.3.4.4.1"); \
    oid_add_from_string("mlkem768", "2.16.840.1.101.3.4.4.2"); \
    oid_add_from_string("mlkem1024", "2.16.840.1.101.3.4.4.3");

#define QSC_OIDS_MAYO \
    oid_add_from_string("mayo1", "1.3.9999.8.1.1"); \
    oid_add_from_string("mayo2", "1.3.9999.8.2.1"); \
    oid_add_from_string("mayo3", "1.3.9999.8.3.1"); \
    oid_add_from_string("mayo5", "1.3.9999.8.5.1");

#define QSC_OIDS_CROSS \
    oid_add_from_string("CROSSrsdp128balanced", "1.3.6.1.4.1.62245.2.1.1"); \
    oid_add_from_string("CROSSrsdp128fast", "1.3.6.1.4.1.62245.2.1.2"); \
    oid_add_from_string("CROSSrsdp128small", "1.3.6.1.4.1.62245.2.1.3");