# Aula 6 - Sharding

Sharding = Particionamento horizontal da collection (Cada pedaço em um cluster). Não é somente réplica, e sim `fatias` da colection.

- O MongoDB permite clustering.
    - Pode-se definir as diversas formas de um cluster;
    - Há também a possibilidade de se ter vários cluster com diferentes tamanhos de nós

Toda a operação de `write` passa pelo mongoS

## Informações extras

- Cassandra tem vários pontos centralizadores, porém a consistência deste é pior que a do mongoDB.

- Escalar no banco de dados relacional é mais complicado que bancos de dados não relacional (Isto não torna o banco de dados relacional pior, a diferença está na arquitetura)

- Em bancos de dados relacionais, tem-se consistência forte