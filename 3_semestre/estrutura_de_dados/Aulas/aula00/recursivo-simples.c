#include <stdio.h>

int fat(int n){

  if(n <= 1){
    return 1;
  }else{
    
    return n * fat(n - 1);
  }
}

void main(void){

  int m = fat(2);

  printf("%d\n", m);

}
