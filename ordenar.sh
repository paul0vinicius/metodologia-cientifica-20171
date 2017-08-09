#!/bin/bash

cat "$2" | ./c_executables/"$1" >> output_"$1".txt
mv output_"$1".txt outputs