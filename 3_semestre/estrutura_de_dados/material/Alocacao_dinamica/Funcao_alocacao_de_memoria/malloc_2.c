#include <stdio.h>
#include <stdlib.h>

void main(void){

    
    //Alocando memória com malloc()
    //malloc(Quantidade (em bytes) a ser alocado)
    //O malloc retorna um ponteiro para o primeiro endereço do bloco alocado
    int *p = malloc(sizeof(int) * 2);

    printf("O endereço alocado foi: %p\n", p);

    //Após alocar ainda é possível definir um valor para o espaço alocado, veja:
    
    *p = 1500;

    printf("%i\n", *p);

}