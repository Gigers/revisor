/*
    VETOR PARA LISTA. Escreva uma função que copie um vetor para uma lista encadeada.
    Utilizando ponteiro de ponteiro
    Onde ao definir a estrutura ele cria um ponteiro para a mesma
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{

    int conteudo;
    struct lista *prox;

}*LISTA;

void inserir(LISTA *elemento, int conteudo){

    LISTA novo = (LISTA) malloc(sizeof(LISTA));

    novo -> conteudo = conteudo;

    novo -> prox = *elemento;

    *elemento = novo;

}

void imprime(LISTA temp){

    while(temp != NULL){

        printf("%d\n", temp -> conteudo);

        temp = temp -> prox;
    }

}

void main(int argc, char *argv[]){

    LISTA list = NULL;
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int maximo = (int) sizeof(vetor) / sizeof(int);

    for(int i = 0; i < maximo; i++){

        inserir(&list, vetor[i]);

    }

    imprime(list);

}