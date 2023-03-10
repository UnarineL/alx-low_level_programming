#!/bin/bash

gcc -c $(ls *.c | grep -v "main.c")

ar -rcs liball.a *.o
