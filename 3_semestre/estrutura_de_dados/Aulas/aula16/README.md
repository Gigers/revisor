# Aula - 31/10/2017

## Teoria dos grafos

- Explicação;
- Exercícios.

Os grafos em código podem ser definidos através de matrizes, porém esta visualização é bastante ruim.

Todos os grafos tem propriedades, e alguns deles tem propriedades raras.

Os grafos podem servir como forma de realizar a visualização de relações (Emparelhamento).

## Grafos relativamente importantes

- Cavalo 3x3;
    - Desenhe um tabuleiro 3x3;
    - A movimentação a ser feita dentro do tabuleiro é a mesma a do cavalo no xadrez (L);
    - Grafo planar;
    - Tem circuito hamiltoniano:
        - Saindo de um vértice, posso passar por todos os outros sem repetir e voltar para o primeiro.
    - Tem emparelhamento máximo;
        - Casamentos: A3, B4, D1, C2.
    - É bipartido.
- Cubo
    - É planar;
    - Possui circuito hamiltoneano;
    - Emparelhamento máximo (É o casamento do vértice, de forma que não sobre nenhum)

## Grafo completo

Completo significa que, cada vértice, se conecta com todos os outros vértices.

## Grafos bipartidos

É bipartido quando o grafo é dividido em conjuntos disjuntos (U ; V), e que cada aresta do conjunto U conecta um vértice no conjunto V.

Nos grafos bipartidos os vértices do mesmo conjunto não podem ter ligação entre si, somente com os vértices do outro conjunto.

- O grafo bipartido não tem a necessidade de ser completo
    -  No caso dos grafos bipartidos (U; V), completo significa que, cada vértice do grafo U se conecta com todos os vértices do grafo V.

### Otimização dos grafos bipartidos

- Buscar elementos de grau mínimo, para que seja possível a remoção de arestas deste elemento

## Kn

Kn é a representação dos grafos completos de n vértices. Admite-se que, todo Kn é planar, se n <= 4 

- K5 - Cinco vertices interligadas
    - Completo;
    - Não é planar

## Vizinhança e graus de vértices

- A vizinhança é o conjunto de todos os vizinhos de um vértice;
- O grau de um vértice é o número de arestas que incidem nele.


OBS: Os grafos regulares são aqueles em que, todos os vértices tem o mesmo grau.

#### Exercícios 

- E 1.1 [X]
- E 1.2 [X]
- E 1.3 [X]
- E 1.9 [X]
- E 1.14 [X]
- E 1.25 [X]
- E 1.28 [X]
- E 1.29 [X]