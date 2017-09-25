# POO - Fatec SJC (Revisão)

Este é um documento que contém a revisão de toda a matéria de POO, apresentada no primeiro bimestre do segundo semestre de 2017.

# Paradigma de programação

O paradigma de programação é uma forma de programar, suportada por linguagens que compartilham características comuns

# Orientação a objetos - Conceito

A orientação a objetos é uma forma de desenvolvimento de software que faz a modelagem do mundo real em software, com comportamentos, estruturas e coleções de objetos

* No caso dos comportamentos, é possível entender que a classe tem atributos e métodos, esses explicados a seguir

# Classes

As classes são as representações dos modelos reais em software, e são utilizados para criar os objetos.

Nesta são carregadas os atributos e métodos, explicados abaixo.

# Atributos

Os atributos ou estados, são as características que uma classe apresenta, por exemplo, a classe Pessoa possui os atributos:
* Nome:
* Idade;
* Sexo;
* Cor;
* Peso.

Na representação feita através do Java, é necessário que o atributo tenha tipo e nome, veja:

```java
public class Pessoa{
    String nome; // Atributo nome do tipo String
    int idade; // Atributo idade do tipo inteiro
    String sexo; 
    String cor;
    double peso; // Atributo peso do tipo double
}
```
# Métodos

Os métodos são as operações que manipulam os atributos, que os utiliza para realizar alguma operação, como contas (soma, divisão) , cadastro entre muitos outros.

Eles representam as ações que aquela classe pode realizar, como exemplo, novamente será utilizado a classe Pessoa

A pessoa pode realizar as seguintes operações:
* Andar; 
* Correr;
* Pular;
* Falar;
* Pensar;

Sua representação em Java, pode ser feita da seguinte forma:
```java
public void pensar(){
    
}
public void correr(boolean argumento){
    // Aqui vão as ações necessárias para que a ação ocorra
    // Podendo ser utilização dos atributos
    // ou através da da utilização de argumentos recebidos

    if(argumento == true){
        System.out.println("A pessoa corre");
    } else {
        System.out.println("A pessoa continua andando");
    }
}
```

# Método construtor

O método construtor é um método que é chamado toda vez que um objeto da classe é criado, mesmo quando não é declarado exlicitamente, um construtor vázio é criado pelo Java.

Este mesmo sendo um método, não tem retorno, e seu nome tem de ser exatamente o mesmo da classe, veja:

```java

public class Pessoa{

    private String nome;
    private int idade;

    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
}
```

Gerando este construtor é possível criar um objeto já com os atributos preenchidos, como é visto acima.  

# Objetos

As classes podem ser vistas como moldes, ou até mesmo ideias de um certo modelo do mundo real, como por exemplo a classe Pessoa, ou a classe Computador. Porém esses são apenas modelos, a 'materialização' deste é feita através dos objetos, estes representam a aquela ideia criada.

Após esta instância é possível utilizar os métodos e atributos definidos na classe

OBS: Os objetos são sempre por referência
OBS: Instância é o ato de criar o objeto

# Tipos primitivos
Tipos primitivos são os tipos básicos de dados, presente em qualquer linguagem de programação. Aqui não há referência, apenas valores, assim caso seja feito:

```java
int a = 123;
int b = a;
a = 312;
System.out.println("Valor de a: " + a  +"\nValor de b: " + b );
```
Saída: Valor de a: 321
            Valor de b: 123

Isto não ocorre nos tipos por referência, vistos abaixo

# Tipos por referência

São ponteiros que apontam para o endereço de memória ao qual o objeto em questão está alocado, perceba que estes são ponteiros de memória, que são utilizados de forma implicita
```java
Pessoa pessoa1 = new Pessoa();
Pessoa pessoa2 = new Pessoa();

pessoa1.nome = "João";

pessoa2 = pessoa1;

System.out.println("Pessoa 1: " + pessoa1.nome + "\n" + "Pessoa 2: " + pessoa2.nome);
```
Out:  Pessoa 1: João
         Pessoa 2: João
 
