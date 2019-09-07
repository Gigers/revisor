//Verifique se a função aqui presente é equivalente ao algoritimo vet-maximoR.c

#include <stdio.h>

int maximoR (int n, int v[]){

  int x;
  
  if (n == 1)
    x = v[0];

  else{
  
    x = maximoR (n - 1, v);
    
    if (x < v[n - 1])
      x = v[n - 1];
  
  }

  return x;

}

void main(void){

  int vetor[] = {10, 11, 12, 1, 98, 2};
  int y = sizeof(vetor) / sizeof(int);

  printf("%d\n", maximoR(y, vetor));

}
