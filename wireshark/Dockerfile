ARG WIRESHARK_VERSION=4.4.1
ARG INSTALLDIR=/opt/oqssa

FROM alpine:3.20.3

ENV DEBIAN_FRONTEND=noninteractive
ARG WIRESHARK_VERSION
ARG INSTALLDIR

# Install essential dependencies
RUN apk update && apk add --no-cache \
    build-base linux-headers libtool \
    automake autoconf cmake \
    ninja make openssl ca-certificates \
    openssl-dev git wget ttf-dejavu ttf-freefont

RUN update-ca-certificates

# Get all sources
WORKDIR /opt
RUN git clone --depth 1 https://github.com/open-quantum-safe/liboqs.git && \
    git clone --depth 1 --branch master https://github.com/openssl/openssl.git && \
    git clone --depth 1 https://github.com/open-quantum-safe/oqs-provider.git && \
    wget -O wireshark.tar.xz https://www.wireshark.org/download/src/all-versions/wireshark-${WIRESHARK_VERSION}.tar.xz && \
    mkdir wireshark && \
    tar -xf wireshark.tar.xz --strip-components=1 -C /opt/wireshark && \
    rm wireshark.tar.xz

# Build and install liboqs
WORKDIR /opt/liboqs/build
RUN cmake -G "Ninja" \
    -DCMAKE_INSTALL_PREFIX=${INSTALLDIR} \
    -DBUILD_SHARED_LIBS=ON \
    -DOQS_USE_OPENSSL=OFF .. && \
    ninja -j$(nproc) && ninja install

# Build and install OpenSSL
WORKDIR /opt/openssl
RUN LDFLAGS="-Wl,-rpath,${INSTALLDIR}/lib64" ./config shared --prefix=${INSTALLDIR} && \
    make -j$(nproc) && \
    make install_sw install_ssldirs

# Access custom binaries without needing full paths
ENV PATH="${INSTALLDIR}/bin:${PATH}"

# Build and install the OQS Provider
WORKDIR /opt/oqs-provider
RUN ln -s ../openssl . \
    && cmake -DOPENSSL_ROOT_DIR=${INSTALLDIR} \
             -DCMAKE_BUILD_TYPE=Release \
             -DCMAKE_PREFIX_PATH=${INSTALLDIR} \
             -S . -B _build \
    && cmake --build _build -j$(nproc) \
    && cp _build/lib/oqsprovider.so ${INSTALLDIR}/lib64/ossl-modules

# Modify OpenSSL configuration to enable OQS Provider
RUN CONFIG_FILE="${INSTALLDIR}/ssl/openssl.cnf" && \
    sed -i "s/default = default_sect/default = default_sect\noqsprovider = oqsprovider_sect/g" "$CONFIG_FILE" && \
    sed -i "s/\[default_sect\]/\[default_sect\]\nactivate = 1\n\[oqsprovider_sect\]\nactivate = 1\n/g" "$CONFIG_FILE";

# Install dependencies needed for building Wireshark
WORKDIR /opt/wireshark
RUN ./tools/alpine-setup.sh --install-all

# Integrate OIDs from qsc.h into Wireshark
COPY /qsc.h /opt/wireshark/
RUN cp /opt/wireshark/qsc.h /opt/wireshark/epan/dissectors && \
    sed -i "s/#include \"config.h\"/#include \"config.h\"\n#include \"qsc.h\"/g" /opt/wireshark/epan/dissectors/packet-pkcs1.c && \
    sed -i "s/#include \"config.h\"/#include \"config.h\"\n#include \"qsc.h\"/g" /opt/wireshark/epan/dissectors/packet-tls-utils.c && \
    sed -i "s/oid_add_from_string(\"sha224\", \"2.16.840.1.101.3.4.2.4\");/oid_add_from_string(\"sha224\", \"2.16.840.1.101.3.4.2.4\");\nQSC_OIDS_SIGS\nQSC_OIDS_KEX\nQSC_OIDS_MAYO\nQSC_OIDS_CROSS/g" /opt/wireshark/epan/dissectors/packet-pkcs1.c

# Build Wireshark
WORKDIR /opt/wireshark/build
RUN cmake -G Ninja -DQT5=OFF -DQT6=ON \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_INSTALL_PREFIX=${INSTALLDIR} .. && \
    ninja -j$(nproc) && \
    ninja install

# Run tests for OQS Provider
WORKDIR /opt/oqs-provider
RUN ./scripts/runtests.sh -j$(nproc)

# Clean up unnecessary files to reduce image size
RUN rm -rf /opt/liboqs /opt/openssl /opt/oqs-provider /opt/wireshark

CMD ["wireshark"]