```java

pessoa2.nome = "Alfredo";

System.out.println("Pessoa 1: " + pessoa1.nome + "\n" + "Pessoa 2: " + pessoa2.nome);
```
Out:  Pessoa 1: Alfredo
         Pessoa 2: Alfredo


# Primitivos vs Referência

A principal diferência em utilizar as referências ao invês dos primitivos é que no caso dos valores por referência, que são objetos, é que estes tem métodos, que podem ser utilizados para outras conversões, ou até mesmo para facilitar algum outro processo 


# Empacotamento

Esta é a técninca utilizada quando há a necessidade de transformar variaveis primitivas em variáveis por referência. Esta é feita utilizando as classes que representam os tipos primitivos

```java

Integer
Double
Float

```

# Autoboxing

O java em versões antigas, necessitava de instâncias de objetos para realizar o empacotamento, nas versões mais novas isso não é necessário, com a utilização do autoboxing, basta apenas utilizar a classe referente ao tipo primitivo e pronto, a coverão é feita. Veja:

```java

int a = 123;
Integer b = a; // Valor primitivo transformado em referência 

```


# Matrizes em java

As matrizes em java permitem alocação de tipos primitivos ou de tipos por referência. A matriz também é um objeto do tipo definido, isso porque ela se torna uma referência a outros objetos. 

Desta forma a matriz passa a ser um ponteiro para ponteiro.

# for e o for-each

Existem duas formas de loop, o for, comunente já visto em outras linguagens, como C e o for-each, que é a otimização deste, veja

```c
int a[] = {1,2,3,4,5};

// Loop comum
for(int i = 0; i < sizeof(a) / sizeof(int); i++){
    printf("a[i]\n");
}
```
<!-- Separação -->
```java

int[] a = {1,2,3,4,5};

// Loop comum, parecido com o loop em C, demonstrado acima

for(int i = 0; i < a.length; i++){
    System.out.println(a[i]);
}

// for-earch (Loop melhorado)

for(int i : a){
    System.out.println(i);
}
```

Também é possivel utilizar eles com dados criados pelo programador, por exemplo a classe Pessoa é um tipo de dado, e pode ser utilizada nos dois casos loop.

```java

public class Pessoa{
    String nome;

    public Pessoa(String nome){
        this.nome = nome;
    }
}

Pessoa[] pessoas = {new Pessoa("José"), new Pessoa("Maria"), new Pessoa("João")};

// Forma antiga (Com sentinela)
for(int i = 0; i < pessoas.lenght; i++){
    System.out.println(pessoas[i].nome);
}

// Forma nova (for-each)
for(Pessoa pessoa: pessoas){
    System.out.println(pessoa.nome);
}
```

A diferença entre estes dois formatos de loop, é que o for-each obrigatóriamente irá percorrer todos os itens, enquanto o for normal, que utiliza sentinela, pode não percorrer ou não passar por todos os itens, isso porque pode variar de acordo com os limites postos e pela forma com que o contador é acrescentado

```java
// Veja um exemplo que pode trazer problemas

int[] a = {1,2,3,4,5};

for(int i = 0; i < a.length; i += 2){
    System.out.println(a[i]);
}
``` 
# Modificadores de acesso

Em java há quatro modificadores de acesso: <code>public, protected, default, private</code>

Os modificadores de acesso servem para definir qual serão as formas possíveis de acesso a atributos e métodos de algum objetos.

Perceba que, ao fazer

```java
    String nome;
```

Esta variável está utilizando o tipo <code>default</code>, esta que é coonhecida por <code>package-private</code>, pois quando definida desta forma apenas a classe que criou e o pacote podem visualizar aquele atributo.

Já quando é declarado como <code>public</code>, todos de todos os lugares tem acesso ao atributo declarado desta forma.

O <code>protected</code> trabalha de forma similar ao <code>default</code>, porém as sobclasses também tem acesso aos atributos declarados desta forma.

# Encapsulamento

