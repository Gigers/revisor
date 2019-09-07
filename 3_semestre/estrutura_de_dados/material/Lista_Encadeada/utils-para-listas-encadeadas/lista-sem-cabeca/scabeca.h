#ifndef SEM_CABECA_H
#define SEM_CABECA_H

typedef struct aux {
    int valor;
    struct aux *prox;
} elemento;

typedef elemento *pont;

typedef struct {
    pont inicio;
} lista;

void iniciaSC(lista *l);
int tamanhoSC(lista *l);
void exibirIteSC(lista *l);
void exibirRecSC(pont end);
pont buscaSC(lista *l, int ch);
pont buscaSequencialExc(lista *l, int ch, pont *ant);
bool inserirSC(lista *l, int valor);
bool excluiSC(lista *l, int ch);
void reiniciaSC(lista* l);

#endif 
