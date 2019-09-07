/*
    malloc (Memory allocation) => Responsável em pedir para o S.O um bloco de memória, 
    com o valor definido pelo programador, o S.O verifica e libera a memória que não está alocada ainda

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // malloc => em bytes
    // Em caso de vetor fazer (quantidade de dados no vetor * sizeof(tipo_do_dado))
    //Fazendo casting para forçar o retorno da função a sair com o tipo int
    //Malloc não remove lixo da memória
    int *p = (int *) malloc(sizeof(int));

    // A função maloc retorna um ponteiro do tipo void (Genérico)

    return 0;
}