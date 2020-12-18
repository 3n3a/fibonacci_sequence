#!/bin/bash
HELP="file.sh <n-th term> <filename>"
if [[ "$1" -eq "--help" ]]; then
  echo $HELP
elif [[ "$1" -eq "-h" ]]; then
  echo $HELP
elif [[ "$1" -gt 0 ]]; then
  NUM=$(expr $1 + 1)
  FILE=$2
  sed "${NUM}q;d" $FILE 
else
  echo $HELP
fi
