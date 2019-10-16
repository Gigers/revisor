/*

    Quando alocamos memória, ela fica alocada até o término do programa ou 
    quando o programa faz a liberação de memória

    free() -> A função free trabalha exatamente com isso, realizando a limpeza de memórias
    já alocadas

*/
#include <stdio.h>
#include <stdlib.h>


void main(void){

    int *p = malloc(sizeof(int));

    printf("O endereço alocado foi: %p\n", p);

    *p = 1500;

    printf("Valor: %i\n", *p);

    free(p);

    //Veja que o valor não está mais disponível
    printf("Valor: %i\n", *p);

}