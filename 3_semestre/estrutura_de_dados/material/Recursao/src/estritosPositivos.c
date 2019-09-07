#include <stdio.h>

//Calcular os valores estritamente positivos dentro de um vetor
//Lembrando que:
//  Um valor estritamente possitivo é aquele que é maior zero;

// Função que recebe a quantidade de elementos de um vetor, e um vetor, e calcula seus elementos estritamente positivos
// Requer: n > 0

int estrito(int n, int v[]){


  if(n == 1){
    
    return v[0];
  
  } else {
  
    int x = estrito(n - 1, v);

    if(v[n - 1] > 0){
    
      return x += v[n - 1];

    } else {
      
      return 0;
      
    }
  
  }

}

void main(void){

  int vetor[] = {0, 0, -1, -2, 1, 2};
  int size = sizeof(vetor) / sizeof(int);

  printf("%d\n", estrito(size, vetor));

}
