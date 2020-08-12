#!/usr/bin/env bash

set -x

# rpi2 wiring
wireviz  -o output rpi2.yml
mkdir -p rpi2
mv output.* rpi2


# rpi-zero wiring
wireviz  -o output rpi-zero.yml
mkdir -p rpi-zero
mv output.* rpi-zero
