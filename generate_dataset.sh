#!/bin/bash

# first argument: array size
# second argument: how many arrays will be generated

echo "$1" "$2" | python generate.py >> dataset"$1"_"$2".txt
echo '-1' >> dataset"$1"_"$2".txt
mv dataset"$1"_"$2".txt ./datasets