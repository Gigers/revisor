// Função que calcula o elemento minimo de um vetor

#include <stdio.h>
#include "random.c"

int min(int n, int v[]){

  //Caso base, onde todo o processo de recursão começa
  if(n == 1){
    
    return v[0];
  
  } else {
  
    int x = min(n - 1, v);

    if(x > v[n - 1]){
      
      return v[n - 1];
    
    } else {
    
      return x;
      
    }
  
  }
}

void main(void){

  //Gerando vetor
  int vetor[6];

  for(int i = 0; i < 6; i++){
    
    vetor[i] = RandomInteger(0, 99);

  }

  int y = sizeof(vetor) / sizeof(int);

  printf("O menor elemento é %d\n", min(y, vetor));

}
