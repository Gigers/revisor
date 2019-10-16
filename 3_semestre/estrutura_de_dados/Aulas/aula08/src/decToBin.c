/*
    Programa que transforma decimal em binário
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int bin[32] = {};
int cont = 0;

int decToBin(int dec){

    while(TRUE){

        if((dec % 2) == 0){
            bin[cont] = 0;                                     
        } else {
            bin[cont] = 1;
        }
        
        dec = dec / 2;
        cont++;

        if(dec == 0){
            break;
        }

    }
}

void main(void){

    int dec = 10;

    decToBin(dec); 

    while(cont != 0){
        printf("%d\n", bin[cont--]);
    }
}