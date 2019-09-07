#include <stdio.h>
#include <stdlib.h>

int
fib(int num){

  if (num <= 2)
    return num;
  else
    return fib(num - 1) + fib(num -2);
}

void
main(){
  
  printf("%d\n", fib(6));
}
