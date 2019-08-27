# Padrões de projeto ou Design Patterns

Um `padrão` descreve um conjunto composto por um contexto, um problema e uma solução, isto é, um padrão descreve uma solução para um problema em um contexto. Contudo, um padrão descreve uma solução que ja tenha sido utilizada com sucesso em mais de um contexto.Portanto, um padrão descreve soluções consolidadas.
## Conceitos
### Composição
Apesar de não estar entre os quatro elementos principais de uma linguagem orientada a objetos, a composição é um conceito que vem implícito quando se fala em objetos. a composição combinada com o uso de abstrações pode ser eficaz na solução de diferentes
problemas.

### Hook Methods

`Hook Methods` são métodos que podem ser sobrescritos pelas subclasses como forma de estender e/ou especializar o comportamento da classe.

![Representação de Hook Methods](images/hookMethods.png).

Quando um hook method é utilizado a escolha é feita no momento em que o objeto é instaciando. Isso ocorre pois ao criarmos um novo objeto devemos escolher qual a classe concreta que será utilizada.
### Hook Class

`Hook Class` são classes que possuem o comportamento definido em uma outra classe que compõe a classe principal.

![Representação de Hook Class](images/HookClass.png)

Na hook class a implementação pode ser trocada a qualquer momento, bastando trocar a instância que foi configurada.

### Revisando modificadores de métodos
A seguir estão relacio-
nados alguns modificadores de acesso e qual o recado que uma classe manda para
duas subclasses quando utiliza cada um deles:

* `abstract`: Um método abstrato precisa ser obrigatoriamente implementado em uma subclasse concreta. Isto é, que esse é um `hook method` que foi definido na superclass e precisa ser definido.

* `final`: Um método final não pode ser sobreescrito pelas suas subclasses e por isso nunca representará um `hook method`. Métodos `final` representada funcionalidades da classe que precisam ser imutáveis para seu bom funcionamento.

* `private`: Os métodos privados só podem ser invocados dentro da classe que são definidos, ou seja, eles representam métodos de apoio internos da classe e nunca poderão ser substituídos pela sublclasse como um `hook methdo`.

* `protected` e `public`: Todos os métodos públicos e protegidos, desde que não sejam `final`, são candidatos a `hook method`, isto é, estes métodos podem ser sobrescrito na subclasse que pode ser utilizado para a inserção de comportamento.

## Padrões (Patterns)

### Template Method
 O *`Template method`* é aplicável quando se deseja definir um algoritmo geral, que estabelece uma série de passos para cumprir um requisito da aplicação. Porém, seus passos podem variar e é desejável que a estrutura de implementação forneça uma forma para que eles sejam facilmente substituídos.

 Este padrão estabelece um modelo de algoritmo que possui algumas partes fixas e algumas partes variáveis. As partes variáveis são lacunas que precisam ser completadas para que o algoritmo faça realmente sentido. As lacunas são representada por `hook methods` que podem ser implementados na subclasse.

 * Caso seja uma lacuna obrigatório deverá ser definido como `abstract`. * 

 Segue abaixo UML padrão do `Template method`.

 ![Estrutura do template Method](images/TemplateMethod.png)

### Strategy

 O `Strategy` é um padrão que deve ser utilizado quando uma classe possuir diversos diversos algoritmos que possam ser utilizados de forma intercambiável. A Solução proposta consiste em delegar a execução do algoritmo para uma instância que compõe a classe principal. Isto é, o algortimo de execução é composto (implementado) na classe principal em tempo de execução.

 A figura abaixo demonstra um Diagrama de classes genérico do padrão `Strategy` :

![UML Strategy Genérico](images/StrategyGenerico.jpg)

#### Pontos positivos
* O algortimo pode ser alterado sem a modificação da classe, logo é fácil adicionar novas implementações
* Lógica condicional na classe princial é reduzida.
* A implementação pode ser trocada em tempo de execução, com isso o comportamento da classe pode ser trocado dinamicamente.

#### Pontos negativos
* Aumento de complexidade na criação do objeto, pois a instância da dependência precisa ser criada e configurada e caso o atributo seja nulo haverá comportamento inesperado.
* Aumento do número de classes: há uma para cada algoritmo, criando uma maior dificuldade em seu gerenciamento.



### Bridge

O padrão `Bridge` cria uma ponte entre duas hierarquias ligadas por um relação de composição permitindo que ambas variem de forma independente. Nesse caso, a ponte é caracterizada pela relação de composição entre classes.
Um cenário em que esse tipo de solução é comum é quando temos uma hierarquia de abstrações e outra com implementações, permitindo que cada uma possa variar independentemente.

A figura abaixo mostra um Diagrama de classes genérico do padrão `Bridge`:

![Diagrama de classes Bridge Genérico](images/BridgeGenerico.jpg)

#### Pontos positivos
* Torna independente os fatores que podem variar
* As classes que foram separadas (Componentes) podem ser reutilizadas em outros contextos
* Desacoplamento de responsabilidades, permitindo mais facilmente o reuso


#### Pontos negativos
* Aumento do número de classes: há uma para cada componente, criando uma maior dificuldade em seu gerenciamento.


## Referências

GUERRA, Eduardo. Design Patterns com Java: Projeto orientado a objetos guiado por padrões. Editora Casa do Código,
2014.