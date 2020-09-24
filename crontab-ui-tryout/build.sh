#!/usr/bin/env bash

set -ex

docker-compose build

docker push logickee/crontab-ui-rpi
