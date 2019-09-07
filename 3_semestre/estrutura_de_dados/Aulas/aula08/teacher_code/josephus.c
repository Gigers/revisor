#include <stdio.h>
#include <stdlib.h>

/*

    PROBLEMA DE JOSEPHUS. Imagine n pessoas dispostas
em círculo. Suponha que as pessoas estão numeradas
de 1 a n em sentido horário. Começando com a pessoa
de número 1, percorra o círculo no sentido horário e
elimine a m-ésima pessoa enquanto o círculo tiver duas
ou mais pessoas. Veja Josephus Problem na Wikipedia.
Qual o número do sobrevivente para n=50 e m=3?
Escreva e teste uma função que resolva o problema.

*/

struct cel {
       int conteudo;
       struct cel *seg; /* seguinte */
};

typedef struct cel celula;

int n = 12;
int m = 3;

void ImprimaJ(celula *lst) {

    celula *p, *p1;
    p = lst -> seg;
    p1 = lst -> seg;
    //p = p1 = lst->seg;
    //
    // Inserção em lista: Inicio = 1
    //                    Insere(2) = 2 1
    //                    Insere(3) = 3 2 1
    //                    Insere(4) = 4 3 2 1
    //                    Insere(5) = 5 4 3 2 1

     while (1){

         printf ("%d\n", p->conteudo);

         p = p->seg;

         if (p == p1){
            break;
         }
     }


}
void Remove (celula *p) {
     celula *lixo;
     lixo = p->seg;
     p->seg = lixo->seg;
     printf ("Matou %d\n", lixo->conteudo);
     free (lixo);
}

void Insere (int y, celula *p) {
     celula *nova;
     nova = malloc (sizeof (celula));
     nova->conteudo = y;
     nova->seg = p->seg;
     p->seg = nova;
}

void mata_mata (celula *lst){
     celula *p; 
     int cont;
     p = lst->seg; 
     cont = 0;
     while (1){
           if (++cont == m - 1){
              Remove (p);
              cont = 0;
           }
           p = p->seg;
           if (p->seg == p) break;
     }
     printf ("Sobrou %d\n", p->conteudo);
}

int main (void){
    int i;
    celula *lst;
    celula *p_aux;
    lst = malloc (sizeof (celula));
    lst->seg = NULL;

    Insere(n, lst);

    p_aux = lst -> seg;


    for (i = n-1; i > 0; i--) {
        Insere(i, lst);
    }


    p_aux -> seg = lst -> seg;



    ImprimaJ(lst);
    mata_mata (lst);


}