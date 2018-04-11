# Banco de dados

Matéria de projetos e modelagens de banco de dados

## Visão geral

Banco de dados é uma coleção de dados. E neste contexto, os dados são fatos do mundo real que precisam ser armazenados.

Veja que, definir um banco de dados, é criar as estruturas para armazenamento dos dados e especificar as restrições que devem ser impostas aos dados.

Ao falarmos sobre os bancos de dados, é importante ter alguns conceitos bem definidos, são esses:

* Dado -> É a representação da informação
    * Fato do mundo real que está registrado e possui um significado no contexto de um domínio de aplicação;
* Informação -> Significado do dado
    * Fato útil que pode ser extraído a partir dos dados.

E lembre-se: `Armazenando informação perdemos a informação !`. Nunca armazene informações e sim dados, isso porque você estará perdendo as informações armazenadas com o tempo, um exemplo simples, o armazenamento da idade de uma pessoa deve ser feito utilizando a data de seu nascimento, e não quantos anos tem direto, pois os anos passam e esta pessoa muda de idade, mas não a data que nasceu.

Há outros conceitos que também tem grande importância na área de banco de dados:
* Esquemas
    * Definição dos tipos de dados que estão armazenados ou estarão armazenados no banco de dados;
    * É difícil apresentar mudanças.

* Instâncias (Estado)
    * São os dados e informações de um banco de dados;
    * Conjunto de informações de um banco de dados em um dado momento;
    * Sempre sofre alterações.

* Instância X Esquema - (Exemplos)
    * Esquema: FUNCIONARIO(nome, salario)
    * Instância: Ana Maria, 2.500 

### Abstração de dados

Para que seja possível utilizar um banco de dados, ou um SGBD, é importante que o modelo de dados seja conhecido, ou seja, que a estrutura a qual o dado está armazenado, isso é feito principalmente através de representações em modelos conceituais da estrutura e dos dados.

### Usuários de um banco de dados

É importante que se conheça os usuários que irão fazer a utilização, criação e manutenção do banco, de uma forma geral, os seguintes tipos de usuários fazem a utilização das bases de dados:

* Programadores:
    * Utilizam comandos DML nos programas de aplicação.
* Usuários simples:
    * Utilizam os programas de aplicação sem saber os detalhes de como os dados estão sendo armazenados.
* Analistas:
    * Fazem acesso ao banco de dados através da DML.
* Administrador de banco de dados:
    * Faz o controle total dos dados e dos programas que os acessam;
    * São esses os usuários que fazem a definição e controle da estrutura conceitual, de armazenamento dos dados, além de fazerem modificações e organizações no modelo físico do banco de dados. 

## SGBD

É uma coleção de programas que permite que os dados armazenados podem ser gerênciados e manipulados

Os SGBDs trazem independência entre os dados e os programas que farão a leitura desses. Isso porque todo o controle e formas de armazenamento passarão a ser controlados pelo SGBD, em um passado pouco distante os programas e os dados eram fortemente acoplado, isso porque todos os dados eram estruturados seguindo a lógica definida pelo programa, com isso, quando outro programa fosse fazer as leituras, era necessário a adequação da lógica de leitura e aquisição para a estrutura dos dados.

### Vantagens

As características citadas acima sobre o SGBD, trazem várias vantagens para que faz sua utilização, veja as principais:

* Controle de redundância: O SGBD evita que multiplas instâncias do mesmo dado sejam salvos no banco (Lembre-se de que, o ato de salvar várias instânicias do mesmo dado podem trazer problemas de inconsistência nos dados);

* Controle de acesso: O SGBD oferece formas de autorização e segurança que previne acessos indevidos aos dados;

* Persistência para programas e estruturas de dados: Códigos e estruturas de dados são armazenados e gerenciados pelos SGBDs, como objetos (Eles são nomeados, e podem ser invocados, alterados, e excluídos)

* Eficiência no processamento de consultar: A recuperação de informações é realizada de forma bastante rápida, isso por conta de otimizações nos sistemas e ainda, gerênciamento de indíces e de memória;

* Oferecimento de sistemas de *backups* e recuperação: Os SGBDs oferecem formas de *backup* o que torna os dados integros, além de aumentar a dispinibilidade e segurança dos dados;

