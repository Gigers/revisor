#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    int conteudo;
    struct cel * proximo;
}CELULA;

void
add(CELULA * cabeca, int conteudo){
    CELULA * celula = malloc(sizeof(CELULA) / sizeof(int));
    celula -> proximo = cabeca -> proximo;
    celula -> conteudo = conteudo;
    cabeca -> proximo = celula;
}

// Função para ver os elementos da lista
void
show(CELULA * cabeca){
    CELULA * p = cabeca -> proximo;
    
    while (p != NULL){
        printf("%d\n", p -> conteudo);
        p = p -> proximo;
    }
}

void
vet2list(CELULA * cabeca, int * vet, int len){
    for (int i = 0; i < len; i++)
        add(cabeca, vet[i]);
}

void
main(int argc, char ** argv){
    int arr[] = {1,2,3,4,5};
    
    CELULA * cabeca = malloc(sizeof(CELULA));
    
    vet2list(cabeca, arr, sizeof(arr) / sizeof(int));

    show(cabeca);
}