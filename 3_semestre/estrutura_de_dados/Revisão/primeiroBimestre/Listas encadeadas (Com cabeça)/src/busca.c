/*
    Compilado com: GCC 5.4

    Implementação de funções para realizar busca de conteúdo dentro das células de uma lista
    Utilizando lista com cabeça
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
contains(CELULA * celula, int elemento){
    CELULA * p = celula -> proximo;
    
    for(p; p != NULL; p = p -> proximo)
        if(p -> conteudo == elemento){
            printf("Elemento encontrado\n");
            break;
        }
}

void
main(void){
    CELULA * cabeca = malloc(sizeof(CELULA));
    
    // Inserindo elementos
    for(int ge = 1; ge < 100; ge++)
        insere(cabeca, ge * 100);

    contains(cabeca, 101);
}