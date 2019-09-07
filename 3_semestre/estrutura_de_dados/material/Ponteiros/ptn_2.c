#include <stdio.h>
#include <stdbool.h>

void main(void){

    int i = 2017;
    int *p;

    p = &i;

    printf("O endereco da variavel i em memoria eh: %p\n", &i);

    printf("O endereco alocado no ponteiro eh: %p\n", p);
    
    printf("O conteudo de p eh: %d\n", *(p) + 1);

}