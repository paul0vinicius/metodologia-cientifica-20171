#!/bin/bash

for dataset in datasets/*.txt; do
		for algorithm in shell_sort quick_sort merge_sort; do
			echo "$algorithm" "$dataset"
			./ordenar.sh "$algorithm" "$dataset"
		done
	done