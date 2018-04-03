# Banco de dados

Matéria de projetos e modelagens de banco de dados

## Visão geral

Banco de dados é uma coleção de dados

<!-- Dado -->
<!-- Informação -->

## Banco de dados X SGBD

## Chave primária X Chave estrangeira

## Modelo Entidade-relacionamento

## Modelo relacional

## Mapeamento MER -> Relacional

## Dependências funcionais

## Formas normais

`A qualidade de um projeto de banco de dados pode ser medida a partir da verificação da forma normal que ele alcança.`. Marques Peres, Sarajane.

`Definição - Normalização`: O processo de normalização é dirigido pela informação referente às dependências funcionais e às chaves dos esquemas de relação. Este é um processo de análise e adequação dos esquemas de relações com o objetivo de minimizar redundâncias e anomalias de inserção e alteração.

Neste processo de normalização ocorre o processo de decomposição de relações que não seguem certas condições. Este processo de decomposição, cria relações menores, para que assim as condições sejam satisfeitas.

A forma normal atribuida a algum projeto de banco de dados, está ligado a relação que tenha a menor forma normal.

### Primeira forma normal (1NF)
Não permite relações dentro de relações, ou relações com valores de atributos dentro das tuplas.

**Requer**: Valores atômicos.

Veja um exemplo de normalização para 1NF.

A tabela abaixo não está na forma 1NF
```
DEPTO(numero, nome, gident, localizacoes)
```

Perceba que o localizacoes é um atributo multivalorado, e a primeira forma normal requer atributos atômicos, para resolver o problema, será realizado a decomposição (Assim como citado anteriormente).

```
DEPTO(numero, nome, gident)
DEPTO_LOCS(numero_depto, localizacao)
```

Outro exemplo:

```

FUNC_PROJ(Ident, fnome, pnumero, horas)
```

Neste caso o pnumero e horas são atributos aninhados, o que também não é permitido da 1NF, para resolver isso a entidade será decomposta

```
FUNC_PROJ1(Ident, fnome)
FUNC_PROJ2(Ident, pnumero, horas)
```

Pronto, entidade novas criadas para resolver o problema. O ponto interessante é que, cada uma das entidades ficaram com suas devidas características, isso porque antes o funcionário carregava consigo características de seu relacionamento com o projeto, o que não ocorre mais, já que há uma tabela apenas para descrever este relacionamento. 

### Segunda forma normal (2NF)

Esta é uma forma normal que é baseada no conceito **atributo primo** e **dependência funcional total**.

Um esquema de relação R está em 2NF se todo atributo não primo A em R tem dependência funcional total da chave primária.

Por exemplo:

```
FUNC_PROJ(func_ident, proj_numero, horas, func_nome, proj_nome, proj_localizacao)
```

Para resolver novas entidades foram criadas:

```
FP1(func_ident, proj_horas)
FP2(func_ident, func_nome)
FP3(proj_numero, proj_nome, proj_localizacao)
```

- Atributo primo = Um atributo é primo quando ele é membro de alguma chave candidata em uma tabela R, caso contrário ele é considerado não primo.
    - Exemplo de atributo primo:
        ```
            FUNC_PROJ2(Ident, pnumero, horas)
        ```
        Atributos primos: Ident, pnumero

- Dependência funcional total = É uma dependência funcional X -> Y, quando ao remover o atributo A de X, a dependência deixa de valer
- Dependência parcial = É uma dependência funcional parcial se para algum atributo A em X, e (X - A) -> Y. Ou seja mesmo removendo um atributo A de X, a dependência ainda vale.

Por exemplo:

{func_ident, proj_numero} -> horas, func_nome, proj_nome, proj_localizacao

```
{func_ident, proj_numero} -> horas. Aqui caso eu faça a remoção de proj_numero, perco o acesso as horas, fazendo assim que esta seja uma dependência funcional total
```

```
{func_ident, proj_numero} -> func_nome. Aqui caso eu faça a remoção de proj_numero, ainda assim vou conseguir realizar o acesso a func_nome, desta forma, esta é uma dependência funcional parcial.
```



### Terceira forma normal - Ideal em projetos de banco de dados. (3NF)

### Boyce-Codd Normal Form

OBS: Foi dito que as formas normais server para garantir a qualidade do projeto, porém nem sempre essa é a melhor forma, deve-se levar em conta também as seguintes propriedades:
* Junção sem perdas;
* Preserva as dependências funcionais.

## Dúvidas

- (?) Nas normalizações, os atributos multivalorados sempre serão removidos ?
    - Não se pode ter atributos multivalorados no modelo relacional.