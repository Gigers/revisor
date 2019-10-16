//Critique a seguinte função recursiva, que promete encontrar o valor de um elemento máximo de v[0..n-1].

//Este algoritimo chama muitas vezes a função
//o que aumenta a quantidade de passos feitos pelo programa
//perceba que o algoritimo poderia ser melhorado se a os retornos da função 'maximoR3' estivessem sendo armazenados em uma variavel, para que esta fosse utilizada em várias comparações

#include <stdio.h>

int maximoR3(int n, int v[]) {

  //Caso base
  if(n == 1)
    return v[0];

  if((maximoR3(n - 1, v)) < v[n - 1])
    return v[n - 1];
  else
    return maximoR3(n - 1, v);

}

void main(void){

  int vetor[] = {5, 6, 3, 1, 2, 4, 5, 6, 6, 23};
  int y = sizeof(vetor) / sizeof(int);

  printf("%d\n", maximoR3(y, vetor));

}
