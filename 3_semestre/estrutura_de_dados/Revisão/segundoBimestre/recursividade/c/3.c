#include <stdio.h>
#include <stdlib.h>

int
vet2sum(int * vet, int length){
 
  if (length == 0)
    return 1;
  else
    return vet[length] + vet2sum(vet, length - 1);    
}

void
main(int argc, char ** argv){

  int vet[] = {999,2,3,4,5,6,7,8,9,10};

  printf("%d\n", vet2sum(vet, sizeof(vet) / sizeof(int) - 1));  
}