* Gerantia das restrições de integridade: Os dados armazenados em um banco de dados, são associados a algumas restrições. Essas são sempre verificadas e garantidas.

* Garante padrões;

* Flexibilidade e disponibilidade dos dados.

### Banco de dados X SGBD

### Sistema de banco de dados X Sistema gerenciador de banco de dados

## ACID


## Modelos de dados

O modelo de dados (BD) é basicamente um conjunto de conceitos utilizados para descrever um banco de dados.

Pode ser definido também como, `Descrição formal da estrutura de um banco de dados`. (Heuser, 2004.)

### Modelo conceitual (MER)

Modelo de dados abstratos, que descreve a estrutura de um banco de dados, e essa independe do Sistema gerenciador de banco de dados (SGBD).

![Modelo conceitual](modelos/conceitual_1.PNG)

Dentro deste modelo há alguns conceitos que devem ficar bastante claros, para que haja facilidade no processo de modelagem dos dados.
* Entidade
    * Entidade forte:
        * São as entidades que conseguem existir no modelo de forma idependente.
    * Entidade fraca:
        * Essas são entidades que necessáriamente dependem de alguma outra entidade e/ou relação para existir.
    * Atributo:
        * É uma propriedade que descreve uma entidade.
* Atributos
    * Existem alguns tipos de atributos, são eles
        * Simples
        * Compostos
            * Atributos que são constituidos por outros atributos.
        * Univalorados
        * Multivalorados
            * Valores que podem assumir mais de um valor
        * Armazenados
        * Derivados
            * Valores que são resultantes de cálculos ou valores de outros atributos
    * Atributo chave
        * Valor único de identificação de uma instância, dentro de uma entidade.
        * No caso da entidade fraca, o atributo chave é nomeado `chave parcial`. Quando houver chave parcial, será necessário haver uma chave primária, de alguma entidade forte.
    * Restrição de unicidade
        * Proíbe que duas entidades, em um mesmo conjunto entidade, tenham o mesmo atributo chave (Este é um conceito aplicado com a utilização do `atributo chave`.
* Relacionamentos
    * Os relacionamentos representam as associações existentes entre as entidades.
    * Grau
        * O grau de um relacionamento é o número de tipos de entidade participantes do relacionamento, pondendo ser:
            * Binário (Grau dois);
            * Ternário (Grau três);
            * n-ário (Grau n).
    * Atributos
        * Os atributos nos relacionamentos são usados para descrever uma relação (Associação) entre as entidades envolvidas.
* Cardinalidade
    * A cardinalidade indica a quantidade de instâncias de relacionamento nas quais uma instância de entidade pode participar.
        * 1:1 (um para um);
        * 1:N (um para muitos);
        * M:N (muitos para muitos)

#### Atributo chave

Durante os tópicos do modelo conceitual, foi citado o `atributo chave`, este é um conceito bastante importante. Veja que este atributo chave, pode ser representado de duas formas

* Chave primária
    * Esta é uma chave que deve ser única no banco de dados, ele é utilizado para fazer a identificação de uma única instância de dados;

* Chave estrangeira
    * Este é uma chave primária, porém em uma outra tabela, desta forma ela cria um relacionamento entre as entidades.

<!-- Verificar com a validade dessas afirmações. -->

### Modelo lógico

Modelo de dados que representa a estrutura de dados de um banco de dados conforme vista pelo usuário do SGBD. Este é um modelo que depende do SGBD que está sendo utilizado

![Modelo lógico](modelos/logico_1.PNG)

### Modelo físico

Este é o modelo que representa análise e aplicação do modelo lógico.

![Modelo físico](modelos/fisico.PNG)

### Modelo relacional

### Mapeamento MER -> Relacional

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

## DDL e DML

## SQL - Structured Query Language

<!-- Será adicionado depois -->

## Dúvidas

- (?) Nas normalizações, os atributos multivalorados sempre serão removidos (Transformados em tabela) ?
    - Não se pode ter atributos multivalorados no modelo relacional.

- (?) Relacionamento recursivo é o mesmo que auto-relacionamento ?

- (?) Chave estrangeira é a mesma coisa que chave parcial ?