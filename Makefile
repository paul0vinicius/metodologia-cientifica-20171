all: clean compile
	./ordenar.sh shell_sort ./datasets/dataset1.txt
	./ordenar.sh quick_sort ./datasets/dataset1.txt
	#./ordenar.sh bucket_sort ./datasets/dataset1.txt

compile:
	gcc ./c_algorithms/shell_sort.c -o shell_sort
	mv shell_sort ./c_executables
	gcc ./c_algorithms/quick_sort.c -o quick_sort
	mv quick_sort ./c_executables
	#gcc ./c_algorithms/bucket_sort.c -o bucket_sort
	#mv bucket_sort ./c_executables

clean:
	rm -rf ./c_executables/* *.txt