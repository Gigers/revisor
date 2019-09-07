//Criar função recursiva que recebe vetor de 100 elementos e faça a inversão da ordem

#include <stdio.h>


int inverte(int n, int v){

  if(n == 1){
    
    return v[0];

  } else {
  
    return v[n] = inverte(n, v);
  
  }

}

void main(void){

  int vetor = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
  int size = sizeof(vetor) / sizeof(int);


}
