#include <stdio.h>
#include <stdlib.h>

typedef struct x {

    int a;
    int b;
    int c; 

} vars;

int main(void){

    int x; //4 bytes
    double y; //8 bytes
    int vetor[10];

    // sizeof => Calcula o tamanho em bytes do tipo de dado análisado

    printf("%li\n", sizeof(int *)); //Tamanho do ponteiro (Indiferente do tipo que acompanha, o tamanho do ponteiro é sempre 8 bytes)

    //Verificando o tamanho do vetor
    printf("%li\n", sizeof(vetor));

    //Verificando o tamanho da estrutura
    //(Faz a soma dos tamanhos)
    printf("%li\n", sizeof(vars));

    return 0;
}