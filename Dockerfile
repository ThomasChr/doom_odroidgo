FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
        git \
        wget \
        libncurses-dev \
        flex \
        bison \
        gperf \
        python \
        python-pip \
        python-setuptools \
        python-serial \
        python-click \
        python-cryptography \
        python-future \
        python-pyparsing \
        python-pyelftools \
        cmake \
        ninja-build \
        ccache \
        libusb-1.0 \
    && rm -rf /var/lib/apt/lists/*

RUN git clone --recursive https://github.com/espressif/esp-idf.git
RUN ./esp-idf/install.sh
RUN echo ". /esp-idf/export.sh" >> /root/.bashrc
