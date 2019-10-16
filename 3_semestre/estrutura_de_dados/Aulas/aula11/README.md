# Aula - 26/09/2017

# Algoritimos rápidos de ordenação - Mergesort

O processo de intercalar demora N (Sendo ordem de grandeza N/2)

Este é um processo mais rápido que o processo de inserção e de comparação

* Abstração

0° - Receba o vetor
    [6, 7, 4, 0, 2, 1, 5, 3]
1° - Divide o vetor recebido na metade
    [6, 7, 4, 0]  [2, 1, 5, 3]
2° - Divide novamente os campos gerados na divisão anterior
    [6, 7] [4, 0] [2, 1] [5, 3]
3° - Divide novamente os campos gerados na divisão anterior
    [6] [7] [4] [0] [2] [1] [5] [3]
4° - Junta em pares de dois sorteando os menores
    [6,7] [0, 4] [1,2] [3,5]
5° - 0, 4 ,6 , 7

6,3,0,7,5,1, 2, 4

# Considerações que caem na prova

A - origem
B - Destino

Este algoritimo é bom porém consome o dobro de memória


Para um programa ser bom deve se levar em consideração dois tópicos:

* Quantidade de passos feitas pelo programa
* Espaço de memória utilizado

* Considerações sobre o algoritimo Mergesort
    * 1° - Muito mais rápido que os algoritimos de inserção e seleção (n * log(n) < n ^ 2)
    * 2° - Ocupa o dobro do espaço;
    * 3° - As metades são independentes, posso fazer em paralelo (Com threads, multiplos processadores)

# Heapsort

log(n) / 2 

# Quicksort

Se este processo for feito recursivo, no final hávera o dobro de elementos no vetor

1 2 (2 ^ 2) (2 ^ 4) (2 ^ 8)  (2 ^ 16) == log/2(n)

Aqui não há vetores auxiliares

* Considerações importantes

    * 1° - Se o vetor estiver ordenado, quicksort demora n ^ 2 passos
        * Exemplo de um passo: [0, 1, 2, 3, 4]; pivô = 0
        <code>
            menores = [] 
            maiores = [1,2,3,4]
        </code>
        * Este é o pior caso, onde todos os elementos ficam do mesmo lado
    * 2° - No entanto o Quicksort é muito rápido. Ninguém ordena um vetor ordenado
    * No pior caso n ^ 2, na media log/2(n)

# Conteúdo da prova

* Ordenar por mergesort sem ver o código
* Heapsort não cai na prova
* Quicksort
* Explicar os conceitos do quicksort