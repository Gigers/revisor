#include <stdio.h>

int fibbo(int max){

  if(max <= 2){
  
    return 1;
  
  } else {
  
    return fibbo(max - 1) + fibbo(max - 2);

  }

}

void main(void){

  int max = 5;

  printf("%d\n", fibbo(max));

}
