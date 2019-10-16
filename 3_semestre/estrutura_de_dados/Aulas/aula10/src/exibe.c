/*
    Algoritimo para exibir elementos de uma lista encadeada
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Definindo a estrutura
typedef struct strutu{

    char * conteudo;
    struct strutu * proximo;

}CELULA;

// Definindo a função para inserir
void
insere(CELULA *lista, char * conteudo){

    CELULA * nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;
    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

// Função de exibição
void
exibe(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    while(p != NULL){

        printf("%s\n", p -> conteudo);

        p = p -> proximo;

    }
}

void
main(void){

    CELULA *cabeca;
    cabeca = malloc(sizeof(CELULA));
    cabeca -> proximo = NULL;

    char * nomes[] = {"Felipe", "Maria", "Joséfa", "Frederica"};

    printf("Inserindo elementos na lista\n");
    sleep(1);
    for(int i = 0; i < sizeof(nomes) / sizeof(char *); i++){
        insere(cabeca, nomes[i]);
    }

    printf("Exibindo os valores dentro da lista\n");
    exibe(cabeca);

}