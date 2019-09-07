# Revisão

Aqui há uma revisão de todo o conteúdo do primeiro bimestre apresentado no segundo semetre de 2017, na Fatec SJC

# ROADMAP

Para seguir esta revisão utilize a seguinte ordem

* 1° - Recursividade; [X]
* 2° - O problema dos vetores em C; [X]
* 3° - Listas encadeadas (Com cabeça); [X]
* 4° - Listas encadeadas (Sem cabeça); [X]
* 5° - A solução com as listas em Python; [X]
* 6° - Pilhas; [X]
* 7° - Filas; [X]
* 8° - Algoritimos de ordenação:
    * Inserção; [X]
    * Método de seleção; [X]
* 9° - Quicksort (Conceitos); [X]
* 10° - Mergesort (Pseudo-código). [X]

### Recursividade

Esta é uma função que chama ela mesma. Esta é uma forma de escrever códigos para a solução rápida de grandes problemas que dentro de si, carregam instâncias dos mesmos problemas, porém em menor escala, nestes casos é possível se aplicar recursividade.

Porém há alguns algoritimos que não são recomendados de serem feitos utilizando a recursividade, um exemplo disto é o algoritimo de fibonacci.

Segundo o <code>Masanori</code>
* A versão de fibonacci recursivo é *muito* ruim!!!
    * É ruim pois repete a chamada várias vezes de algo já calculado!

O que ocorre no algoritimo recursivo é que ele por chamar várias vezes as mesmas funções, ele acaba calculando números que já foram calculados antes, uma solução para este problema, é criar uma lista (Python) que armazena os valores já calculados, e já o valor ainda não esteja na lista, faça o cáculo do mesmo.

Dentro da pasta das revisões há exemplos de códigos recursivos e mais detalhes sobre a recursão.

### Os problemas dos vetores em C

Os vetores (Arrays) em C apresentam muitos problemas, que impedem que seu uso seja feito de maneira ampla, abaixo listo alguns dos princípais problemas.

* São de tamanho estático:
* Após definir uma tamanho não é possível altera-lo, a menos que outro seja criado;
* Isso faz com que seu precise de mais espaço ou que eu tenho espaço sobrando, terei de criar um novo array;
* Baixo desempenho quando se trata de muitos elementos.

Bem esses foram alguns dos problemas que os vetores em C apresentavam, e que fizeram que outras estruturas de dados, como as listas encadeadas, fossem criadas.

Este problema foi corrigido em outras linguagens como <code>Python</code>, em que as listas já resolver todos os problemas sem a necessídade da utilização de outros estruturas mais complexas.

### Listas ligadas (Encadeadas)

* Listas encadeadas
    * Vantagens:
        * Velocidade (Remoção e inserção);

#### Implementações

Existem duas formas de implementar a lista encadeada:
* Com cabeça:
    * Vantagem:
        * Não vou testar lista vazia (Isso porque a lista sempre tem um elemento (cabeça));
        * Não preciso de ponteiro para ponteiro;
        * Menos complexo;
        * Mais eficiente (Se comparado a lista sem cabeça).

* Sem cabeça:
    * Desvantagens:
        * Complexo;
        * Menos eficiênte (Se comparado a lista com cabeça).