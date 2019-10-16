#include <stdio.h>
#include <stdlib.h>

int
power(int num, int pow){
  
  // Ponto de parada
  if (pow < 1)
   return 1;
  else
    return num * power(num, pow - 1);
}

void
main(){

  printf("%d\n", power(2, 8));
}
