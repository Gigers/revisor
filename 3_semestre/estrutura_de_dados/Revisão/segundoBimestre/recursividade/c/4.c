#include <stdio.h>
#include <stdlib.h>

int
greatest(int * arr, int maior, int len){
  if (arr[len] >= maior)
      return arr[len];
  else
      return greatest(arr, maior, len - 1);
}

void
main(int argc, char ** argv){

  int arr[] = {11,3,4,45, 5,7,9};

  printf("%d\n", greatest(arr, arr[0], sizeof(arr) / sizeof(int) - 1));
}
