/*
    Implementação de uma fila utilizando vetor;
    O primeiro elemento da fila é: p
    E o ultimo elemento da fila é: u
    Conteúdo é: y

    Para adicionar usa-se: [u++] = y;
        * [u++] = y, equivale:
            u = u + 1;    
            fila[u] = y;
    Para remover usa-se: [p++];
        * [p++] , equivale:
            fila[p];
            p = p + 1;            

    Ao trabalhar com arrays, as filas tem valores pré-definidos. E é importante lembrar que 
    ao inserir um elemento em uma lista, estamos fazendo a inserção no final.
    Lembre-se que aqui a natureza dos elementos é irrelevante. 

*/

/* A fila abaixo representa fila[p..u - 1] */ 

// Vazia quando p == u
// E cheia se u == N

#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0
#define N 12

int fila[N];

int u = 0;
int p = 0;

int
testaVazio(){
    if(u == p){
        return True;
    } 
    return False;
}

int
testaCheio(){
    if(u == N){
        return True;
    }

    return False;
}

void 
insere(int y){
    fila[u++] = y;
}

void
remover(){
    
    fila[p++];

}

void exibe(){

    for(int i = p; i < u; i++){
        printf("%d\n", fila[i]);
    }
}

void 
main(void){

    for(int j = 0; j < N - 3; j++){
        insere(j + 2);
    }
    printf("Antes da remoção\n");
    exibe();
    printf("======");
    printf("Depois da remoção\n");
    remover();
    exibe();
    printf("======");
    printf("Depois de mais uma remoção\n");
    remover();
    exibe();
    printf("======\n");



    return;
}