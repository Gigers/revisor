# Aula 0 - Laboratório de banco de dados

Introdução aos principais conceitos de bancos de dados não relacionais.

## Curso

Será necessário realizar o seguinte curso: https://university.mongodb.com/courses/M101P/about

## Material

Como referência para esta aula (Aula zero), pode-se utilizar o seguinte link: https://pt.slideshare.net/fmasanori/hello-nosql-world

## Ambiente

Para o ambiente será necessáro ter instalado os seguintes pacotes de Python 3.5:
  - `pymongo`;
  - `bottle`.

```python
pip install bottle pymongo
```

Além deste, o MongoDB também deverá estar instalado.

`OBS`: Caso queira, utilize o mLAB.

## MongoDB

Abaixo algumas características do MongoDB

- :bomb: MongoDB utiliza o BSON (JSON binário - Otimizado);
- Banco de dados distribuido (Tradeoff para ser mais rápido)
  - Por isso não tem joins;
  - E também não tem transação.
- Collections: `São equivalente a uma tabela no mundo relacional`;
- Dinâmico: `Pode-se criar e utilizar tabelas sem ter que cria-las ou defini-las. Além disso a remoção também é dinâmica`.

Alguns bancos NoSQL com ACID:
- CouchDB.

:bomb: `Lembre-se`: "Até Python 3.6, o dicionário do Python não mantinha a ordem das chaves. Na 3.7 isto muda. O que era feito antes para ordenar era passar uma tupla com a ordem dos valores."

Formas de interagir com  o MongoDB:

- MongoDB - Shell;
- MongoDB - Post;

## Informativos

Avisos da matéria sempre serão publicados no link: http://dontpad.com/masanoriLabBD
