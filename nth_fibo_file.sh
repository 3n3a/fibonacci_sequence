#!/bin/bash
NUM=$(expr $1 + 1)
sed "${NUM}q;d" fibonacci_1-999999999.txt
