#include <stdio.h>

//Calcular a soma dos fatorias de forma recursiva

int vetor (int n, int v[]){

  if (n == 1)
    return v[0];
  else{
    
    int x;
    x = vetor (n - 1, v);
    if(x > v[n - 1])
      return x;
    else
      return v[n - 1];
  }

}

void main (void){

  int a, b;
  int vet[] = {1,2,3};
  a = sizeof(vet) / 4;

  b = vetor(a, vet);

  printf("%d\n", b);

}
