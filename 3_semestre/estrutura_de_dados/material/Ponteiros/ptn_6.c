#include <stdio.h>

//Definindo um char global
char s1[] = "felipe no mundo";

int main(void){

    char s2[] = "Felipe na pilha";
    char *p;

    printf("Endereco de s1: %p\n"
           "Endereco de s2: %p\n"
           "Um ponteiro tem tamanho de %u bytes (sempre!)\n", s1, s2, sizeof(char *));

}