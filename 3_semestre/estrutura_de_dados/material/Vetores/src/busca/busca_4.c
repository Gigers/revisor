//Realizando busca ordenada
//Neste programa é sabe-se que o vetor está ordenado de forma crescente, assim será feita uma verificação para saber há lógica em continuar ou não a busca

#include <stdio.h>

int buscaO(int elem, int size, int vet[]){

    for(int k = 0; k < size; k++){

        if(vet[k] == elem) 
            return k;
        else 
            if(vet[k] > elem) 
                return -1;
    }
}

int main(void){

    int elem = 23;
    int tam = 5;
    int vetor[] = {5 ,10 ,15 ,20 ,23};
    // int vetor[] = {1, 2, 45, 67, 89};

    int result = buscaO(elem, tam, vetor);

    printf("Index: %d", result);

    return 0;
}