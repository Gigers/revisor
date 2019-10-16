//Realizando busca linear
//Busca linear é aquela em que os elementos são comparados um a um

//Para realizar esta busca o interessante é se atentar a complexidade do exercício.
//Como já citado, sempre verifique o pior caso, que aqui é quando o elemento encontrado está na ultima posição
//E em seguida o melhor caso, que neste caso é quando o elemento está na primeira posição 

#include <stdio.h>

int linear(int elem, int tam, int vet[]){

    for(int i = 0; i < tam; i++){

        if(vet[i] == elem) return i;

    }
    return -1;
}

int main(void){

    int elem = 23;
    int tam = 10;
    int vetor[] = {45, 33, 5, 6, 87, 23, 1, 99, 98, 10};

    int result = linear(elem, tam, vetor);

    printf("O indice e': %d\n", result);

    return 0;
}