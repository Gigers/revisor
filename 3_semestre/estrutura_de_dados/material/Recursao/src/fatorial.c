#include <stdio.h>

//Calcule o valor fatorial de forma recursiva

int fat(int num){

  if(num == 1){
    
    return num;
  
  } else {
  
    return num * fat(num - 1);

  }

}

void main(void){

  int numero = 5; //Resposta deve ser 120
  
  printf("O fatorial de %d é %d\n", numero, fat(numero));

}
