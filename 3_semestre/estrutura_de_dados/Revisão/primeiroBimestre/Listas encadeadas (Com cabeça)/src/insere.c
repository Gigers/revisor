/*
    Compilado com: GCC 5.4

    Implementação de lista encadeada utilizando cabeça.
    Este código irá demonstrar a utilização da função de inserção de células na lista
*/

#include <stdio.h>
#include <stdlib.h>

// Criando a estrutura de uma célula
typedef struct cell{
    int conteudo;
    struct cell * proximo;
} CELULA;

// Função inserir novas células na lista
// Recebe a cabeça (Elemento de referência) e o conteúdo da nova célula
void
insereContent(CELULA * cabeca, int conteudo){
    // Cria um ponteiro do tipo CELULA que aponta para um espaço de memória alocado
    CELULA * nova = malloc(sizeof(CELULA));
    
    nova -> conteudo = conteudo;
    nova -> proximo = cabeca -> proximo;
    cabeca -> proximo = nova;
}

// Função que insere celulas a lista sem conteúdo
void
insereNoContent(CELULA * cabeca){
    
    CELULA * nova = malloc(sizeof(CELULA));
    
    nova -> proximo = cabeca -> proximo;
    cabeca -> proximo = nova;
}

// Função para visualizar se as células foram vinculadas a lista
void
exibe(CELULA * cabeca){

    CELULA * p = cabeca -> proximo;

    while(p != NULL){
        printf(" %d ", p -> conteudo);
        
        // O p se torna o próximo elemento da lista
        p = p -> proximo;
    }
    printf("\n");
}

void
main(void){
    // Cria a cabeça (Não recebe conteúdo válido)
    CELULA * cabeca = malloc(sizeof(CELULA));

    // Sempre quando a cabeça começa, ela aponta para NULL
    cabeca -> proximo = NULL;
    
    // Inserindo células com elementos dentro da lista
    for(int i = 1; i < 10; i ++)
        insereContent(cabeca, i * 10);
    exibe(cabeca);

    // Inserindo células sem elementos a lista
    for(int i = 1; i < 3; i++)
        insereNoContent(cabeca);
    exibe(cabeca);
}