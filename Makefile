all: clean compile
	./run_all.sh

compile:
	gcc ./c_algorithms/shell_sort.c -o shell_sort
	mv shell_sort ./c_executables
	gcc ./c_algorithms/quick_sort.c -o quick_sort
	mv quick_sort ./c_executables
	gcc ./c_algorithms/merge_sort.c -o merge_sort
	mv merge_sort ./c_executables

clean:
	rm -rf ./c_executables/* *.txt