O encapsulamento utiliza como base os modificadores de acesso, são eles que trazem os conceitos para o encapsulamento, como demonstrado abaixo.

O encapsulamento de dados se remete, a ocultação dos dados de uma classe. Ao colocarmos o modificador de acesso <code>private</code> estamos fazendo o encapsulamento da informação, ou seja, a informação está oculta para acessos diretos, isso evita modificações sem uma ação especializada. 

Perceba que esta é uma das principais vantanges da orientação a objetos, já que através dessa é possível criar programas mais claros, com menos riscos de problemas ou erros.

Veja um exemplo, que é ilustrado por uma classe de uma conta bancária:

```java
public class ContaBancaria{
    
    private String nomeDoDono;
    private double saldo;

    public void deposito(double valor){
        this.saldo += valor;
    }
    public void sacar(double valor){
        if(valor > saldo){
            System.out.println("Valor inválido! Saldo insulficiente");
        } else {
            this.saldo -= valor;
            System.out.println("Valor retirado com sucesso!");
        }
    }
    public void consultaSaldo(){
        System.out.println("Seu saldo é de: " + saldo);
    }

}
```

Veja que a única forma de acesso ao saldo, seja para consulta ou alteração é através dos métodos específicos. Com isso é possível aplicar regras, assim como é feito no método <code>sacar</code>

Assim é possível perceber que esta ação de ocultar os dados e disponibilizar formas de acesso controlada a este, faz com que haja mais segurança e controle, além de oferecer mais clareza. Isso porque o oferecido a quem utiliza o método será somente ele, todas as regras utilizadas estão ocultadas.

# sets e gets

Em alguns casos pode ocorrer de, a váriavel ficar disponível apenas para a classe, assim como ocorre quando é utilizado o modificador de acesso <code>private</code>.

Nestes casos terão de ser utilizados métodos para fazer a modificação/acesso  destes atributos, esses são conhecidos como sets e gets.

Os sets são métodos utilizados para atribuir valor a alguma váriavel privada quando for necessário.
E os gets para que os valores atribuidos a estas váriaveis podem ser acessados

```java

// Classe Pessoa

private String nome;
private double altura;

// Para modificar estes atributos, usa-se os sets

public void setNome(String nome){
    
    // O this serve para referênciar a própria classe
    this.nome = nome;
}

public void setAltura(double altura){

    this.altura = altura;
}

// Porém apenas colocar os válores em algumas vezes não basta, assim sendo necessário visualiza-los, para isso são utilizados os gets

public String getNome(){
    return nome;
}

public double getAltura(){
    return altura;
}
```

# Assinatura de métodos

Todo método possui uma assinatura. A assinatura define:

* Nome do método:
    * Aqui é definido o nome que aquele método irá receber.

* Argumentos:
    * Neste ponto, serão definidos se o método irá ter argumentos de entrada ou não

# Sobrecarga de método

Sobrecarregar métodos signica declarar diferentes métodos com o mesmo nome, porém com assinaturas diferentes, isto é, com argumentos.

Veja um exemplo abaixo

```java

public void metodo(){

}

// É diferente de

public void metodo(String args){

}

// Este que por sua vez é diferente de

public void metodo(String args, String args2){

}


```

Veja que apenas o argumento mudou mas assim a JVM será capaz de escolher qual método será utilizado de acordo com a quantidade de argumentos e seus tipos.

# Modificadores de comportamento

Além dos modificadores <code>public, protected, default, private</code>, existem alguns outros modificadores, aqui vou tratar do <code>final</code> e do <code>static</code>.

Eles recebem este nome por modificar algum comportamento a quem está sendo atribuido, veja

* final

O <code>final</code> no âmbito das váriaveis de instância (Entenda como os atributos), ele define constantes, assim após a primeira atribuição, não é mais possível fazer modificações. 

Perceba que o comportamento das váriaveis foi alterado, fazendo que elas aceitem apenas uma modificação.

OBS: Essa única modificação citada acima, só pode ser feita quando a váriavel que está com o <code>final</code> foi criada sem atribuição, caso ela seja criada com atribuição, nenhuma outra será permitida

