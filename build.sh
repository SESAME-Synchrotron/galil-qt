#!/bin/bash

git pull
make distclean
qmake galil-3-6.pro
make
