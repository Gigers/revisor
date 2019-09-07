//Verifique o que ocorre com a variavel v

#include <stdio.h>

void main(void){

    int v[99];

    for (int i = 0; i < 99; ++i){
     
        v[i] = 98 - i;

        // printf("%d\n", v[i]);

    }

    for (int i = 0; i < 99; ++i){ 
       
        v[i] = v[v[i]];

        printf("%d\n", v[v[i]]);
    }

    /*
    Veja que:
        i = 0;
        v[i] = 0;
        i = 1;
        v[i] = 1;
        ...
        i = 99;
        v[i] = 98;

    Desta forma:
        i = 99;
        v[i] = 98;

        v[v[i]] == v[98];
    */
}