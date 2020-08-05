#!/usr/bin/env bash

set -ex


sudo apt-get install -y qemu
sudo apt-get install -y qemu-system-arm


ariaDownload http://ftp.jaist.ac.jp/pub/raspberrypi/raspbian_lite/images/raspbian_lite-2017-08-17/2017-08-16-raspbian-stretch-lite.zip

wget https://github.com/dhruvvyas90/qemu-rpi-kernel/raw/master/kernel-qemu-4.4.34-jessie

qemu-img convert -f raw -O qcow2 2017-08-16-raspbian-stretch-lite.img raspbian-stretch-lite.qcow

# qemu-img resize raspbian-stretch-lite.qcow +6G


sudo qemu-system-arm \
  -kernel ./kernel-qemu-4.4.34-jessie \
  -append "root=/dev/sda2 panic=1 rootfstype=ext4 rw" \
  -hda raspbian-stretch-lite.qcow \
  -cpu arm1176 -m 256 \
  -M versatilepb \
  -no-reboot \
  -serial stdio \
  -net nic -net user \
  -net tap,ifname=vnet0,script=no,downscript=no
