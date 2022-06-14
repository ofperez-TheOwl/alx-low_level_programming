#!/bin/bash
gcc *.c -fPIC
gcc *.o -shared -o liball.so
