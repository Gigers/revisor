#include <stdio.h>

int maximoR(int n, int v[]){
  
  //Caso base
  //O caso base é feito para que o programa saiba quando parar
  //Assim o if abaixo é utilizado quando as funções estão sendo chamadas com o n - 1
  //Quando o if se torna verdadeiro, o return v[0] é enviado para o x, que por sua vez
  //faz as comparações com as estruturas abaixo dele, e a cada return feito, o valor vai para o x
  //da iteração anterior

  if(n == 1)
    return v[0];
  else{
    
    int x;
    x = maximoR(n - 1, v);

    if(x > v[n - 1])
      return x;
    else
      return v[n - 1];

  }

}
