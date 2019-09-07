# Aula 24/10/2017

## Algoritimos de força bruta

Dois tipos: <code>(n ^ 2) - 1</code> ou <code>n!</code>

### Algoritimo de boyer-moor

Trabalha com saltos, por exemplo, é necessário buscar determinado texto em uma frase, o que o algoritimo faz é verificar os itens.
Ao verificar a letra ele fará a seguinte análise, caso a letra esteja na palavra buscada, pula uma quantidade de casas que consiga encaixar a frase no lugar certo, caso contrário ele irá pular uma quantidade igual a quantidade de letras presentes na palavra buscada.

OBS: Este algoritimo é mais rápido que Quick-sort, Merge-sort pois ele em média gasta n tempos.

## Arvores binárias

* Importante: Árvores binárias representam log(n)2 (Log de n na base 2).

Árvores binárias são utilizadas principalmente para criar índices de banco de dados (SQL e NoSQL). Isso porque ele é bem rápido na pesquisa, mesmo com o crescimento  

* OBS: Todos os nós da esquerda tem valor menor, e todos os nós da direita, tem valor maior.

Qual a diferença entre buscar elemento na árvore binária e no vetor ordenado ?
R: A diferença está na velocidade, no caso dos vetores, quanto mais elementos, mais lentos ficam (Inserir e remover) e em uma árvore binária (B-Tree) basta mover ponteiros, o que é muito rápido.

### Formas de percorrer a árvore

* 1° - Raiz-Esquerda-Direita (Pré-ordem);
* 2° - Esquerda-Raiz-Direita (Em ordem);
* 3° - Esquerda-Direita-Raiz (Pós-ordem);
    * A + B * C
        * Faz a árvore e gera uma notação pós fixa

## Notação infixa e posfixa

A notação infixa é a notação que é comum de ser vista, como por exemplo:
```python
(A * (B + C) / D - E)
```

Porém computacionalmente há formas melhores de criar esta notação, e ainda, utilizando menos recursos, esta notação é chamada de posfixa (Polonesa reversa).
É bastante utilizada com árvores binárias e tem aplicações em matérias como <code>Teoria dos compiladores</code>, veja como é descrita a expressão

```python
INFIXA:
    (A * (B + C) / D - E)
POSFIXA:
    A B C + * D / E -
``` 

Veja que não há parênteses!

É interessante notar que neste tipo de notação, quando vinda de uma <code>infixa</code> os operandos não mudam a sequência.