#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "scabeca.h"

void iniciaSC(lista *l) {
    l->inicio = NULL;
}

int tamanhoSC(lista *l) {
    pont end = l->inicio;
    int tam = 0;
    while (end != NULL) {
        tam++;
        end = end->prox;
    }
    return tam;
}

void exibirIteSC(lista *l) {
    pont end = l->inicio;
    printf("Lista:");
    while (end != NULL) {
        printf(" %d", end->valor);
        end = end->prox;
    }
    printf("\n");
}

int  exibirRec(pont end){
    if (end->prox == NULL){
        return end->valor;
    }
    else {
        int x;
        x = exibirRec(end->prox);
        printf(" %d", x);
        if (x == end->valor)
            return x;
        else
            return end->valor;
    }
}

void exibirRecSC(pont end){
    printf("Lista:");
    printf(" %d", exibirRec(end));
    printf("\n");
}

pont buscaSC(lista *l, int ch) {
    pont pos = l->inicio;
    while (pos != NULL && pos->valor < ch)
        pos = pos->prox;
    if (pos != NULL && pos->valor == ch)
        return pos;
    return NULL;
}

pont buscaSequencialExc(lista *l, int ch, pont *ant) {
    *ant = NULL;
    pont atual = l->inicio;
    while ((atual != NULL) && (atual->valor < ch)) {
        *ant = atual;
        atual = atual->prox;
    }
    if ((atual != NULL) && (atual->valor == ch))
        return atual;
    return NULL;
}

bool inserirSC(lista *l, int valor) {
    int ch = valor;
    pont ant, i;
    i = buscaSequencialExc(l, ch, &ant);
    if (i != NULL)
        return false;
    i = (pont) malloc(sizeof(elemento));
    i->valor = valor;
    if (ant == NULL) {
        i->prox = l->inicio;
        l->inicio = i;
    } else {
        i->prox = ant->prox;
        ant->prox = i;
    }
    return true;
}

bool excluiSC(lista *l, int ch) {
    pont ant, i;
    i = buscaSequencialExc(l, ch, &ant);
    if (i == NULL)
        return false;
    if (ant == NULL)
        l->inicio = i->prox;
    else
        ant->prox = i->prox;
    free(i);
    return true;
}

void reiniciaSC(lista* l){
    pont end = l->inicio;
    while(end != NULL){
        pont apagar = end;
        end = end->prox;
        free(apagar);
    }
    l->inicio = NULL;
}
