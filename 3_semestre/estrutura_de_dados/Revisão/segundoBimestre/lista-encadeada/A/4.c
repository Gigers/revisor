#include <stdio.h>
#include <stdlib.h>

/*
    Lembrando que a lista encadeada é um conjunto de célular
*/

// Cria tipo célula
typedef struct cel{
    int content;
    struct cel * proximo;
}CELULA;

// Função para adicionar novos elementos na lista
void
add(CELULA * cabeca, int content){
    CELULA * celula = malloc(sizeof(CELULA));
    
    celula -> content = content;
    celula -> proximo = cabeca -> proximo;

    cabeca -> proximo = celula;
}

// Função para encontrar o valor mínimo
void
minimal(CELULA * cabeca){
    CELULA * p = cabeca -> proximo;
    int menor = p -> content;

    while (p != NULL){
        if (menor > p -> content)
            menor = p -> content;
        p = p -> proximo;
    }

    printf("O mínimo é: %d\n", menor);
}

void
main(int argc, char ** argv){

    CELULA * cabeca = malloc(sizeof(CELULA));

    for (int i = 1; i <= 10; i++){
        add(cabeca, i * 5);   
    }
    minimal(cabeca);
}