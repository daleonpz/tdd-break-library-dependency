#!/bin/bash

sudo docker build -t test/local .
sudo docker run \
    --rm \
    -v $(pwd):/usr/src/myapp \
    -w /usr/src/myapp \
    --name my_container test/local
    ceedling clobber test:all
