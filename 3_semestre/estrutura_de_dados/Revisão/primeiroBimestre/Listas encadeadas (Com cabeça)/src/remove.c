/*
    Compilado com: GCC 5.4

    Implementação de funções para a remoção de células da lista encadeada
    Utilizando lista com cabeça
*/

#include <stdio.h> // Standard I/O
#include <stdlib.h> // Standard Library Definitions (Usando aqui o malloc, etc)

// Criando a estrutura da célula e já definindo um tipo de dado novo
typedef struct cell{
    int conteudo;
    struct cell * proximo;
}CELULA;

void
insere(CELULA * cabeca, int conteudo){
    
    CELULA * nova = malloc(sizeof(CELULA));
    nova -> conteudo = conteudo;
    nova -> proximo = cabeca -> proximo;
    
    cabeca -> proximo = nova;
}

// Função para remover elemento específico
void
rmove(CELULA * cabeca){
    CELULA * lixo = malloc(sizeof(CELULA));
    
    // Pego o elemento a frente da cabeça (Primeira célula com conteúdo)
    lixo = cabeca -> proximo;
    
    // Por sua vez o campo de ponteiro da cabeça, pega o endereço do próximo endereço do que foi pego anteriormente
    cabeca -> proximo = lixo -> proximo;

    // Remove a célula
    free(lixo);
}

void
exibe(CELULA * cabeca){
    CELULA * p = cabeca -> proximo;

    for(p ;p != NULL ;p = p -> proximo)
        printf(" %d ", p -> conteudo);
    printf("\n");
}

void
main(void){
    CELULA * cabeca = malloc(sizeof(CELULA));
    cabeca -> proximo = NULL;

    for(int j = 1; j <= 15; j ++)
        insere(cabeca, j * 2);

    printf("Antes da remoção:\n");
    exibe(cabeca);
    printf("Depois da remoção:\n");
    rmove(cabeca);
    exibe(cabeca);

}