No caso de métodos, ele define que o método não pode ser sobrescrito por sobclasses.

* static

O <code>static</code>, outro modificador de comportamento, quando utilizado nas váriaveis de instância, fazem com que o mesmo valor seja definido para todos os objetos, assim se houver:

```java
static String[] nomes;
```
Se houver algo parecido com o item acima, e um objeto modificar, outros objetos verão os mesmos valores modificados.

Ele também pode ser usado em métodos, porém neste caso, ele fará com que o método possa ser chamado sem a necessídade da criação de um objeto da classe que o carrega, veja

```java

// Neste exemplo a classe calculadora tem o método soma
// Porém criar um objeto apenas para utilizar este método pode não ser interessante
// Então este método irá passar a ser statico, para evitar o que ocorre abaixo

// Calculadora calculadora = new Calculadora();
// calculadora.soma(123,321);

// Quando o método passa a ser statico, a chamada deste método fica da seguinte forma

Calculadora.soma(123,312);

// Veja que não foi necessário instânciar a classe para chamar o método.
```

O <code>static</code> utilizado por métodos, deve sempre ser aplicado, em casos em que o método independe de outras partes da classe para funcionar.

Os modificadores de comportamento podem ser utilizados juntamente aos modificadores de acesso, veja um exemplo:

```java
// Váriavel 
private static String nome;


// Método
public static void corre(){
    System.out.println("Ele saiu correndo");
}
```

# Herança

Em orientação a objetos, a herança pode ser entendida como uma classe herdando funcionalidade e características de outra.
A relação disposta pela herança pode ser dito como <code>é um</code>

Desta forma, é possível abstrair e entender o conceito de quando utilizar a herança.

Veja, acima foi dito que a herança é o ato de uma classe receber todos os métodos e atributos de outra classe, isso é feito por dois motivos
* 1° - A abstração do mundo real utilizando deste mecanismo se torna muito mais fácil, por isso é importante ter em mente que esta relação é definida como <code>é um</code>
* 2° - O reaproveitamento de código se torna mais simples neste caso.

Veja um exemplo:

A classe funcionário é uma pessoa, esta representação, pode ser feita da seguinte forma:

```java
public class Pessoa{

    private String nome;
    private int idade;

    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }

}

public class Funcionario{

    private String cargo;
    private Pessoa pessoa;

    public Funcionario(String cargo, String nome, int idade){  
        pessoa = new Pessoa(nome, idade);
       
        this.cargo = cargo;
    }
}
```
Perceba que não ficou natural está descrição, feita acima. No caso o funcionário <code>tem uma</code> pessoa, o que não é verdade, isso porque ele <code>é uma</code>.

Veja que sintaxe pode até estar correta, porém a semântica não. Vamos resolver este problema utilizando herança.

```java
public class Pessoa{

    private String nome;
    private int idade;

    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
}

public class Funcionario extends Pessoa{
    
    private String cargo;   

    public Funcionario(String nome, int idade, String cargo){
        super(nome, idade);
        this.cargo = cargo;        
    }
}
```
 
Agora a relação foi alterada, e a classe passou a ter a semântica correta, desta forma Funcionário, passou a <code>ser</code> uma pessoa, ao invês de ter.

Este tipo de relação permite que de uma classe mais genérica seja criada, para que classes mais especializadas sejam criadas.

* Super

Veja que na declaração do <code>construtor</code> de <code>Funcionario</code>, existe um <code>super</code>, este representa o construtor da classe ancestral.

E ele pode ser usado em outros pontos também, já que com ele é possível acessar todos os elementos da classe pai, que não tenham sido declarados como <code>private</code>

# Polimorfismo

Com a herança outro conceito de orientação a objetos, pode ser definido com mais facilidade, que é o polimorfismo.

De forma geral o polimorfismo significa multiplas formas, e na orientação a objetos, ele descreve um mesmo método que possui ações diferentes, ou seja, formas diferentes..

