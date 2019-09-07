//Somando todos os elementos de um array, utilizando recursividade

#include <stdio.h>

int total = 0;

int soma(int n, int v[]){

  if(n == 1){
    
    return v[0];
  
  } else {
    
    int x = soma(n - 1, v);
    
    return x += v[n - 1];
  }

}

void main(void){

  int vetor[] = {1, 2, 3};
  int y = sizeof(vetor) / sizeof(int);

  printf("A soma é igual a %d\n", soma(y, vetor));

}
