#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -g -c -fPIC *.c
gcc *.o -shared -o liball.so
