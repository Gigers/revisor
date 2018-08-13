# Aula 2 - Blog com banco de dados NoSQL

Nesta aula começará a ser desenvolvido um blog.

- Este blog no modelo reacional tem `6 tabelas`;

Veja que

- :bomb: Apesar de posts e comentários terem  um relacionamento 1:N, a cardinalidade dos comentários é baixa;

- Então posso embutir os comentários dentro de cada post, como uma lista;

- O meu problema de fazer um blog admite otimizações para este caso específico;

- Também eu não costumo mudar as tags;

- Não acessamos tags, sem antes acessar o post;

- Em geral acesso primeiro o post, para saber quem postou, ver as tags, ver os comentários.

Assim no MongoDB, em lugar das 6 tabelas do modelo relacional, pode-se ter apenas uma collection Posts

Lembra-se

- :shell: Banco de dados NoSQL (Not Only SQL) em geral é ótimo para aplicações específicas, já o relacional para aplicações genéricas.

Posso ter persistência Poliglota, onde o BD principal é relacional e as partes especificas NOSQL

Ex.: Um sistema para um atacadista pode ter uma rede social em `Neo4J` e um sistema de BI (tomada de decisão) em um banco colunar `Vertica`. O BD principal relacional.

## Dicas e informações

- Gist: https://gist.github.com/fmasanori/5923215
- `Especialista em modelagem MongoDB`: Emilly Estolfo
