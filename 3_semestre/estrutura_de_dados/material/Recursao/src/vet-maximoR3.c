// Critique a seguinte função recursiva; ela promete encontrar o valor de um elemento máximo de v[0..n-1].
// Esta função acaba tendo menos passos que outras, isso porque ela começa suas verificações de base quando o valor de 'n' é 2

#include <stdio.h>

int maximoR1 (int n, int v[]) {

  if(n == 1)
    return v[0];

  if(n == 2) {
  
     if(v[0] < v[1])
       return v[1];
     else
       return v[0];
  }

  int x = maximoR1(n - 1, v);

  if(x < v[n - 1])
    return v[n - 1];
  else
    return x;

}

void main(void){

  int vetor[] = {4, 2, 1, 99, 12, 49};
  int y = sizeof(vetor) / sizeof(int);

  printf("%d\n", maximoR1(y, vetor));

}
