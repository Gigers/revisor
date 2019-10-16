/*
LIBERAÇÃO. Escreva uma função que aplique a função
free a todas as células de uma lista encadeada.
Estamos supondo, é claro, que cada célula da lista foi
originalmente alocada por malloc
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int conteudo;
    struct cell * proximo;
}CELULA;

void
insere(CELULA * celula, int conteudo){
    CELULA * newCell = malloc(sizeof(CELULA));
    
    newCell -> conteudo = conteudo;
    newCell -> proximo = celula -> proximo;
    celula -> proximo = newCell;
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
alcatraz(CELULA * celula){
    
    CELULA * p = celula -> proximo;

    while(p != NULL){
    
        CELULA * lixo = malloc(sizeof(CELULA));
        lixo = celula -> proximo;
        celula -> proximo = lixo -> proximo;
        
        free(lixo);
        p = p -> proximo;
    
    }
}

void
main(void){

    CELULA * cabeca = malloc(sizeof(CELULA));
    cabeca -> proximo = NULL;
    
    for(int i = 1; i <= 10; i ++)
        insere(cabeca, i * 50);

    printf("Antes de liberar todos\n");
    exibe(cabeca);
    printf("Depois de liberar todos\n");
    alcatraz(cabeca);
    exibe(cabeca);
}