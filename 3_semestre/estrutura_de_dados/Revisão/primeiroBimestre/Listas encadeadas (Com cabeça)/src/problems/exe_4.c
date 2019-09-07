/*
MÍNIMO. Escreva uma função que encontre uma célula
de conteúdo mínimo. 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int conteudo;
    struct cell * proximo;
}CELULA;

void
insere(CELULA * celula, int conteudo){
    CELULA * nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = celula -> proximo;
    celula -> proximo = nova;
}

int
Minimo(CELULA * celula){
    
    CELULA * p = celula -> proximo;
    int minimo = p -> conteudo;

    while(p != NULL){
        if(minimo > p -> conteudo)
            minimo = p -> conteudo;
        p = p -> proximo;
    }
    return minimo;
}

void
exibe(CELULA * celula){
    CELULA * p = celula -> proximo;

    while(p != NULL){
        printf(" %d ", p -> conteudo);
        p = p -> proximo;
    }
}

void
main(void){
    CELULA * cabeca = malloc(sizeof(CELULA));

    insere(cabeca, 2);
    insere(cabeca, 3);
    insere(cabeca, 1);

    printf("O menor valor presente na lista é o: %d\n", Minimo(cabeca));
}