/*

    calloc() -> Cria um escopo de variaveis que serão alocadas

    assim é possível alocar Z espaços de memória com tamanho Y cada um

    ou seja, calloc(5, sizeof(int)), estarei alocando 20 bytes de memória,

    e todos os espaços alocadas são inicializados com valor 0 
    (Diferente do malloc que começa não trata o lixo de memória)

*/
#include <stdio.h> 
#include <stdlib.h>

void main(void){

    int *p;
    p = calloc(10, sizeof(int));

    //Como a memória foi dividida é possível acessar os diferentes espaços alocados da seguinte maneira

    *p = 10; //Alocando no primeiro espaço
    *(p + 1) = 20; //Alocando no segundo espaço

    //*(p + n) e assim até o limite de tamanho

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));

}