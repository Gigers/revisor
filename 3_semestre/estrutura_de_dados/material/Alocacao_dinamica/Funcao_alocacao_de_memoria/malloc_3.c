// Verificando se o programa consegue alocar a memória

#include <stdio.h>
#include <stdlib.h>

void main(void){


    int *p;

    p = malloc(sizeof(int));

    // p = NULL;

    *p = 12345;

    if(p == NULL){
        printf("Malloc com erros para alocar memória!\n");
    } else {
        printf("Valor: %d\n", *p);
        printf("Ponteiro: %p\n", p);
    }

}