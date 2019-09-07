/*

    Realizando verificações dos elementos da lista

*/

#include <stdio.h> 
#include <stdlib.h>

#define TAMANHO_LIMITE 15

int fila[TAMANHO_LIMITE];
int p = 0; //Primeiro elemento da lista
int u = 0; //Ultimo elemento da lista

void
insere(int n){
    //Quando for inserido, o elemento vai para o final da fila    
    //Para inserir é necessário verificar se a lista não está cheia

    if(u == TAMANHO_LIMITE){
        printf("A lista está cheia!\n");
        return;
    }

    fila[u++] = n;

}

void
exclui(void){
    //Toda exlusão da lista é feita no primeiro elemento da lista
    //Para excluir é necessário verificar se a lista não está vazia

    if(u == p){
        printf("A lista está vazia!\n");
    }

    fila[p++];
}

void
mostra(void){
    for(int i = 0; i < u; i++){
        printf("Elemento %d: %d\n", i, fila[i]);
    }
}

void
main(void){

    printf("Inserindo elementos na lista\n");
    insere(23);
    insere(12);
    insere(32);

    printf("Veja os elementos presentes na lista\n");
    mostra();

}

