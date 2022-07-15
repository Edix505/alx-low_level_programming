#!/bin/bash
gcc -c -Werror -fPIC *.c
gcc -shared -o liball.so *.o