Como análogia ao mundo real, tem-se o carro. Onde todos tem os mesmos métodos, porém cada um com um funcionamento diferente.

Veja, um exemplo de polimorfismo

```java

public class Carro{

    private String marca;
    private String modelo;

    public Carro(String marca, String modelo){
        this.marca = marca;
        this.modelo = modelo;
    }

    public void andar(){
        System.out.println("Ando normalmente a 30 KM/h");
    }
    public void correr(){
        System.out.println("Vou normalmente a 100 KM/h");        
    }

}

public class Ferrari extends Carro{
    
    private String aroRodas;
    
    public Ferrari(String marca, String modelo, String aroRodas){
        super(marca, modelo);
        this.aroRodas = aroRodas;
    }

    // Aplicando o polimorfismo com a sobscrita de métodos

    @Override
    public void andar(){
        System.out.println("Normalmente a 100 KM/h");
    }
    @Override
    public void correr(){
        System.out.println("Normalmente a 300 KM/h");        
    }
}
```

Perceba que os mesmo métodos da classe Carro, tomaram uma forma diferente, uma aplicação diferente. Isso básicamente é polimorfismo

Vale deixar claro que, isto não é sobrecarga de métodos, isso porque aqui faço a sobrescrita, sem mudar assinatura. Caso altere a assinatura, estareí criando um novo método, e não sobscrevendo

# Classe abstrata

Como foi visto anteriormente, uma classe é a representação de um modelo em software, utilizada para criar objetos, porém, as vezes é necessário que haja modelos para a criação de outras classes, isso é possível com a utilização de classes abstratas.

Assim <code>classes abstratas</code> são classes moldes para outras classes.

As classes abstratas, por serem modelos para outras classes não podem ser instânciadas, ou seja, não podem ser criados objetos dessas classes. 

Desta forma para realizar a utilização das classes abstratas é necessário utilizar a herança. Com a utilização da classe abstrata os métodos filhos poderão (Opcionalmente) fazer polimorfismo e sobscrever os métodos herdados.

Seu tipo de relação continua sendo <code>é um</code>

Veja um exemplo:

```java

// Classe abstrata, não pode ser instânciada

public abstract class Pessoa {

	// Utilizando protected, pois desta forma as subclasses poderão ver
	// Os atributos
	protected String nome;
	protected int idade;
	protected double altura;

	public Pessoa(String nome, int idade, double altura) {

		this.nome = nome;
		this.idade = idade;
		this.altura = altura;

	}

	public void andar() {
		System.out.println("Ele saiu andando");
	}

}

public class Funcionario extends Pessoa {

	private int id;
	private String cargo;
	private Pessoa pessoa;

	// Para que haja a herança, deve-se utilizar o extends

	public Funcionario(String nome, int idade, double altura) {
		super(nome, idade, altura);
		// TODO Auto-generated constructor stub
	}

}
```
# Métodos abstratos

Além das classes, os métodos também podem ser declarados como abstratos, neste caso o método não terá corpo nenhum, e obrigatóriamente a classe que carrega métodos abstratos deve ser abstrata.

Com métodos abstratos as classes que herdarem a classe abstrata obrigatóriamente terá de implementar os métodos abstratos (Mesmo que seja para deixar eles em branco).

Veja um exemplo, deste tipo de útilização dos abstratos

```java

public abstract class Pessoa {

	protected String nome;
	protected int idade;
	protected double altura;

	public Pessoa(String nome, int idade, double altura) {

		this.nome = nome;
		this.idade = idade;
		this.altura = altura;

	}

	public abstract void andar();

}

public class Funcionario extends Pessoa {

	private int id;
	private String cargo;
	private Pessoa pessoa;

	public Funcionario(String nome, int idade, double altura) {
		super(nome, idade, altura);
	}

	@Override
	public void andar() {
		// TODO Auto-generated method stub

	}
}
```

Veja que a classe <code>Funcionario</code> ao herdar de Pessoa, deve de implementar o método abstrato. Veja que no exemplo anteríor demonstrado nas <code>classes abstratas</code> hávia um método e ele nem precisou ser alterado, isso por não ser abstrato.

