/*
    int V[0...n-1]; //Vetor onde será buscado os elementos
    int x; //Valor procurado

    Conforme informado, é necessário definir o que ocorre quando o caso base é verdadeiro 
    (Neste programa, o caso base é: x not in V), veja que, para resolver este problema, 
    aqui será retornado -1, caso isso ocorra. É interessante notar que o valor retornado
    não está dentro do escopo do vetor (0...n-1)
*/

#include <stdio.h>

//Código retirado de:
//https://www.ime.usp.br/~pf/algoritmos/aulas/array.html
int busca(int x, int n, int v[]){

    int k;
    k = n - 1;

    //Este loop ficará verificando se alguns dos elementos presentes no vetor é igual ao item <code> K </code>
    while(k >= 0 && v[k] != x)
        k -= 1;

    return k;

    //A função irá devolver -1 caso não encontre nada, isso porque está sendo feito a diminuição, logo k chegará a -1 se não econtrar elemento nenhum.

    //Esta é uma função eficiente e elegante, pois não faz passos desnecessários
}

void main(void){

    int elementoProcurado = 9;
    int tamanhoDoVetor = 5;
    // int tamanhoDoVetor = 0;
    int vetor[] = {10, 34, 2, 9, 45};
    // int vetor[] = {};

    int resultado = busca(elementoProcurado, tamanhoDoVetor, vetor);

    if(resultado == -1){
        
        printf("Elemento não encontrado!");
        exit(1);    
    
    }

    printf("O indice onde %d esta eh o %d\n", elementoProcurado, resultado);

}