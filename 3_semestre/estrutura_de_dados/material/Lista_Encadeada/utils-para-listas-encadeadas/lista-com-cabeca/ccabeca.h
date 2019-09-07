#ifndef COM_CABECA_H
#define COM_CABECA_H

typedef struct tempRegistro{
    int valor;
    struct tempRegistro* prox;
}elementoCC;

typedef elementoCC* pontCC;

typedef struct {
    pontCC cabeca;
}listaCC;

void iniciaCC(listaCC* l);
int tamanhoCC(listaCC* l);
void exibirIteCC(listaCC* l);
void exibirRecCC(pontCC end, listaCC* l);
pontCC buscaCC(listaCC* l, int ch);
pontCC buscaSeqExc(listaCC* l, int ch, pontCC* ant);
bool inserirCC(listaCC* l, int valor);
bool excluirCC(listaCC* l, int ch);
void reiniciarCC(listaCC* l);

#endif
