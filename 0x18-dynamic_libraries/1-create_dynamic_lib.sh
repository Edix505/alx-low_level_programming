#!/bin/bash
gcc -c -Wall -fPIC *.c 
gcc  -shared -o liball.so *.o  
