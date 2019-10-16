#include <stdio.h>
#include <stdlib.h>

typedef struct c{
    int conteudo;
    struct c * next;
}CEL;

void
add(CEL * head, int conteudo){
    CEL * new = malloc(sizeof(CEL));
    new -> conteudo = conteudo;
    new -> next = head -> next;    
    head -> next = new;
}

void
show(CEL * head){
    CEL * p = head -> next;
    while (p != NULL){
        printf("%d\n", p -> conteudo);
        p = p -> next;
    }
}

void
concat(CEL * cel1, CEL * cel2){
    CEL * p = cel1;
    while (p -> next != NULL)
        p = p -> next;
    p -> next = cel2 -> next -> next;
}

void
main(int argc, char ** argv){
    CEL * cel1 = malloc(sizeof(CEL));
    CEL * cel2 = malloc(sizeof(CEL));
    for(int i = 0; i < 10; i++){
        add(cel1, i * 2); add(cel2, i * 5);
    }   
    concat(cel1, cel2);
    show(cel1);
}