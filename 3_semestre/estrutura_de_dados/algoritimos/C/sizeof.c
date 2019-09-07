#include <stdio.h>

/*
 * Programa de testes dos tipos e tamanhos
 */

void main (void){

   int vazio[5];
   int vetor[] = {
      1,
      2,
      3
   };

   //quantidade de elementos
   printf("%d\n", sizeof(vazio) / 4);
   printf("%d\n", sizeof(vetor) / 4);

}
