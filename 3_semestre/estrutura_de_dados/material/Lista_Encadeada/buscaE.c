/* 

    Função de busca que retorna o ponteiro para a lista
    em que o elemento procurado está

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct yo{

    int conteudo;
    struct yo *proximo;

} CELULA;

void insere(int conteudo, CELULA *lista){

    CELULA *nova;
    nova = malloc(sizeof(CELULA));

    nova -> conteudo = conteudo;

    nova -> proximo = lista -> proximo;

    lista -> proximo = nova;

}

void imprime(CELULA *lista){

    CELULA *p;
    p = lista -> proximo;

    while(p != NULL){

        printf("%d\n", p -> conteudo);

        p = p -> proximo;

    }

}

CELULA * // Função irá retornar um ponteiro do tipo celula
busca(int procurado, CELULA *lista){ 

    CELULA *p;
    p = lista;

    while(p != NULL && p -> conteudo != procurado)
        p = p -> proximo;

    return p;

}

//Remove o primeiro elemento das listas encadeadas
void Remove(CELULA *p){

    CELULA *lixo;
    
    lixo = p -> proximo;
    p -> proximo = lixo -> proximo;

    free(lixo);

}

void buscaEremove(int procurado, CELULA *lista){

    //Adicionar a função busca e remove

}

void main(void){

    CELULA cabeca;
    CELULA *lista;
    CELULA *p;

    lista = &cabeca;
    cabeca.proximo = NULL;
    
    int vetor[] = {2, 4, 6, 8, 10, 12};

    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){

        insere(vetor[i], lista);

    }
    
    printf("Antes de remover\n");
    imprime(lista);

    Remove(lista);

    printf("\n#\nDepois de remover\n");
    imprime(lista);
    
}