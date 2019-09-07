# Aula - 08/11/2017

## Revisão para a prova

### Recursão

A recursão é um problema em que dentro deste programa há outros problemas iguais ao problema maior.

Criar os programas das seguintes recursões

* Fatorial;
* Fibonacci;
* Soma dos digitos de um número;
* MDC;
* Potênciação.

### Vetores

Vetores tem limitações:

* Tamanhos limitados;
* Caso queira realocar é necessário utilizar ponteiro;
* Limitação em inserir e remover elementos:
    * Deslocamento na inserção;
    * Na remoção sobram espaços, será necessário mover os elementos.
* O pior caso é quando é necessário inserir ou remover no primeiro espaço, pois todos os endereços terão de ser alocados.

### Endereços e ponteiros

Endereços e ponteiros são assuntos importantes 

### Listas ligadas

Vantagens:
* Inserção e remoção muito mais eficaz que os vetores;
* Alocação dinâmica;

### Filas

Primeiro que entra é o primeiro que sai:

Existem três formas de realizar a implementação de uma fila:

* Fila em um vetor - Quando você sabe o tamanho do vetor;
* Fila em um vetor circular - A fila circular reaproveita elementos liberados do inicio;
* Fila em lista encadeada - A fila se torna dinâmica.


### Pilha

O último que entra é o primeiro que sai.

* Realizar conversão de decimal para binário


### Busca em vetor ordenado

O algoritimo que faz boas buscas aproveita o dado, a informação.

* Algoritimo sequêncial:
    * Pior caso: N

* Busca binária:
    * Aproveita a informação da ordenação;
    * Divide o vetor até encontrar o elemento
    * Número de passos: Log(n)2
    * O vetor precisa estar ordenado.

### Algoritimos de ordenação

<!-- 2 são ruins, 3 são bons --> 

#### Algoritimos ruins - n ^ 2

* Inserção
    * Move todos os elementos para a esquerda para ir ordenando;
    * Bom caso ocorre quando há números grandes a esquerdo.

* Seleção
    * Verifica a direita quem é o menor