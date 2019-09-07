#include <stdio.h>

int power(int n, int p){

  if(p == 1) {
  
    return n;
  
  } if(p > 1) {
    
    return n * power(n, p - 1); 

  }


}

void main (void){


  int a = power(2,3);

  printf("%d\n", a);

}
