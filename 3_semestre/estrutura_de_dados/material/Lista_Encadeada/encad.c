/*

    Primeiro exemplo de lista encadeada utilizando C
    Análogia com tabuleiros, vista no vídeo:
    https://www.youtube.com/watch?v=80roM_jARmI

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    
    int conteudo; //O própio conteúdo da estrutura
    struct no *proximo; //Ponteiro para o próximo item da lista
                        //Digo que é um ponteiro com o tipo da struct que criei

}*LISTA;

//Criando função para inserir elementos dentro da lista
void inserir(LISTA *lista, int conteudo){

    //Alocando espaço para este novo item da lista
    LISTA novo = (LISTA) malloc(sizeof(LISTA));

    //Atribuindo o conteudo ao novo espaço em memória criado
    novo -> conteudo = conteudo;

    //Quando a função estiver recebendo apenas o primeiro valor, o proximo será NULL
    //Isso porque recebe o ponteiro definido inicialmente
    novo -> proximo = *lista;

    //E definido que o ponteiro (que aponta para o próximo item da lista)
    //será o novo elemento que foi criado
    *lista = novo;

}

//Função para a impressão de todos os elementos da lista encadeada
void imprimir(LISTA listatemp){

    //O loop irá rodar até que o ponteiro seja NULL
    //Isso porque NULL é o valor do ponteiro da ultima lista
    while(listatemp != NULL){

        printf("%d\n", listatemp -> conteudo);

        //Defino que o listatemp é o endereço da proxima lista
        listatemp = listatemp -> proximo;

    }

}

int main(void){

    LISTA lista = NULL;

    //Inserindo uma lista com conteúdo 5
    inserir(&lista, 5);
    //Inserindo uma lista com conteúdo 6
    inserir(&lista, 6);

    imprimir(lista);

    return 0;
}