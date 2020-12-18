#!/bin/bash
NUM=$(expr $1 + 1)
FILE=$2
sed "${NUM}q;d" $FILE 
