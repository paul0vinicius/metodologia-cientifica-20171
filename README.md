# Metodologia Científica - 2017.1 - Projeto da disciplina

# Instruções de uso

- `make all`: executa os testes default. Os testes default incluem rodar todos os datasets existentes.
- `make clean`: limpa o ambiente de testes.

# Algoritmos disponíveis

- QuickSort
- ShellSort
- BucketSort (Implementação está com problemas, melhor substituir por outro algoritmo)

# TO DO:
- Elaborar mais datasets com números aleatórios variando em tamanho: 10, 100, 100K, 1M, 10M, 100M elementos.
- Elaborar asserts para as implementações dos algoritmos, o que equivale aos testes de unidade para C.

# Formato do dataset:

n 					-> Tamanho dos dados (array)
a b c d e... 		-> Elementos a serem ordenados
...
...
...
y 					-> Tamanho dos dados (array)
j k l m n... 		-> Elementos a serem ordenados
-1 					-> Indicador EOF