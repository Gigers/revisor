/*
 * Programa para determinar um elemento máximo de um vetor aleatório. 
 * Acrescente ao seu programa uma função que confira a resposta dada por maximoR.
*/

#include <stdio.h>
#include "random.c"
#include "maximoR.c"

void main(void){

  int max;
  
  printf("Insira a quantidade maxima de elementos: ");
  scanf("%d", &max);

  int vetor[max];

  for(int i = 0; i < max; i++){
  
    vetor[i] = RandomInteger(0, 99);

  };

  printf("Os elementos gerados foram: \n");
  for(int i = 0; i < max; i++){
    
    printf(" %d ", vetor[i]);
    
  }
  printf("\n");

  printf("O maior elemento é \n");
  printf("%d\n", maximoR(max, vetor));

}
