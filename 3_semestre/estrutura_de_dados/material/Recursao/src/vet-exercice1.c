/*
 * Escreva um pequeno programa para testar a função recursiva maximoR.  
 * O seu programa deve esperar que o usuário digite uma sequência de números e
 * em seguida devolver o valor do maior dos números digitados. 
*/

#include <stdio.h>
#include "maximoR.c"

int main(void){

  int max;
  
  printf("Insira a quantidade de elementos: \n");
  scanf("%d", &max);

  int vetor[max];
  
  if(max > 0){
    
    printf("Insira os valores:\n");
    for(int i = 0; i < max; i++){
      scanf("%d", &vetor[i]);
    }
  
  }
  

  printf("O maior digito é %d\n", maximoR(max, vetor));

}
