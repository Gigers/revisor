/*
 *
 * Fibbonaci recursivo é RUIM !!!
 *
 * Isso porque ele faz várias chamadas das mesmas funções
 * Masanori diz que:
 * A versão abaixo é *muito* ruim!!!
 * É ruim pois repete a chamada várias vezes de algo já calculado!
 */

#include <stdio.h>

int fibbo(int n){

  if(n <= 2){
    return 1;
  }else{
    return fibbo(n - 1) + fibbo(n - 2);
  }

}

void main(void){

  int m = fibbo(8);

  printf("%d\n", m);
}
