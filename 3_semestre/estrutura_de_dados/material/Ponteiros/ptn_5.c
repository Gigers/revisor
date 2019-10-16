#include <stdio.h>
#include <stdbool.h>

void imprime(char *s){

    while(*s != 0x00){

        putchar(*s++);

    }
}

void main(void){

    char s[] = "Felipe";
    char *t = "Felipe";

    char *p = "Uma frase muito legal\n";

    // puts(s);
    // puts(t);

    imprime(p);

}