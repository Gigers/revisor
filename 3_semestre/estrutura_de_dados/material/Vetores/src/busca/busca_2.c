/*
    Neste arquivo há um exemplo da mesma função de busca_1.c
    porém implementada utilizando for, perceba o quão elegante e eficiente estão função também será

    Serão mostrados também que há funções que resolvem o problema, mas não da melhor ou mais elemente forma possível.
*/

#include <stdio.h>

//Veja que a função continua elegante, e com o mesmo processo, onde define k, e percorre o vetor com k sendo index até que o mesmo chegue a 0 ou que encontre o elemento
int busca(int x, int n, int v[]){

    for(int k = n - 1; k >= 0; --k)
        if(v[k] == x) return k;

    return -1;
}

int main(void){

    int elementoProcurado = 9;
    // int tamanhoDoVetor = 5;
    int tamanhoDoVetor = 0;
    // int vetor[] = {10, 34, 2, 9, 45};
    int vetor[] = {};

    int resultado = busca(elementoProcurado, tamanhoDoVetor, vetor);

    if(resultado == -1){

        printf("Elemento não encontrado!");
        return 1;

    }

    printf("O indice de %d no vetor eh %d\n", elementoProcurado, resultado);

    return 0;
}