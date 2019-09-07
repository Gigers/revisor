/*
    Suponha que, diferentemente da convenção adotada acima, a parte do vetor ocupada pela fila é fila[p..u].  Escreva o código das funções colocanafila, tiradafila, filavazia e filacheia.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 15

int fila[TAMANHO_MAXIMO];

int p = 0;
int u = 0;

//Verifica se a lista está vazia
void
filavazia(){
    if(p == u){
        printf("A fila está vazia\n");
        return;
    }
}

void filacheia(){
    if(u == TAMANHO_MAXIMO){
        printf("A fila está cheia\n");
        return;
    }
}

void
colocanafila(int numero){

    filacheia();

    fila[u++] = numero;

}

void
tiradafila(){
    
    filavazia();
    
    fila[p++];

}
void
exibe(){
    
    for(int i = 0; i < TAMANHO_MAXIMO; i++){
        printf("%d\n", fila[i]);
    }

}

void
main(void){
    
    for(int i = 0; i < TAMANHO_MAXIMO; i++){
        colocanafila(i + 3);
    }

    exibe();

}