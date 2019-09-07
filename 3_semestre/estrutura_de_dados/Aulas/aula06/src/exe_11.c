/*
CÓPIA. Escreva uma função que faça uma cópia de uma
lista dada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pio{

    int CONTENT;
    struct pio * NEXT;

} CELULA; 


void insert(int content, CELULA *lista){

    CELULA *new;
    new = malloc(sizeof(CELULA));

    new -> CONTENT = content;
    new -> NEXT = lista -> NEXT;

    lista -> NEXT = new;

}

void imprime(CELULA *lista){

    CELULA *p;
    p = malloc(sizeof(CELULA));

    p = lista;

    while(p != NULL){

        printf("%d\n", p -> CONTENT);

        p = p -> NEXT;

    }
}

CELULA *copy(CELULA *lista){

    CELULA *copia, *p;
    copia = malloc(sizeof(CELULA));
    
    p = lista;

    while(p != NULL){

        insert(p -> CONTENT, copia);

        p = p -> NEXT;

    }

    return copia;
}

void main(void){

    CELULA *lista, *copia;
    lista = malloc(sizeof(CELULA));

    int array[] = {1,2,3,4,5};

    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
        insert(array[i], lista);

    
    copia = copy(lista);

    printf("Lista 1\n");
    imprime(lista);

    printf("Lista 2\n");
    imprime(copia);
}