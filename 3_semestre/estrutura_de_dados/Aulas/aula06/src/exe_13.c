/*
CONCATENAÇÃO. Escreva uma função que concatene
duas listas encadeadas (isto é, “amarre” a segunda no
fim da primeira).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct yo{

    int conteudo;
    struct yo *proximo;

} CELULA;

void insere(int conteudo, CELULA *lista){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;

    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

void imprime(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    while(p != NULL){

        printf("%d\n", p -> conteudo);

        p = p -> proximo;

    }

}

void concatena(CELULA *listaUm, CELULA *listaDois){

    CELULA *p;
    p = listaUm -> proximo;

    while(p -> proximo != NULL)
        p = p -> proximo;

    p -> proximo = listaDois -> proximo;

}

void main(void){

    CELULA *listaUm;
    CELULA *listaDois;

    listaUm = malloc(sizeof(CELULA));
    listaDois = malloc(sizeof(CELULA));

    listaUm -> proximo = NULL;
    listaDois -> proximo = NULL;

    int impar[] = {1,3,5,7,9};
    int par[] = {2,4,6,8};

    for(int i = 0; i < sizeof(impar) / sizeof(int); i++){

        insere(impar[i], listaUm);

    }

    for(int i = 0; i < sizeof(par) / sizeof(int); i++){

        insere(par[i], listaDois);

    }

    concatena(listaUm, listaDois);

    imprime(listaUm);

}