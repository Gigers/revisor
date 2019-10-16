#include <stdio.h>
#include <stdlib.h>

/*
    Por que utilizar ponteiros na função troca ?
    Porque para acessar a função troca fora da main, é necessário utilizar ponteiro

*/

void troca2 (int p, int q){  // passagem por valor == copia
    int temp;
    temp = p;
    p = q;
    q = temp;
    printf ("@@@@   %d %d\n", p, q);
}
void troca (int *p, int *q){ // passagem por referencia
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main(void){
    int a = 33, b = 77;
    printf ("Antes  a=%d, b=%d\n", a, b);
    //troca (&a, &b);
    troca2 (a, b);
    printf ("Depois a=%d, b=%d\n", a, b);

    //Qual a vantagem de utilizar a alocação dinamica
    //A vantagem é que eu posso definir o tamanho do vetor em tempo de execução

    int *v; // int v[10];
    int i; 
    int n;
    scanf("%d", &n);
    v = malloc (n * sizeof (int));
    
    // Mostra o endereço da memória
    // printf("Endereço de v = %p\n", v);
    
    // note que posso pegar o tamanho em tempo
    // de execucao
    for (i = 0; i < n; i++)
        v[i] = i;

    for (i = 0; i < n; i++)
        printf ("%d ", v[i]);
    putchar ('\n');

}