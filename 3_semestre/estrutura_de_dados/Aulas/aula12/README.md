# Aula - 04/10/2017

## EP
* Entrega do EP no dia 22 de outubro

## Algoritimos de ordenação

### Busca binária
* Divido até encontrar o X;
* Algoritimo em log2(n)

### Algoritimos ruins (n ^ 2)
* Inserção:
    * Utiliza o lado esquerdo;
* Seleção:
    * Utiliza apenas o lado direito;

### Algoritimos bons (log2(n))
* Mergesort:
    * Divide até ter arrays atómicos;
    * Dos arrays atómicos, ele faz as comparações.
* Heapsort
* Quicksort (n * log2(n)):
    * Utiliza um pivô para realizar a comparação;

* Timsort;
* Bucketsort.

## Algoritimos de 'força bruta'

### Algoritimo de enumeração
* Enumerar = Fazer uma lista de todos os objetos de determinado tipo;

<code>
1
1 2
1 2 3
1 2 3 4
</code>

Quando chegar no máximo, remove o último e incremente o anterior ao ultimo, caso o último elemento não tenha sido alcançado, deverá ser adicionado elementos até chegar no máximo, para então repetir o passo citado no inicio

<code>
1
1 2
1 2 3
1 2 3 4
1 2 4
1 3
1 3 4
1 4
2
2 3 
2 3 4
2 4
3
3 4
4
</code>

[1, 2, 3, 4]
['a', 'b', 'c', 'a']
'a' == 'a'

n = 4
2 ^ 4 = 16 - 1 = 15

* Mesmo sendo ruim estudamos para:
    * Pode ser bom;
    * Caso haja tempo.

OBS: Cairá na prova (Algoritimo de enumeração)

### Avaliação
Para dizer se um algoritimo é bom ou ruim, deve-se levar em conta dois tópicos:
* Passos;
* Memória.