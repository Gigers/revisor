#include <stdio.h>

// Crie  uma  função  recursiva  que  receba  um  número  inteiro  positivo  N  e  calcule  o 
//somatório dos números de 1 a N

int somatorio(int n){
  
  if(n <= 1){
  
    return n;
  
  } else {
  
    int x = somatorio(n - 1);

    return x += n;

  }
}

void main(void){

  int max = 5;
  //1 + 2 + 3 + 4 + 5 = 15

  printf("%d\n", somatorio(max));
 
}
