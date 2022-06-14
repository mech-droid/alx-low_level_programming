#!/bin/bash
gcc gcc -c -fpic *.c
gcc -shared -o liball.so *.o
