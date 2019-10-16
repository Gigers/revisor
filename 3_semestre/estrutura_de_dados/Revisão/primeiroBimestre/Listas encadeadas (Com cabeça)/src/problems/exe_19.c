/*
INVERSÃO. Escreva uma função que inverta a ordem
das células de uma lista encadeada (a primeira passa a
ser a última, a segunda passa a ser a penúltima etc.).
Faça isso sem criar novas células; apenas altera os
ponteiros.
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

void
inverte(CELULA * celula){

    CELULA * atual, * proximo, * temp;
    
    atual = celula;
    proximo = celula -> proximo;

    while(proximo != NULL){
        temp = proximo -> proximo;
        proximo -> proximo = atual;

        atual = proximo;
        proximo = temp;
    }

    celula -> proximo -> proximo = NULL;
    celula -> proximo = atual;
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

    for(int i = 0; i < 10; i++)
        insere(cabeca, i * 10);

    printf("Antes de inverter\n");
    exibe(cabeca);
    printf("Depois de inverter\n");
    inverte(cabeca);
    exibe(cabeca);
}