/*
VETOR PARA LISTA. Escreva uma função que copie um
vetor para uma lista encadeada
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int conteudo;
    struct cell * proximo;
}CELULA;

void
arrayToList(int array[], int size, CELULA * celula){
    
    for(int i = 0; i < size; i++){    
        CELULA * nova = malloc(sizeof(CELULA));
        
        nova -> conteudo = array[i];
        nova -> proximo = celula -> proximo;
        celula -> proximo = nova;
    }
}

void
exibe(CELULA * celula){
    CELULA * p = celula -> proximo;

    while(p != NULL){
        printf(" %d ", p -> conteudo);

        p = p -> proximo;
    }
    printf("\n");
}

void
main(void){
    CELULA * cabeca = malloc(sizeof(CELULA));
    cabeca -> proximo = NULL;
    int array[] = {1, 2, 3, 4, 5};

    arrayToList(array, sizeof(array) / sizeof(int), cabeca);

    exibe(cabeca);
    
}