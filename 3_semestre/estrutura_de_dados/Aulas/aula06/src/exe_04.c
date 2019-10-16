/*

MÍNIMO. Escreva uma função que encontre uma célula
de conteúdo mínimo. Faça duas versões: uma iterativa
e outra recursiva.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lmp{

    int conteudo;
    struct lmp *proximo;

} CELULA;

void insere(int conteudo, CELULA *lista){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));
    
    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;
}

void min(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    int minimo = p -> conteudo;

    while(1){

        p = p -> proximo;
        
        if(minimo > p -> conteudo)
            minimo = p -> conteudo;
        
        if(p -> proximo == NULL)
            break;

    }
    printf("O valor mínimo é: %d\n", minimo);
}

void main(void){

    CELULA *lista;
    lista = malloc(sizeof(CELULA));

    lista -> proximo = NULL;

    int array[] = {4,20,40,60,80,100};

    for(int i = 0; i < sizeof(CELULA) / sizeof(int); i++)
        insere(array[i], lista);


    min(lista);

}