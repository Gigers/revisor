/*

    Implementação de uma fila utilizando vetor;
    O primeiro elemento da fila é: p
    E o ultimo elemento da fila é: u
    Conteúdo é: y

    Para adicionar usa-se: [u++] = y;
        * [u++] = y, equivale:
            u = u + 1;    
            fila[u] = y;
    Para remover usa-se: [p++];
        * [p++] , equivale:
            fila[p];
            p = p + 1;            

    Ao trabalhar com arrays, as filas tem valores pré-definidos

    Veja, abaixo, e nos próximos códigos, alguns exemplos
*/

#include <stdio.h>

#define TAMANHO_FILA 100

int main(void){

    int fila[100] = {111,222,333,444,555,666};
    int p = 0;
    int u = 0;

    //Verificando se a lista esta vazia
    // if(p >= u){
    //     return 1;
    // }

    //Adicionando elemento
    fila[u++] = 777;

    //Exibindo a fila
    for(int i = 0; i < 6; i++){
        printf("%d\n", fila[i]);
    }

}