#!/usr/bin/env bash

set -ex

# Install RPi-Monitor‘s public key to trust RPi-Monitor repository:
sudo apt-get install dirmngr
sudo apt-key adv --recv-keys --keyserver keyserver.ubuntu.com 2C0D3C0F

# Execute the following command to add RPi-Monitor into your list of repository:
sudo wget http://goo.gl/vewCLL -O /etc/apt/sources.list.d/rpimonitor.list

# To install RPi-Monitor, execute the following command:
sudo apt-get update
sudo apt-get install rpimonitor
