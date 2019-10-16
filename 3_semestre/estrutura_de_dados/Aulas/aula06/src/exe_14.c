/*
CONTAGEM. Escreva uma função que conte o número
de células de uma lista encadeada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct yo{

    int CONTENT;
    struct yo *NEXT;

} CELULA;

void insert(int content, CELULA * lista){

    CELULA *new;
    new = malloc(sizeof(CELULA));

    new -> CONTENT = content;
    new -> NEXT = lista -> NEXT;

    lista -> NEXT = new;

}

int count(CELULA * lista){

    CELULA *p;
    p = lista;

    int cont = 0;

    while(p -> NEXT != NULL){

        cont++;

        p = p -> NEXT;

    }

    return cont;
}

void main(void){

    CELULA *lista;
    lista = malloc(sizeof(CELULA));

    int array[] = {5,6,7,8,9,56};

    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
        insert(array[i], lista);

    printf("São %d elementos\n", count(lista));

}