#!/bin/bash

clang -c *.c
ar -rc minilibmx.a *.o
ranlib minilibmx.a

