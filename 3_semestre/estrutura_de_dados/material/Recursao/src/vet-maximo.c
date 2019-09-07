//Determine o valor de um elemento máximo de um vetor v[0...n - 1].
//
//Perceba que este exercício só faz sentido se o vetor não for vazio, ou seja n > v[]
//
//n -> Quantidade de elementos
//v -> Vetor análisado

//Veja uma solução iterativa -> Solução que se repete

#include <stdio.h>

// Recebe um vetor 'v' e a quantidade de elementos 'n'
// e devolve o maior valor presente no vetor

int maximo(int n, int v[]){

  int x;
  x = v[0];

  for(int j = 1; j < n; j += 1)
    if (x < v[j])
      x = v[j];
  
  return x;

}

void main(void){


  int vetor[] = {1, 2, 3, 4, 5};
  int q = sizeof(vetor) / sizeof(int);

  printf("%d\n", maximo(q, vetor));

}

/*
 * Considere a função iterativa  maximo  acima.  Faz sentido trocar  "x = v[0]"  por  "x = 0", como fazem alguns programadores descuidados?  Faz sentido trocar  "x = v[0]"  por  "x = INT_MIN"?  Faz sentido trocar  "x < v[j]"  por  "x <= v[j]"?  [Veja uma solução parcial.]
 *
 * Não faz sentido trocar x = [0] por x = 0, isso porque o vetor pode apresentar apenas valores menores que 0, o que fará o retorno da função ser 0
 *
 * Que tipos de problemas um algoritmo recursivo é capaz de resolver? 
 * R: Resolve problemas que podem ser subdividido em rotinas menores de uma mesma atividade
 */