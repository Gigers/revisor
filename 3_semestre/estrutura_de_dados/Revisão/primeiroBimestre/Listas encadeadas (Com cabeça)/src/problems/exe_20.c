/*
    Problema do Josephus feito com a ajuda do Akira Kotsugai. Peguei o código dele e fui rescrevendo para entender
    No final ficou igual, mas fiz para entender as operações nas listas circulares.
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
exibe(CELULA * celula){
    CELULA * p = celula -> proximo;

    while(p != NULL){
        printf(" %d ", p -> conteudo);
        p = p -> proximo;
    }
    printf("\n");
}

// Função para criar a lista circular
void 
criaCirculo(CELULA * celula){

    CELULA * p = celula -> proximo;

    while(p -> proximo != NULL)
        p = p -> proximo;
    
    p -> proximo = celula -> proximo;
}

CELULA *
percorreDeleta(int passos, CELULA * celula) {

    CELULA * p, * lixo;
    p = celula;

    for(int i = 1; i < passos; i++)
        p = p -> proximo;
    
        lixo = p -> proximo;
        p -> proximo = lixo -> proximo;
        
        free(lixo);

        return p -> proximo;
}


void
criaSequencia(int soldados, CELULA * celula){

    for(int i = soldados; i > 0; i--)
         insere(celula, i);
}

void
matar(int soldados, int passos, CELULA * celula){

    CELULA * p = celula -> proximo;
    criaSequencia(soldados, celula);
    criaCirculo(celula);

    for(int i = 1; i < soldados; i++){
        p = percorreDeleta(passos, celula);
        celula -> proximo = p;
    }
    printf("%d\n", celula -> proximo -> conteudo);
}

void
main(void){
    CELULA * cabeca = malloc(sizeof(CELULA));
    cabeca -> proximo = NULL;

    matar(50, 3, cabeca);
}