FROM debian:9

RUN apt-get update && apt-get install --no-install-recommends -y \
    avr-libc \
    avrdude \
    binutils-arm-none-eabi \
    binutils-avr \
    build-essential \
    dfu-programmer \
    dfu-util \
    gcc \
    gcc-arm-none-eabi \
    gcc-avr \
    git \
    libnewlib-arm-none-eabi \
    software-properties-common \
    unzip \
    wget \
    zip \
&& rm -rf /var/lib/apt/lists/*

VOLUME /tmk_keyboard
WORKDIR /tmk_keyboard
COPY . .
WORKDIR /tmk_keyboard/converter/adb_usb

CMD make -f Makefile clean ; make -f Makefile.teensy KEYMAP=jorden teensy