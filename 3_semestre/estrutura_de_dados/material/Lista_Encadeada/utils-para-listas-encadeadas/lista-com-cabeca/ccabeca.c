#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "ccabeca.h"

void iniciaCC(listaCC* l){
    l->cabeca = (pontCC) malloc(sizeof(elementoCC));
    l->cabeca->prox = l->cabeca;
}

int tamanhoCC(listaCC* l){
    pontCC end = l->cabeca->prox;
    int tam = 0;
    while(end != l->cabeca){
        tam++;
        end = end->prox;
    }
    return tam;
}

void exibirIteCC(listaCC* l){
    pontCC end = l->cabeca->prox;
    printf("Lista:");
    while(end != l->cabeca){
        printf(" %d", end->valor);
        end = end->prox;
    }
    printf("\n");
}


int  exibirRecAux(pontCC end, listaCC* l){
    if (end->prox == l->cabeca){
        return end->valor;
    }
    else {
        int x;
        x = exibirRecAux(end->prox, l);
        printf(" %d", x);
        if (x == end->valor)
            return x;
        else
            return end->valor;
    }
}

void exibirRecCC(pontCC end, listaCC* l){
    printf("Lista:");
    exibirRecAux(end, l);
    printf("\n");
}

pontCC buscaCC(listaCC* l, int ch){
    pontCC pos = l->cabeca->prox;
    l->cabeca->valor = ch;
    while (pos->valor != ch)
        pos = pos->prox;
    if(pos != l->cabeca)
        return pos;
    return NULL;
}

pontCC buscaSeqExc(listaCC* l, int ch, pontCC* ant){
    *ant = l->cabeca;
    pontCC atual = l->cabeca->prox;
    l->cabeca->valor = ch;
    while(atual->valor < ch){
        *ant = atual;
        atual = atual->prox;
    }
    if(atual != l->cabeca && atual->valor == ch)
        return atual;
    return NULL;
}

bool inserirCC(listaCC* l, int valor){
    pontCC ant, i;
    i = buscaSeqExc(l, valor, &ant);
    if(i != NULL)
        return false;
    i = (pontCC) malloc(sizeof(elementoCC));
    i->valor = valor;
    i->prox = ant->prox;
    ant->prox = i;
    return true;
}

bool excluirCC(listaCC* l, int ch){
    pontCC ant, i;
    i = buscaSeqExc(l, ch, &ant);
    if(i == NULL)
        return false;
    ant->prox = i->prox;
    free(i);
    return true;
}

void reiniciarCC(listaCC* l){
    pontCC end = l->cabeca->prox;
    while(end != l->cabeca){
        pontCC apagar = end;
        end = end->prox;
        free(apagar);
    }
    l->cabeca->prox = l->cabeca;
}