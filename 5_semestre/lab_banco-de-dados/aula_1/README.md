# Aula 1 - Laboratório de banco de dados

## Acessando o MongoDB

Existem três formas de acessar o mongoDB, são elas:
- Cliente Javascript;
- Cliente Python;
- Client web (Neste caso, será utilizado o bottle).

## CRUD com MongoDB

Abaixo, algumas dicas para a realização do CRUD com MongoDB.

Erro muito frequente em MongoDB: Tem-se um JSON `{'a': 'b'}`, ele pode ser inserido no banco quantas vezes for necessário. Porém ao utilizar `db.findOne()` e ele retornar `{'_id': 1, 'a': 'b'}`, caso queira inserir este elemento novamente no banco dará problema, isto porque os _id são únicos.

:bomb: Lembre-se, caso você queira alterar registros, utilize `update`.
