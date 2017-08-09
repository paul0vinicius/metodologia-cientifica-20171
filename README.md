# Metodologia Científica - 2017.1 - Projeto da disciplina

# Instruções de uso

## Usando o makefile
- `make all`: Executa todos os datasets existentes para todos os algoritmos.
- `make compile`: Compila e gera os binários executáveis dos arquivos C.
- `make clean`: Limpa o ambiente de testes.

## Usando os scripts
- `./ordenar.sh <nome_algoritmo> <dataset>`: Executa o script e salva seu tempo de execução na pasta 'outputs'.
- `./generate_dataset.sh <numero_datasets> <tamanho_dataset>`: Gera um (ou mais) dataset(s) aleatório(s) com o tamanho especificado pelo usuário (Limite de 2M de elementos).

# Algoritmos disponíveis

- QuickSort
- ShellSort
- MergeSort

# Formato do dataset:  
  
n 					-> Tamanho dos dados (array)  
a b c d e... 		-> Elementos a serem ordenados  
...  
...  
...  
y 					-> Tamanho dos dados (array)  
j k l m n... 		-> Elementos a serem ordenados  
-1 					-> Indicador EOF  