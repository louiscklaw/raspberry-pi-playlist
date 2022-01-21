#!/usr/bin/env bash

set -ex

mkdir -p ./overlay/etc/nginx/sites-enabled
cp /etc/nginx/sites-enabled/reverseproxy ./overlay/etc/nginx/sites-enabled/reverseproxy
