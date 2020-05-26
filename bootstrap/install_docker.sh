#!/usr/bin/env bash

set -ex

echo 'helloworld'

sudo apt-get purge docker-ce| true

curl -fsSL https://get.docker.com -o get-docker.sh

sudo sh get-docker.sh

rm -rf get-docker.sh

sudo usermod -aG docker $USER

docker info

docker run hello-world


# done
