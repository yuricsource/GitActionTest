FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    chrpath \
    diffstat \
    gawk \
    git \
    python3 \
    python3-pip \
    python3-pexpect \
    wget \
    locales \
    sudo && \
    apt-get clean

WORKDIR /yocto
CMD ["/bin/bash"]
