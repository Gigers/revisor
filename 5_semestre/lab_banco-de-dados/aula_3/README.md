# Aula 3 - Adicionando estudantes na base de dados

Nesta aula foi realizado a inserção e manipulação de dados no MongoDB.

O código de inserção de dados no Mongo, pode ser visto abaixo: 

```javascript
use school

var types = ['exam', 'homework', 'quiz']
for (student_id = 0; student_id < 100; student_id++) {
    for (type=0; type < 3; type++) {
  var r = {'student_id':student_id, 
	         'type':types[type], 
	         'score':Math.random() * 100};
	db.scores.insert(r)
    }
}
```

O Mongo 4.0 é ACID, ou seja, agora ele possui transações multiplas para vários documentos. (Permite proteção de dados, com `rollbacks` por exemplo)

## Formas de aquisição de dados

- `find`: Busca N elementos. Com N variando de acordo com a quantidade de resultados;
- `findOne`: Devolve apenas um único elemento;
- `findAndModify`: Forma atômica de realizar operações em MongoDB;

## Seletores

Permite que sejam realizados filtros nas consultas feitas no banco de dados. A utilização dos fintros é bastante simples, veja:

```javascript
var element = db.scores.find({}, {'student_id': 1, 'score': 1, '_id': 0})
```

Veja que, no código acima de todos os resultados encontrados, serão carregados apenas os campos `student_id`, `score`.

Há também formas de definir intervalos nas pesquisas, utilizando alguns operadores lógicos:

```javascript
// Buscando os valores entre 10 e 20 de uma collection qualquer
var element = db.score.find('score': {'$gt': 10, '$lt': 20})
```

`Observação`: Em Python e algumas outras linguagens, o dicionário não mantém a ordem das chaves. Por isto o cliente Python do Mongo utiliza tuplas, que asseguram a ordem. (Isto em versões do Python < 3.6).

Com documentos maiores que 16 MB, será necessário utilizar gridfs, para que o documento seja dividido em várias partes.

## Referência utilizados em aula

- https://gist.github.com/fmasanori/5923215
- reddit.com/Python

### Ferramentas recomendadas

- JsonView (Chrome)