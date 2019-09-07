#include <stdio.h>
#include <stdbool.h>

void main(void){

    int a[2];

    a[0] = 2017;
    a[1] = 2018;

    printf("a[0] = %d\na[1] = %d\n", *a, a[1]);

}