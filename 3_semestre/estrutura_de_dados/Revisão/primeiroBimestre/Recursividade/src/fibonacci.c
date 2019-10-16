#include <stdio.h>
#include <stdlib.h>

int
fibo(int c){

    // Print de teste (Perceba a quantidade de vezes que eu calculei os mesmos números)
    printf(" %d \n", c);

    // Caso base (Caso que será utilizado para parar a chamada de novas funções)
    if(c <= 2)
        return 1;
    
    // Caso que será executado enquanto o menor caso não for verdadeiro
    else
        return fibo(c - 1) + fibo(c - 2);
}

void
main(void){

    printf("Os 6 primeiros números de fibonacci = %d\n", fibo(6));

}