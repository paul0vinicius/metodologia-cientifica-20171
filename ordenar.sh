#!/bin/bash

if [ "$1" == "shell_sort" ]; then
	cat "$2" | ./c_executables/shell_sort >> output.txt
elif [ "$1" == "quick_sort" ]; then
	cat "$2" | ./c_executables/quick_sort >> output2.txt
elif [ "$1" == "bucket_sort" ]; then
	cat "$2" | ./c_executables/bucket_sort >> output3.txt
fi