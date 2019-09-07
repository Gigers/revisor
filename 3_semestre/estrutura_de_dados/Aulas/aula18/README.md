# Aula - 07/11/2017

## Gráfos conexos
 
Conexo - Um grafo G = (V, E) é conexo se existir um caminho entre qualquer de vértice;
Não conexo - Não existe um caminho para um determinado vértice.

Se um grafo é separado (Dois pedaços), seu complemento é conexo.

## Ponte

Ponte é uma aresta, não contida em um ciclo, que a exclusão, resulta no aumento de componentes do grafo.

## Florestas e árvores

- Floresta é um gráfo sem circuito, podendo ser entendido como, é um grafo em que todas as suas arestas são pontes;
- Árvore é uma floresta conexa.

OBS: Cada componente de uma floresta é uma árvore.

Veja então que a diferença entre árvore e floresta é que, no caso das árvores, elas são conexas, o que não necessáriamente ocorre nas florestas, estas que podem ter vários elementos distintos (Não conexos).

Exemplo de árvores

* Árvore binária.

## Isomorfismo

Grafos são isomorficos se estes tem a mesma estrutura, ou seja, se tem a mesma quantidade de vértices, arestas e adjacência.

-Para definir o isomorfismo é interessante definir nomes para as arestas

OBS: É importante colocar os vértices!

## Conjuntos estáveis

Um conjunto de vértices em um grafo é estável (independente) se seus elementos são dois a dois não adjacentes. Em outras palavras, se A e B são vértices quaisquer de um conjunto independente, não há arestas entre A e B.

* Algoritimo guloso;

## Cobertura por vértices

O número de vértices minimos aos quais está conectado a maior quantidade de arestas

## Emparelhamentos

* Emparelhamento máximo: Todos os vértices são englobados nos casamentos (Contém o maior número possível de arestas);
* Emparelhamento perfeito: É aquele em que cada vértice do grafo é incidente a exatamente uma aresta.

## Circuito hamiltoniano

É aquele em que existe um ciclo que ao ser percorrido inclui todo vértice do grafo.

* **Circuito** tem que ser fechado
    * Aberto é caminho

- E 17.1 [X]
- E 17.3 [X]

## Exercícios

- E 2.7 [X]
- E 5.22 [Algoritimo de demonstração]

<!-- Pode cair na prova (Com certeza) -->
<!-- Pulou cliques, cores>
<!-- Vai cair circuito hamiltoniano>