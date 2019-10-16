/*

    LIBERAÇÃO. Escreva uma função que aplique a função
    free a todas as células de uma lista encadeada.
    Estamos supondo, é claro, que cada célula da lista foi
    originalmente alocada por malloc.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct io{

    int conteudo;
    struct io *proximo;

} CELULA;

void insere(int conteudo, CELULA *lista){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;

    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

void liberdade(CELULA *lista){

    CELULA *excluido;
    
    excluido = lista -> proximo;
    
    while(lista -> proximo != NULL){

        excluido = lista -> proximo;
        
        lista -> proximo = excluido -> proximo;

        free(excluido); //Excluindo lista (Limpando lugar na memória onde está alocado)

    }

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

    CELULA *lista;
    lista = malloc(sizeof(CELULA));
    lista -> proximo = NULL;

    int array[] = {1,2,3,4,5};
    
    for(int i = 0; i < sizeof(array) / sizeof(int); i++){

        insere(array[i], lista);

    }

    printf("Antes da exclusão\n");
    imprime(lista);

    
    liberdade(lista);

    printf("Depois da exclusão\n");
    imprime(lista);

}