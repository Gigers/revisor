/*
MÍNIMO. Escreva uma função que encontre uma célula
de conteúdo mínimo. Faça duas versões: uma iterativa
e outra recursiva.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct yo{

    int conteudo;
    struct yo * proximo;

} CELULA;

void insere(int conteudo, CELULA * lista){

    CELULA * new;
    new = malloc(sizeof(CELULA));

    new -> conteudo = conteudo;
    new -> proximo = lista -> proximo;

    lista -> proximo = new;
}

void imprime(CELULA * lista){

    CELULA *p;
    
    for(p = lista; p -> proximo != NULL; p = p -> proximo)
        fprintf(stdout, "%d\n", p -> conteudo);

}


void min(CELULA * lista){

    CELULA *p;
    p = lista -> proximo;

    int min = p -> conteudo;

    while(1){

        p = p -> proximo;

        if(min > p -> conteudo)
            min = p -> conteudo;
        
        if(p -> proximo == NULL)
            break;

    }

    fprintf(stdout, "O valor minimo é: %d\n", min);
    
}

void main(void){

    CELULA *lista;
    lista = malloc(sizeof(CELULA));

    int array[] = {1,2,3,4,5};

    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
        insere(array[i], lista);
    
    imprime(lista);

    min(lista);

}