/*

    Alocação dinâmica

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Além da função definida abaixo, pode-se definir uma macro
    ela funciona como uma função, mas na prática trabalha como se
    o sistema estivesse utilizando ctrl + c e ctrl + v no código
    isso deixa o código maior (em bytes) porém mais rápido
*/
#define MALLOC(prt, size){ \
    prt = malloc(size); \
    if(prt == NULL){ \
        fprintf(stderr, "Memória insuficiente\n"); \
        exit(1); \
    } \
}

/*  Como o malloc será usado em várias partes do código
    é mais facil criar uma função para sempre antes de continuar verificar o espaço alocado
*/

void *malloc_s(size_t size){
    void *p;
    p = malloc(size);

    if(p == NULL){

        fprintf(stderr, "Memória insuficiente\n");
        exit(1);
    }

    return p;
}

int main(int argc, char *argv[]){

    int *p;

    MALLOC(p, 5 * sizeof(int));

    //Inicializando com zeros utilizando memset
    memset(p, 0, 5 * sizeof(int));

    *(p+0) = 12;
    *(p+1) = 45;
    *(p+2) = 42;
    *(p+3) = 56;
    // *(p+4) = 78;
    
    p = realloc(p, sizeof(int) * 6);
    for(int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));

    free(p);

    return 0;
}