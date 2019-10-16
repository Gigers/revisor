/* 

    VETOR PARA LISTA. Escreva uma função que copie um vetor para uma lista encadeada.
    Utilizando ponteiro de ponteiro

    Sem utilizar ponteiro de ponteiro, aqui além de criar um ponteiro, crio também uma estrutura
    a qual o ponteiro irá apontar.

    Veja que a principal diferença está na forma com que eu criei a estrutura.

*/

#include <stdio.h>
#include <stdlib.h>

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

void main(void){

    CELULA cabeca;
    CELULA *lista;
    
    lista = &cabeca;
    cabeca.proximo = NULL;
    
    int vetor[] = {2, 4, 6, 8, 10, 12};

    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){

        insere(vetor[i], lista);

    }
    
    imprime(lista);

}