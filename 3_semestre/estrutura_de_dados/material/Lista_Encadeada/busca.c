/*

    Realizando buscas em uma lista encadeada com cabeça

*/

#include <stdio.h>
#include <stdlib.h>

//Criando a estrutura de uma lista
typedef struct lo{

    int conteudo;
    struct lo *proximo; //Defino que há a necessidade de o ponteiro ser do mesmo tipo que minha estrutura

} *LISTA;


void insere(int conteudo, LISTA *lista){

    LISTA novo = (LISTA) malloc(sizeof(LISTA));

    novo -> conteudo = conteudo;
    
    novo -> proximo = *lista;

    *lista =  novo;

}

//Função de busca que retorna direto para o usuário
//Se existe ou não o elemento dentro da lista encadeada
void busca(int procurado,LISTA temp){

    while(temp != NULL){

        if(temp -> conteudo == procurado){

            printf("O elemento %d está na lista de endereço %p\n", procurado, temp -> proximo);
    
        } 

        temp = temp -> proximo;

    }
    
}


void main(void){

    LISTA lista = NULL;
    
    int vetor[] = {1, 2, 3, 5, 6, 7, 9, 12, 15};

    //Inserindo os elementos do array na lista encadeada
    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){
        
        insere(vetor[i], &lista);

    }

    //Buscando os elementos do vetor nas listas encadeadas
    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){

        busca(vetor[i], lista);

    }

}