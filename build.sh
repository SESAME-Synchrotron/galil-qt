#!/bin/bash

git pull
qmake galil-3-6.pro
make distclean
make -j$(nproc)
