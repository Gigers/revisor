/*
    Função que faz a inserção de elementos dentro de uma lista encadeada

    Caso haja dúvidas, há uma abstração dos conceitos de listas no README
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 5

// Criando estrutura da CELULA
typedef struct list{

    int conteudo;
    struct list *proximo;

}CELULA;


// Criando função para inserção de mais celulas na lista
void
insere(CELULA *lista, int conteudo){

    // Aloca os recursos que serão utilizados
    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;
}

void
main(void){

    CELULA *cabeca;
    cabeca = malloc(sizeof(CELULA));

    cabeca -> proximo = NULL;

    for(int i = 0; i < MAXIMO; i++){
        insere(cabeca, i);
    }


}