/*
CONCATENAÇÃO. Escreva uma função que concatene duas listas encadeadas (isto é, “amarre” a segunda no fim da primeira).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int conteudo;
    struct cell * proximo;
}CELULA;

void
insere(CELULA * celula,  int conteudo){
    CELULA * novaCell = malloc(sizeof(CELULA));
    
    novaCell -> conteudo = conteudo;
    novaCell -> proximo = celula -> proximo;
    celula -> proximo = novaCell;
}

void
concat(CELULA * lista_1, CELULA * lista_2){
    
    CELULA * p = lista_1 -> proximo;
    
    while(p -> proximo != NULL){
        p = p -> proximo;
    }

    p -> proximo = lista_2 -> proximo;

    free(lista_2); // Destroi a cabeça da segunda lista
}

void
exibe(CELULA * celula){
    CELULA * p = celula -> proximo;
    
    while(p != NULL){
        printf(" %d ", p -> conteudo);

        p = p -> proximo;
    }
    printf("\n");
}

void
main(void){
    CELULA * cabeca_1 = malloc(sizeof(CELULA));
    CELULA * cabeca_2 = malloc(sizeof(CELULA));

    cabeca_1 -> proximo = NULL;
    cabeca_2 -> proximo = NULL;

    for(int ge = 1; ge <= 10; ge++){
        insere(cabeca_1, ge * 10);
        insere(cabeca_2, ge * 20);
    }
    printf("Lista 1\n");
    exibe(cabeca_1);
    printf("Lista 2\n");    
    exibe(cabeca_2);

    concat(cabeca_1, cabeca_2);

    printf("Listas concatenadas\n");
    exibe(cabeca_1);
}