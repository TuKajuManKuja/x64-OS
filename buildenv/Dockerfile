FROM randomdude/gcc-cross-x86_64-elf

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install nasm -y
RUN apt-get install grub-pc-bin -y
RUN apt-get install grub-common -y
RUN apt-get install xorriso -y

VOLUME /root/env
WORKDIR /root/env

# Run container: docker run --rm -it -v $PWD:/root/env x64-os