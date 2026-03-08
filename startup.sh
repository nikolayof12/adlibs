#!/usr/bin/bash


arduino-cli compile --fqbn arduino:avr:nano ./main/main.ino \
	--build-property "compiler.cpp.extra_flags=-I./main/include/ -I./main/src/ -I./main/"
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:nano ./main/main.ino
