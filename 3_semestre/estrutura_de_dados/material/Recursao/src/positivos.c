#include <stdio.h>

//Calcular a soma dos elementos positivos de um vetor de inteiros. (Utilizar recursão).

int positivo(int n, int v[]){

  if(n == 1){
    
    return v[0];
  
  } else {
  
    int x = positivo(n - 1, v);
    
    if(v[n - 1] >= 0){
      
      return x += v[n - 1];
    
    } else{
   
      return 0;

    }
  
  }


}

void main(void){

  int vetor[] = {0, -1, -2, -3, 2, 1};
  int size = sizeof(vetor) / sizeof(int);

  printf("%d\n", positivo(size, vetor));

}
