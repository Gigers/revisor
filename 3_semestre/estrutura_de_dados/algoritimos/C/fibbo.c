#include <stdio.h>

/*
 * Função que recebe n, que é a quantidade de repetições
 * e retorna a forma recursiva com a quantidade de repetições em n
 */

int fibbo (int n) {
  
 if(n <= 2){
  
   return 1;

 } else {
 
   return fibbo(n - 1) + fibbo(n - 2);
  
 }

}

void main (void) {

  int a = fibbo(8);

  printf("%d\n", a);

}
