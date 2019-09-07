/*

INVERSÃO. Escreva uma função que inverta a ordem
das células de uma lista encadeada (a primeira passa a
ser a última, a segunda passa a ser a penúltima etc.).
Faça isso sem criar novas células; apenas altera os
ponteiros.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct li{

    int conteudo;
    struct li * proximo;

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

    for(p = lista -> proximo; p != NULL; p = p -> proximo)
        fprintf(stdout, "%d\n", p -> conteudo);
}

void inverte(CELULA *lista){

    CELULA *atual, *proximo, *temp;

    /* Falta implementar a função de inversão */


}

void main(void){

    CELULA *lista;
    lista = malloc(sizeof(CELULA));

    int array[] = {2,4,6,8,10};

    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
        insere(array[i], lista);

    printf("Original: \n");
    imprime(lista);

    printf("Invertido: \n");
    inverte(lista);
    imprime(lista);
}