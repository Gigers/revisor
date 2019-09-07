/*
    Implementação que simula processos para demonstrar como resolver
    o problema do barbeiro dorminhoco.

    As regras são básicas:
        Barbeiro:
            Se o barbeiro não tiver clientes, ele dorme.
            Caso haja cliente o barbeiro vai atender

        Cliente:
            Caso o barbeiro esteja livre ele vai direto ao barbeiro
            Se o barbeiro estiver atendendo ele senta nos bancos disponiveis para a espera
            Caso não haja bancos disponíveis ele vai embora
*/

// Misra - Padrão

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CADEIRAS 5

int fila[CADEIRAS];

int p = 0;
int u = 0;
int barbero = 0;

int UP();
void DOWN();
void processo();
void executa_processo();
void barbeiro();
void cliente();

//Simula Execução do processo
void
processo(){

    sleep(3);

}

void
executa_processo(){
    
    //Simula o barbeiro trabalhando
    processo();
    fila[p++];

}

// Instrução UP
int
UP(){
   
    if(barbero == 0){

        barbero = 1;

    }

}

// Instrução DOWN
void
DOWN(){

    barbero = 0;

}

//Mutex
void
barbeiro(){


    if(UP() == 1){

        printf("Barbeiro trabalha!\n");
        executa_processo();
        DOWN();

    } else {

        printf("Cliente espera\n");
        cliente();
    }
}

// Processo
void
cliente(){

    printf("Chega um cliente\n");
        
    if(p == u){
        printf("Ele vai ser atendido na hora!\n");
        // chega_cliente(y);
        barbeiro();
    } else {
        // printf("Ele terá de ficar na fila de espera\n");
        barbeiro();
    }

}

void
chega_cliente(int y){
    
    fila[u++] = y;

}

void
main(void){

    chega_cliente(321);    
    cliente();
    
    for(int i = 0; i < CADEIRAS; i++){
        chega_cliente(i);
    }
}