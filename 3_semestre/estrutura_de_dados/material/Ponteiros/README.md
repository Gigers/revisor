# Ponteiros

Um programa em C trabalha com 3 tipo de memória:
  * Estático ou Global: É usado principalmente por variáveis globais, seu funcionamento é basicamente alocar um espaço na memória e permanecer a locado até o fim da execução;
  * Automática: É usada para funções criada em funções ou quando uma função é chamada, e sua existência se limia à execução da função;
  * Dinâmica: É basicamente o _heap_, pode ser alocado e liberado a medida do necessário

  Na tabela abaixo pode-se ver uma melhor representação:

  |  Tipo      | Escopo                                | Tempo de vida                 |
  |------------|---------------------------------------|-------------------------------|
  | Global     | Todo o arquivo                        | Toda a vida do aplicativo     |
  | Estático   | Função na qual é declarada            | Toda a vida do aplicativo     |
  | Automático | Função na qual é declarada            | Enquanto a função é executada |
  | Dinâmica   | Determinada pela referênca do ponteiro| Até a memória for liberada    |
  tabela retirada do livreo [Understanding and Using C Pointers](http://shop.oreilly.com/product/0636920028000.do)


# O que é um ponteiro?

Um ponteiro é uma variável com capacidade de armazenar o endereço da memória de outra variável. por exemplo:

Podemos pegar uma variavel qualquer

```c
int a = 0; // declarando um inteiro
printf(" %d ", a); // imprimindo esse inteiro
```
a saida será **0**

agora se quisermos imprimir o endereço dessa variável fazemos:

```c
printf("%x ", &a); // imprimindo o endereço da variável em hexadecimal
```
Aqui estamos usando `%x` para imprimir em hexadecimal, e usamos `&` para "pegar" o endereço em que essa variável está guardada na memória do computador, essa é a mesma lógica do `scanf()` que guarda um valor em um determinado endereço, que para nós tem o nome de `a`.

para declarar um ponteiro usamos o asterisco `*` após o tipo do ponteiro:

```c
int numero = 10; // declarando um inteiro
int *ponteiro; // declarando um ponteiro para int

ponteiro = &numero; // definindo o valor do ponteiro como o endereço de numero
        
printf("%d\n", *ponteiro); // imprimindo o valor da variável
printf("%x\n", &ponteiro); // imprimindo o endereco do ponteiro
printf("%x\n", ponteiro); // imprimindo o endereço de numero
```

Mas para que demônios eu vou querer usar isso?

Uma das utilizações dos ponteiros é para "returnar" mais de um valor.
como podemos ver no exemplo abaixo:

```c
#include <stdio.h>
#include <stdlib.h>

/*
* Uma função que pega 2 ponteiros para inteiro como 
* parametro e define o valor deles para 5 e 6 respectivamente
*/
void umaFuncaoQualquer(int *ponteiro1, int *ponteiro2){
  *ponteiro1 = 5; // Muda o valor da variável apontada para 5
  *ponteiro2 = 6; // Muda o valor da variável apontada para 6
}

int main(void){

  int numero1 = 1; // declara um inteiro e define como 1
  int numero2 = 2; // declara um inteiro e define como 2
  int *ponteiro1 = &numero1; // declara um ponteiro para int e define com endereço de numero1
  int *ponteiro2 = &numero2; // declara um ponteiro para int e define com endereço de numero2
  printf("numero 1: %d, ponteiro 1: %x\n", *ponteiro1, ponteiro1); // a saída esperada é 1 e o endereço
  printf("numero 2: %d, ponteiro 2: %x\n", *ponteiro2, ponteiro2); // a saída esperada é 2 e o endereço

  umaFuncaoQualquer(ponteiro1, ponteiro2); // chama nossa função e muda os valores

  printf("numero 1: %d, ponteiro 1: %x\n", *ponteiro1, ponteiro1); // a saída esperada é 5 e o endereço
  printf("numero 2: %d, ponteiro 2: %x\n", *ponteiro2, ponteiro2); // a saída esperada é 6 e o endereço

  return 0; // Tudo certo 
}
```