# Interface

Até aqui foi possível perceber que, as classes abstratas, podem ou não carregar métodos abstratos, no caso de não carregarem este tipo de método, e mesmo assim ter métodos dentro de si, assumimos que esses são métodos genéricos, que podem ser utilizados por todos aqueles que irão herdar a classe.

Porém, há casos em que isso não é interessante, e no momento da herança, queremos que certo método seja subscrito. Para isso são utilizados as <code>interfaces</code>.

A <code>Interface</code> pode ser entendida como um trato firmado por uma classe, onde estamos dizendo que, tudo descrito na Interface será implementado na classe que assumir o trato.

Ela trabalha de forma parecida com as classes abstratas, porém, tem todos os seus métodos abstratos, o que torna obrigatório sua implementação, como vimos anteriormente.

Além dessa há algumas outras diferenças, e são elas:
* Todos os métodos dentro da interface são: <code>abstract, public</code>, isso implicitamente, assim ao criar um método dentro da interface, ele já recebe estes atributos, e ainda, são métodos sem corpo algum
* E os atributos declarados dentro da interface, são <code>public, static, final</code>

Veja um exemplo de implementação de uma interface

```java
public interface Casamento {
	
	String casamentoFoi = "Legal";

	public void casar(Pessoa p1, Pessoa p2);

	public void reclamar(Pessoa p1);

}
```
<!-- Separação -->
```java
public class Pessoa implements Casamento {

	protected String nome;
	protected int idade;
	protected double altura;

	public Pessoa(String nome, int idade, double altura) {

		this.nome = nome;
		this.idade = idade;
		this.altura = altura;

	}

	@Override
	public void casar(Pessoa p1, Pessoa p2) {
		System.out.println(p1.getNome() + " casou-se com " + p2.getNome());
	}

	@Override
	public void reclamar(Pessoa p1) {
		
		System.out.println(p1.getNome() + " está reclamando muito do que fez na vida..." + "\n" + 
				+ "Isso porque o casamento foi " + casamentoFoi);
		
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
}

```

Perceba que, após a definição da Interface, a classe Pessoa, implementou a interface, e foi obrigado a implementar os métodos.

OBS: As interfaces são muito usadas, principalmente para definir comportamentos ou especificações para a classe que a implementa.

# Coleções - List

<code>List</code> é uma interface que faz parte das coleções do Java. Essa é uma coleção ordenada que aceita elementos duplicados.

Vou tratar de duas implementações da interface List, o <code>Vector</code> e o <code>ArrayList</code>, que apesar de serem implementados da mesma interface, e possuirem os mesmos métodos, apresentam pequenas diferenças.

OBS: Todas as implementações desta interface possuem os principais métodos, são eles:
* add();
* remove();
* size();
* addAll();
* clear()

Vamos agora ao <code>ArrayList</code> e ao <code>Vector</code>

* ArrayList

O ArrayList, é a implementação de um Array que é dimensionado dinâmicamente, este que funciona da seguinte maneira. Quando enche o espaço disponível, ele cresce o espaço em <code>50%</code>, assim caso o espaço chegue ao fim e há 10 espaços, este irá crescer para 15.

Esta característica do ArrayList, faz ele ser muito custoso para o processador e para a memória, isso porque a cada vez que o espaço tem que ser acrescido, um novo ArrayList é criado na memória

* Vector

O Vector trabalha de forma muito parecida ao ArrayList, com a diferença, de que sua forma de realocação acaba sendo mais eficaz, isso porque quando estiver chegando em seu limite ele duplica, assim caso haja 10 espaços, ele irá <code>duplicar</code> para 20, e assim por diante.

Por fim é possível perceber que o Vector acaba tendo um pouco mais de desempenho do que o ArrayList, e ainda o Vector é thread-safe, o que permite ele trabalhar com thread.

Aqui vale deixar claro que, tudo irá depender da sua necessídade.