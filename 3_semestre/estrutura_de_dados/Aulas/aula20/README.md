# Aula - 14/11/2017


## Busca binária em vetor circular

Dicas:
* Sempre utilizar as pontas como referência;
* Verificar o valor atual, se este for maior que a ponta do lado que foi utilizado, ir em posição contrária

## Continuação da revisão da matéria

### Algoritimos de ordenação

#### Inserção

Realizar a ordenação do seguinte elemento:

[7, 3, 0, 6, 4, 2, 5, 1]

Solução
[3, 7]

[0, 3, 7]

[0, 3, 6, 7]

[0, 3, 4, 6, 7]

[0, 2, 3, 4, 6, 7]

[0, 2, 3, 4, 5, 6, 7]

* OBS: A vantagem do algoritimo de inserção em relação ao de seleção, é que ele olha para o lado esquerdo

#### Seleção

Realizar a ordenação do seguinte elemento:

[7, 3, 0, 6, 4, 2, 5, 1]

[0, 3, 7, 6, 4, 2, 5, 1]

[0, 1, 7, 6, 4, 2, 5, 3]

[0, 1, 2, 6, 4, 7, 5, 3]

[0, 1, 2, 3, 4, 7, 5, 6]

[0, 1, 2, 3, 4, 5, 7, 6]

[0, 1, 2, 3, 4, 5, 6, 7]


* OBS: É pior que o algoritimo de inserção, pois todos os casos são ruins.

#### Mergesort

n * log(n)2

[7, 3, 0, 6, 4, 2, 5, 1]

[7, 3, 0, 6] [4, 2, 5, 1]

[7, 3] [0, 6] [4, 2] [5, 1]

[7] [3] [0] [6] [4] [2] [5] [1]

[3, 7] [0, 6] [2, 4] [5, 1]

[0, 3, 6, 7] [1, 2, 4, 5]

[0, 1, 2, 3, 4, 5, 6, 7]


*OBS: Seu grande problema é que ocupa o dobro de memória. Ou seja, caso haja um vetor de 10 posições, será utilizado um vetor auxiliar de 10 posições.


#### Quick sort

* Pior caso: n ^ 2 (Ocorre quando tenta ordenar um elemento já ordenado)
* Prática: n * log(n) 2

Descrição: É definido um pivot, e ele faz a separação dos elementos, menores para a esquerda e maiores para a esquerda

#### Busca binária

<code>log(n) 2 é muito mais rápido que n</code>

Veja abaixo a quantidade de passos que será utilizado para ordenar um vetor com um bilhão de elementos

```python
import math
n = 1000000000
math.log(n, 2)
29.897352853986263
```

É possível perceber que este é um processo muito rápido.

Para utilizar a busca binária é necessário que o elemento esteja ordenado

#### Bucket sort

Para números grandes utilizar bucket sort

### Algoritimos de enumeração (Backtrack)

"Caso você não tenha nada, um algoritimo ruim é melhor. Já que algoritimo ruim é melhor que nada", Masanori. Fernando

#### Enumeração

Gasto: 2 ^ n

Gera todas as subsequências dada uma sequência

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
3

#### Permutação

Gasto: n!

### Busca de palavras em um texto

#### Algoritmo de busca de expressões Boyer-Moore

É bastante rápido por aproveitar a informação para realizar as comparações.

#### Árvores binárias (BTree)

log(2)2

O princípio básico é o mesmo da busca binária.

#### Árvore binária de busca

É utilizada em listas encadeadas. Utilizo listas encadeadas pois inserção e remoção em vetores são ruins. Assim sendo necessário lista encadeada.

Porém a busca binária para ser aplicada a lista encadeada é necessário uma estrutura de dados que trabalhe com ponteiros. Neste caso árvore binária.

EDR (Pós-ordem)
    * Esquerda-Direita-Raiz;