/*
    Suponha que, diferentemente da convenção adotada acima, a parte do vetor ocupada pela fila é fila[0..u].  Escreva o código das funções colocanafila, tiradafila, filavazia e filacheia.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 5

int fila[MAXIMO];

int u = 0;
int p = 0;

int
filavazia(){
    if(u == 0){
        return 1;
    } else {
        return 0;
    }
}

int filacheia(){
    if(u == MAXIMO){
        return 1;
    } else {
        return 0;
    }
}

void 
colocanafila(int y){

    if(filacheia){
        fila[u++] = y;    
    } else {
        printf("Não foi possível adicionar o elemento na fila, ela está cheia !\n");
    }

}

void
tiradafila(){
    
    if(u == 0){
        printf("A fila está vazia\n");
    } else {
        fila[p++];
    }

}

void
exibe(){

    for(int i = p; i < u; i++){
        printf("%d\n", fila[i]);
    }

}

void
main(void){
    
    for(int i = p;i < MAXIMO; i++){
        colocanafila(i);
    }
    exibe();

    printf("Removendo elemento da fila\n");
    tiradafila();
    exibe();
}