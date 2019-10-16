#include <stdio.h>
#include <stdlib.h>

typedef struct c{
    int unit;
    struct c * next;
}CEL;

void
add(CEL * head, int unit){
    CEL * novo = malloc(sizeof(CEL));
    novo -> unit = unit; 
    // Pegando o campo próximo da estrutura head
    novo -> next = head -> next;
    head -> next = novo;
}

void
show(CEL * head){
    CEL * p = head -> next;
    while (p != NULL){
        printf("%d\n", p -> unit);
        p = p -> next;
    }
}

void
freedom4you(CEL * head){
    CEL * p = head -> next;
    CEL * dump = p -> next;

    head -> next = dump;
    free(p);
}

void
freedom4all(CEL * head){
    CEL * p = head -> next;
    CEL * dump = malloc(sizeof(CEL));

    while(p != NULL){
        head -> next = dump -> next;
        p = dump -> next;
        free(dump);
    }
}

void
main(int argc, char ** argv){
    CEL * head = malloc(sizeof(CEL));
    for(int i = 0; i < 5; i++)
        add(head, i);

    printf("Antes da liberdade\n");
    show(head);
    freedom4all(head);
    printf("Depois da liberdade\n");
    show(head);
}