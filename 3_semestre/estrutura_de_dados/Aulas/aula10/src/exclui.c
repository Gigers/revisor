/*
    Excluindo elementos da lista
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int conteudo;
    struct lista * proximo;

}CELULA;

void
insere(CELULA *lista, int conteudo){

    CELULA * nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;
}

void
exclui(CELULA * lista, int qtd){

    int index;    
    CELULA * p;
    p  = malloc(sizeof(CELULA));

    p = lista -> proximo;

    while(index < qtd){

        p = lista -> proximo;
        lista -> proximo = p -> proximo;

        free(p);

        index++;
    }
}

void
exibe(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    while(p != NULL){

        fprintf(stdout, " %d ,", p -> conteudo);

        p = p -> proximo;
    
    }
    printf("\n");
}

void
main(void){

    CELULA * cabeca;
    cabeca = malloc(sizeof(CELULA));
    
    cabeca -> proximo = NULL;

    for(int i = 1; i <= 100; i++)
        insere(cabeca, i);
    
    exibe(cabeca);

    printf("Excluindo as 3 primeiras células\n");
    exclui(cabeca, 3);

    printf("lista após exlusão\n");
    exibe(cabeca);

}