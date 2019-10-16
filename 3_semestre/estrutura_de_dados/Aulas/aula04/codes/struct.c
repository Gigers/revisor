#include <stdio.h>

void main(void){

    struct{
        int a;
        int b;
    } variavel;

    variavel.a = 12;

    int *p = variavel;

    (*p).a = 12;
    p -> a = 12; 

}