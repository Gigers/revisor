# POO - Fatec SJC (Revisão)

Este é um documento que contém a revisão de toda a matéria de POO, apresentada no primeiro bimestre do segundo semestre de 2017.

# Paradigma de programação

O paradigma de programação é uma forma de programar, suportada por linguagens que compartilham características comuns

# Orientação a objetos - Conceito

A orientação a objetos é uma forma de desenvolvimento de software que faz a modelagem do mundo real em software, com comportamentos, estruturas e coleções de objetos

* No caso dos comportamentos, é possível entender que a classe tem atributos e métodos, esses explicados a seguir

# Classes

As classes são as representações dos modelos reais em software, e são utilizadas como modelo para criar os <code>objetos</code>.

Nesta são carregadas os atributos e métodos, explicados abaixo.

# Atributos

Os atributos ou estados, são as características que uma classe apresenta, por exemplo, a classe Pessoa possui os atributos:
* Nome:
* Idade;
* Sexo;
* Cor;
* Peso;
* Velocidade que anda.

Na representação feita em Java, é necessário que o atributo tenha tipo e nome, veja:

```java
public class Pessoa{
    String nome; // Atributo nome do tipo String
    int idade; // Atributo idade do tipo inteiro
    String sexo; 
    String cor;
    double peso; // Atributo peso do tipo double
	double velocidadeDeCaminhada;
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
* Pensar.

Sua representação em Java, pode ser feita da seguinte forma:
```java
public void pensar(){
    
}
public void correr(boolean correndo){
    // Aqui vão as ações necessárias para que a ação ocorra
    // Podendo ser utilizando dos atributos
    // ou através da utilização de argumentos recebidos
	// Neste caso, os dois são utilizados

    if(correndo == true){
        if (peso < 90)
			velocidadeDeCaminhada = 120; // Km/h
		else if (peso > 90)
			velocidadeDeCaminhada = 80; // Km/h
    } else
        System.out.println("A pessoa continua andando");
}
```

É interessante notar que, em Java, para realizar a definição de um método é necessário seguir o seguinte padrão:

```java
	// modificador de acesso - retorno - nome (argumentos)
	public void metodo(){

	}
```

OBS: Este será um assunto melhor tratado no tópico de assinatura de método.

# Método construtor

O método construtor é um método que é chamado toda vez que um objeto da classe é criado, mesmo quando não é declarado explicitamente pelo programador, um construtor padrão é declarado e utilizado pelo Java.

Este, mesmo sendo um método, não tem retorno, e seu nome tem de ser exatamente o mesmo da classe, veja:

```java
public class Pessoa{

    String nome;
    int idade;

    public Pessoa(String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
}
```

Gerando este construtor é possível criar um objeto já com os atributos preenchidos, como é visto acima.

OBS: O <code>this</code> utilizado acima é uma auto referência, ou seja, quando está escrito <code>this.nome</code> significa que estou tratando do atributo <code>nome</code> da própria classe. 

# Objetos

As classes podem ser vistas como moldes, ou até mesmo ideias de um certo modelo do mundo real, como por exemplo a classe Pessoa, ou a classe Computador. Porém esses são apenas modelos, a 'materialização' deste é feita através dos objetos, que representam aquela ideia (Classe) criada.

Após instânciar o objeto é possível utilizar os métodos e atributos definidos na classe.

OBS: Os objetos são sempre por referência (Explicado mais a frente);

OBS: Instânciar é o ato de criar o objeto.

# Tipos

O Java sua forma de separar tipos, e é importante que esta seja entendida.

## Tipos primitivos

Tipos primitivos são os tipos básicos de dados, presente em qualquer linguagem de programação. Aqui não há referência, apenas valores, assim caso seja feito:

```java
int a = 123;
int b = a;
a = 312;
System.out.println("Valor de a: " + a  +"\nValor de b: " + b );
```
Saída:

Valor de a: 321

Valor de b: 123

Isto não ocorre nos tipos por referência, vistos no próximo tópico.

### Tipos primitivos do Java (Tipo por valor)
O Java possui 8 tipos primitivos, e são eles:

```java
	boolean
	short
	int 
	long
	float
	double
	char
	byte
```
Todos esses tipos são básicos e apresentam apenas valores (Nenhuma referência).

### Dica

Por que não usar o float ?

O float é uma classe que deixou de ser utilizada em Java, o padrão é utilizar o double, isso porque muitos problemas de precisão começaram a surgir. Assim sendo recomendado o uso do double.

## Tipos por referência

São ponteiros que apontam para o endereço de memória ao qual o objeto em questão está alocado, perceba que estes são ponteiros de memória, e são utilizados de forma implicita.

```java
Pessoa pessoaUm = new Pessoa();
Pessoa pessoaDois = new Pessoa();

pessoaUm.nome = "João";

pessoaDois = pessoaUm;

System.out.println("Pessoa 1: " + pessoaUm.nome + "\n" + "Pessoa 2: " + pessoaDois.nome);
```
```java
Out:  

Pessoa 1: João

Pessoa 2: João
``` 

```java

pessoaDois.nome = "Alfredo";

System.out.println("Pessoa 1: " + pessoaUm.nome + "\n" + "Pessoa 2: " + pessoaDois.nome);
```
```java
Out:

Pessoa 1: Alfredo

Pessoa 2: Alfredo
```

O que ocorre nos tipos por referência é que, são passados endereços de memória e não o valor que está alocado, assim quando dois objetos apontam para o mesmo endereço (Exemplo visto acima), os dois serão alterados caso o conteúdo de memória para onde ele apontam seja alterado.

## Primitivos vs Referência

A principal diferência em utilizar as referências ao invês dos primitivos é que no caso dos valores por referência, que são objetos, é que estes tem métodos, que podem ser utilizados para outras conversões, ou até mesmo para facilitar algum outro processo.

# Empacotamento

Esta é a técnica utilizada quando há a necessidade de tratar um tipo primitivo como um objeto (variáveis por referência). Esta técnica é feita utilizando as classes que representam os tipos primitivos.

```java
Integer
Double
Float
```

# Autoboxing

Até a versão 5 do Java, para realizar o empacotamento era necessário instânciar as classes equivalentes aos valores primitivos, porém, nas versões mais novas isso não é necessário, com a utilização do autoboxing, basta apenas utilizar a classe referente ao tipo primitivo e pronto, a conversão é feita. Veja:

```java
// Versões anteriores
int a = 123;
Integer b = new Integer(a); // Valor primitivo transformado em referência

// Versões mais recentes (Java > 1.5)
int a = 123;
Integer b = a; // Valor primitivo transformado em referência 
```

Veja que nas versões antigas do Java era necessário criar um objeto do tipo desejado. Nas versões mais novas isso deixou de ser necessário.

# Matrizes em java

As matrizes em java permitem alocação de tipos primitivos ou de tipos por referência. A matriz também é um objeto do tipo definido, isso porque ela se torna uma referência a outros objetos. 

Desta forma a matriz passa a ser um ponteiro para ponteiro.

## Matrizes multidimensionais

Em java pode existir matrizes com quantas dimensões forem necessárias.

# for e o for-each

Existem duas formas de loop <code>for</code>, o <code>for</code> simples, já visto em outras linguagens, como C e o <code>for-each</code>, que é a otimização do <code>for</code> simples, veja

Abaixo um exemplo de como o <code>for</code> é feito na linguagem C.
```c
int a[] = {1,2,3,4,5};

// for comum
// Que utiliza de um sentinela para passar pelos indices do array
for(int i = 0; i < sizeof(a) / sizeof(int); i++){
    printf("a[i]\n");
}
```
<!-- Separação -->

Agora veja um exemplo de como o mesmo <code>for</code> é feito na linguagem Java.

```java

int[] a = {1,2,3,4,5};

// for comum, parecido com o for em C, demonstrado acima
for(int i = 0; i < a.length; i++){
    System.out.println(a[i]);
}

```
OBS: É interessante notar que, o array é mesmo sendo do tipo primitivo tem um método (length), isso ocorre pois como dito no tópico de matrizes, ela é um objeto do tipo que foi definido, neste caso, um objeto de inteiros.

Perceba que o loop acima pode apresentar problemas, caso a coleção de dados tenha que ser toda percorrida, isso porque o programador pode fazer um incremento que não permita que todos os elementos sejam revisados, ou ainda, o limite pode ser menor que a quantidade de elementos, e no pior dos casos, erros podem ocorrer pois o limite de iterações definido passa a quantidade de elementos do array.

Veja abaixo o <code>for-each</code>, que é a estrutura melhorada

```java
int a[] = {1,2,3,4,5};

// for-earch (for melhorado)
// A variavel i em cada iteração tem o valor de uma posição de a
for(int i : a){
    System.out.println(i);
}
```

Também é possivel utilizar eles com dados criados pelo programador, por exemplo a classe Pessoa é um tipo de dado, e pode ser utilizada nos dois tipos de loop.

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

Em resumo:

A diferença entre estes dois formatos de for, é que o <code>for-each</code> obrigatóriamente irá percorrer toda a lista, isso porque o <code>for-each</code> é uma forma mais controlada de loop, tendo seu uso recomendado para percorrer toda uma coleção de dados.

Já o <code>for</code> normal, que utiliza sentinela, pode não percorrer ou não passar por todos os itens, isso porque pode variar de acordo com os limites postos e pela forma com que o contador é incrementado.

```java
// Veja um exemplo que pode trazer problemas
// Neste nem todos os elementos foram percorridos

int[] a = {1,2,3,4,5};

for(int i = 0; i < a.length; i += 2){
    System.out.println(a[i]);
}
``` 

```java
// Neste exemplo ira ocorrer uma exceção pois 
// o tamanho do contador que será passado ao index não existe no vetor
// gerando assim problemas

int arr[] = {1,2,3};

for(int i = 0; i < arr.length; i += 2)
	System.out.println(arr[i]);
```

# Modificadores de acesso

Os modificadores de acesso servem para definir qual serão as formas possíveis de acesso a atributos e métodos de algum objeto.

Em java há quatro modificadores de acesso: <code>public, protected, default, private</code>

Com excessão do <code>default</code> todos os demais devem ser declarados de forma explicita, veja:

```java
	protected String nome;
	private Integer idade;
	public double peso;
	int idade; // Modificador de acesso default 
```

## Acessos de cada um dos tipos

O tipo <code>default</code> permite acesso apenas pela classe que o criou e pelas classes presentes no mesmo pacote, por isso é coonhecido por <code>package-private</code>.

Já quando é declarado como <code>public</code>, todos de todos os lugares tem acesso ao atributo declarado desta forma.

O <code>protected</code> trabalha de forma similar ao <code>default</code>, porém as subclasses também passam a ter acesso aos atributos/métodos declarados com este modificador de acesso.

E por fim o <code>private</code> permite que apenas a classe que o criou tenha acesso.

Em resumo temos que:

<code>public</code> - Pode ser acessado de todos os lugares
* Classe: Tem acesso;
* Pacote: Tem acesso;
* Subclasse: Tem acesso;
* Todos: Tem acesso.

<code>default</code> - Pode ser acessado pela classe que o criou e pelas classes presentes no pacote
* Classe: Tem acesso;
* Pacote: Tem acesso;
* Subclasse: Não tem acesso.

<code>protected</code> - Permite que apenas classes que estão no mesmo pacote acessem a variável. A diferença desta para o <code>default</code> é que as subclasses também tem acesso.
* Classe: Tem acesso;
* Pacote: Tem acesso;
* Subclasse: Tem acesso (Mesmo que em pacotes diferentes).

<code>private</code> - Permite que apenas a classe a qual pertence o atributo/método tenha acesso.
* Classe: Tem acesso;
* Pacote: Não tem acesso;
* Subclasse: Não tem acesso;

OBS: No caso do private, caso seja necessário que algum atributo com este modificador de acesso seja acessado ou modificado por outrem, é necessário disponibilizar métodos para fazer isso. (Esses por convensão são os métodos gets e sets, vistos mais a frente).

<!-- Um dos pilares de OO -->
<!-- Verificar no livro do Rafael -->
# Encapsulamento

Antes de ver encapsulamento é interessante citar o que é encapsular, esta pode ser definida como, ocultar partes independentes da implementação, permitindo construir partes invisíveis ao mundo exterior.

O encapsulamento utiliza como base os modificadores de acesso, são eles que trazem os conceitos de formas de acesso, base para o encapsulamento.

O encapsulamento é a capacidade de ocultar dados dentro de modelos (Entende-se classes), permitindo assim que somente operações especializadas ou dedicadas manipulem os dados ocultos.

<!-- O encapsulamento de dados se remete, a ocultação dos dados de uma classe. Ao colocarmos o modificador de acesso <code>private</code> estamos fazendo o encapsulamento da informação, ou seja, a informação está oculta para acessos diretos, isso evita modificações sem uma ação especializada.  -->

Perceba que esta é uma das principais vantanges da orientação a objetos, já que através dessa é possível criar programas mais claros, com menos riscos de problemas ou erros.

Veja um exemplo, que é ilustrado por uma classe de uma conta bancária:

```java
public class ContaBancaria{
    
    private String nomeDoDono; // Encapsulada
    private double saldo; // Encapsulada

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

Com isso é possível perceber que esta ação de ocultar os dados e disponibilizar formas de acesso controlada, faz com que haja mais segurança e controle, além de oferecer mais facilidade, isso porque o oferecido a quem utiliza ira encapsular tratamento, regras e dificuldades.

# gets e sets

Com a aplicação dos modificadores de acesso, pode ocorrer de, certos atributos ficarem disponíveis apenas para a classe, mas, pode haver a necessidade de alteração e consulta a este atributo por parte de operações externas a classe

Neste caso será necessário criar métodos especificos para o acesso e modificação destes atributos, por convensão da comunidade Java esses métodos são os <code>gets</code> e <code>sets</code>

Os gets são métodos que retornam o valor de uma variável encapsulada. E os sets são métodos utilizados para atribuir/alterar o valor de alguma váriavel encapsulada, quando necessário.

Veja abaixo um exemplo:

```java

// Classe Pessoa

/*
No caso do uso do private, ele modifica a forma de visualização, 
permitindo apenas a classe que o cria de acessar, como visto anteriormente.
*/

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

/*
Porém apenas colocar os válores em certos casos não basta, 
assim sendo necessário visualiza-los, para isso são utilizados os gets
*/

public String getNome(){
    return nome;
}

public double getAltura(){
    return altura;
}
```

Ao utilizar os <code>gets</code> e <code>sets</code>, além de estar permitindo o acesso aos elementos, é possível fazer um acesso controlado ao atributo, podendo criar regras para que a modificação ou visualização sigam alguma regra.

Por exemplo:

Um banco só permite depositar até R$ 500.00 reais de uma vez. Veja como isso é feito com o set.

```java
public class ContaBancaria{

	private String nomeDoCliente;
	private double saldoBancario;

	public void setSaldo(double deposito){
		if (deposito > 500)
			System.out.println("Só é possível adicionar até R$ 500.00");
		else
			this.saldoBancario += deposito; 
	}
}
``` 

Perceba que através do set uma regra foi criada. Vale lembrar também que este exemplo se encaixa perfeitamente na situação vista no tópico de encapsulamento, isso porque é exatamente esse um dos benefícios tragos pelo encapsulamento, e ele pode ser visto aqui também. Perceba que para que está depositando o dinheiro não foi necessário saber como aplicar a regra de limite ou algo parecido.

OBS: É importante ressaltar que, não basta definir gets e sets e dizer que o código foi encapsulado, é necessário que estes façam o controle de como o método irá interagir com o atributo, caso contrário, criar get/set sem regras é a mesma coisa que manter público.

# Assinatura de métodos

Todo método possui uma assinatura. A assinatura define:

* Nome do método:
    * Aqui é definido o nome que aquele método irá receber.

* Retorno:
	* Define o tipo de dado que será retornado do método.

* Argumentos:
    * Neste ponto, serão definidos se o método irá ter argumentos de entrada ou não

OBS: Como citado, o método construtor não possui retorno em sua assinatura, assim a assinatura dele é especial contendo apenas, o nome do método e seus argumentos.

# Sobrecarga de método

Sobrecarregar métodos signica declarar diferentes métodos com o mesmo nome, porém com assinaturas diferentes, isto é, com argumentos em quantidades e tipos diferentes.

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

// Que também é diferente de

public void metodo(Integer args, String args2){
}
```

Veja que apenas o argumento mudou mas assim a JVM será capaz de escolher qual método será utilizado de acordo com a quantidade de argumentos e seus tipos.

Mudar apenas o tipo de retorno não ira caracterizar a sobrecarga, é necessário variar nos argumentos. 

# Modificadores de comportamento

Além dos modificadores <code>public, protected, default, private</code>, existem alguns outros modificadores, aqui vou tratar do <code>final</code> e do <code>static</code>.

Eles recebem este nome por modificar algum comportamento a quem está sendo atribuido, veja:

* final

O <code>final</code> no âmbito das váriaveis de instância (Entenda como os atributos), define constantes, assim após a primeira atribuição, não é mais possível fazer modificações. 

Perceba que o comportamento das váriaveis foi alterado, fazendo que elas aceitem apenas uma modificação, se tornando assim constante.

OBS: Essa única modificação citada acima, só pode ser feita quando a váriavel que está com o <code>final</code> foi criada sem atribuição, caso ela seja criada com atribuição, nenhuma outra será permitida.

No caso de métodos, ele define que o método não pode ser <code>sobrescrito</code> nas subclasses.

* static

O <code>static</code>, outro modificador de comportamento, quando utilizado nas váriaveis de instância, fazem com que o mesmo valor seja definido para todos os objetos, assim se houver:

```java
static String[] nomes;
```

a variável terá o mesmo valor para todos os objetos. Assim, caso um objeto faça uma modificação neste atributo, todos os demais objetos irão ver esta variável com o valor posto pelo outro objeto.

Ele também pode ser usado em métodos, porém neste caso, ele fará com que o método possa ser chamado sem a necessídade da criação de um objeto da classe que o carrega, veja:

```java

// Declarando classe com o método estático
public class Calculadora{
	public static Double soma(Double a, Double b){
		return a + b;
	}
}

// Neste exemplo a classe calculadora tem o método soma
// Porém criar um objeto apenas para utilizar este método pode não ser interessante
// Então este método irá passar a ser estático, para evitar o que ocorre abaixo

// Calculadora calculadora = new Calculadora();
// calculadora.soma(123,321);

// Quando o método passa a ser statico, a chamada deste método fica da seguinte forma

Calculadora.soma(123,312);

// Veja que não foi necessário instânciar a classe para chamar o método.
```

Recomenda-se o uso de <code>static</code> em método, quando ele independe de outras partes da classe (Atributos ou métodos);

Os modificadores de comportamento podem ser utilizados juntamente aos modificadores de acesso, veja um exemplo:

```java
// Variável 
private static String nome;


// Método
public static void corre(){
    System.out.println("Ele saiu correndo");
}
```

OBS: A ordem da adição dos elementos, aqui não faz diferença, ou seja, se a adição for feita da forma: 

```java
static public void corre();
```

irá funcionar da mesma forma que se colocar:

```java
public static void corre();
```

Porém deve-se ficar atento as convenções já definidas pela comunidade.

Nos casos vistos acima, o método será chamado diretamente pelo nome da classe, veja:

```java
public class Classe{

    public static void metodo(){
        System.out.println("Olha! Um método static");
    }

}
```

<!-- Separação -->

Para chamar este método basta usar:
```java
public static void main(String[] args){
    
    Classe.metodo();
}
```
```java
Out: Olha! Um método static
```java

# Herança

Em orientação a objetos, a herança pode ser entendida como uma classe que herda  funcionalidade e características de outra.
A relação disposta pela herança pode ser dita como <code>é um tipo de</code>.

Desta forma, é possível abstrair e entender o conceito de quando utilizar a herança.

Veja, acima foi dito que a herança é o ato de uma classe receber todos os métodos e atributos de outra classe, isso é feito por dois motivos
* 1° - A abstração do mundo real utilizando deste mecanismo se torna muito mais fácil, por isso é importante ter em mente que esta relação é definida como <code>é um tipo de</code>
* 2° - O reaproveitamento de código se torna mais simples neste caso.

Veja um exemplo:

A classe funcionário é uma (Entende-se é um tipo de) pessoa, veja o código abaixo, que tenta fazer essa abstração, sem utilizar herança.

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

Perceba que não ficou natural está descrição feita acima. No caso, pode-se entender que o funcionário <code>tem uma</code> pessoa, o que não é verdade, isso porque ele <code>é uma</code>(É um tipo de) pessoa.

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
 
Agora a relação foi alterada, e a classe passou a ter a semântica correta, desta forma <code>Funcionário</code>, passou a <code>ser</code> uma pessoa, ao invês de <code>ter</code>.

Este tipo de relação permite que uma classe mais genérica seja criada, para que classes mais especializadas sejam criadas a partir desta.

Para que isto fique claro, imagine uma empresa que faz cadeiras, seu modelo padrão é um formato de cadeira mais genérico possível (Com quatro pernas e encosto), desta forma, outras cadeiras poderão ser criadas a partir da genérica, utilizando suas características como base e criando suas próprias, gerando uma especialização (Entende-se uma cadeira para uso mais específico, como cadeira de praia).

* Super

Veja que na declaração do <code>construtor</code> de <code>Funcionario</code>, existe um <code>super</code>, este representa o construtor da classe ancestral.

E ele pode ser usado em outros pontos também, já que com ele é possível acessar todos os elementos da classe pai, que estejam disponíveis para as subclasses.

# Polimorfismo

Com a herança outro conceito de orientação a objetos, pode ser definido com mais facilidade, que é o polimorfismo.

De forma geral o polimorfismo significa multiplas formas, e na orientação a objetos, ele significa que o comportamento de um classe foi usado de várias formas.

Como análogia ao mundo real, tem-se o carro. Onde todos tem os mesmos métodos, porém cada um com um funcionamento diferente.

Veja, um exemplo de polimorfismo

```java
public class Carro{

    private String marca;
    private String modelo;
	private String aroRodas;

    public Carro(String marca, String modelo, String aroRodas){
        this.marca = marca;
        this.modelo = modelo;
		this.aroRodas = aroRodas;
    }

    public void andar(){
        System.out.println("Ando normalmente a 30 KM/h");
    }
    public void correr(){
        System.out.println("Vou normalmente a 100 KM/h");        
    }

}

public class Ferrari extends Carro{
    
    private Integer quantidadeAirBag;
    
    public Ferrari(String marca, String modelo, String aroRodas, Integer quantidadeAirBag){
        super(marca, modelo, aroRodas);
        this.quantidadeAirBag = quantidadeAirBag;
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

Perceba que os mesmo métodos da classe Carro, tomaram uma forma diferente, a forma de fazer se tornou diferente. Isso basicamente é polimorfismo.

Vale deixar claro que, isto não é sobrecarga de métodos, isso porque aqui faço a sobrescrita, sem mudar assinatura. Caso altere a assinatura, estareí criando um novo método, e não sobrescrevendo.

# Classe abstrata

Como foi visto anteriormente, uma classe é a representação de um modelo do mundo real em software, utilizada para criar objetos, porém, as vezes é necessário que haja modelos para a criação de outras classes, isso é possível com a utilização de classes abstratas.

Assim <code>classes abstratas</code> são classes moldes para outras classes.

As classes abstratas, por serem modelos para outras classes não podem ser instânciadas, ou seja, não podem ser criados objetos dessas classes. 

Desta forma para realizar a utilização das classes abstratas é necessário utilizar a herança. Com a utilização da classe abstrata os métodos filhos poderão (Opcionalmente) fazer polimorfismo e sobrescrever os métodos herdados.

Seu tipo de relação continua sendo <code>é um tipo de</code>.

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

	// Para que haja a herança, deve-se utilizar o extends

	public Funcionario(String nome, int idade, double altura) {
		super(nome, idade, altura);
		// TODO Auto-generated constructor stub
	}

	public void baterCartao(){
		// Ações
	}
}
```

Perceba que o método <code>andar</code>não foi sobrescrito, já que como dito, esta é uma operação opcional.

# Métodos abstratos

Além das classes, os métodos também podem ser declarados como abstratos, neste caso o método não terá corpo nenhum, e obrigatóriamente a classe que carrega métodos abstratos deve ser abstrata.

Com métodos abstratos as classes que herdarem a classe abstrata obrigatóriamente terá de implementar (Sobrescrever) os métodos abstratos (Mesmo que seja para deixar eles em branco).

Veja um exemplo, deste tipo de utilização dos métodos abstratos

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
		// Ações feitas para andar

	}
}
```
Veja que a classe <code>Funcionario</code> ao herdar de Pessoa, deve de implementar o método abstrato. Veja que no exemplo anterior demonstrado, nas <code>classes abstratas</code> hávia um método e ele nem precisou ser alterado, isso por não ser abstrato.

# Interface

Até aqui foi possível perceber que, as classes abstratas, podem ou não carregar métodos abstratos, no caso de não carregarem este tipo de método, e mesmo assim ter métodos dentro de si, assumimos que esses são métodos genéricos, que podem ser utilizados por todos aqueles que irão herdar a classe.

Porém, há casos em que isso não é interessante, e no momento da herança, queremos que certo método seja sobrescrito. Para isso são utilizados as <code>interfaces</code>.

A <code>Interface</code> pode ser entendida como um contrato ou especificação, firmado por uma classe, onde estamos dizendo que, tudo descrito na Interface será implementado na classe que assumir o trato.

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

Perceba que, após a definição da Interface, a classe Pessoa, implementou a interface, e foi obrigado a implementar os métodos. Com isso a classe que implementa pode definir o comportamento que melhor se adequa.

OBS: As interfaces são muito usadas, principalmente para definir comportamentos ou especificações para a classe que a implementa.


# Threads
Os primeiros programas a serem executados, eram feitos utilizando um único processo, assim o programa era executado de forma sequêncial, porém com o crescimento da quantidade de núcleos e consequentemente do poder computacional, tornou-se possível criar aplicações concorrentes, ou seja, aplicações que se dividem em vários subprocessos, esses que são executados em paralelo ao processo principal. Tornando assim o processo em diversos casos mais rápido.

Em Java para realizar a criação de thread, existe duas formas:

## Herança de Thread
Esta é uma forma bastante simples de utilizar as thread, porém não é muito recomendada, pois, ao herdar, como visto no tópico de herança, várias caracteristicas são herdadas, o que não é necessário.

## Implementando Runnable
A implementação da interface <code>Runnable</code> é a maneira recomendada para aplicar as Threads, isso porque nela é trago apenas o necessário (Método run()), este que será sobrescrito, gerando polimorfismo.

## Métodos das thread

* setPriority(int prioridade): Define a prioridade da thread (Esta que vai de 1 a 10, sendo o padrão 5);
* setName(String nome): Define um nome para a thread;
* sleep(int X): Pausa a thread por um intervalo X de tempo

# Tipos genéricas

Antes de falarmos sobre as coleções em Java é interessante entender o que são os tipos genéricos. As classes genéricas surgiram para solucionar problemas relacionados a forma de armazenamento e utilização de grupos de dados de diversos tipos, isso porque, ao trabalhar com estes dados, erros ocorriam, onde um método aceitava <code>object</code> o que o tornava muito genérico, permitindo que qualquer objeto fosse aceito no método, e nem sempre o método aceito tinha as caracteristicas necessárias para utilizar as estruturas do método.

Veja como este problema pode ser representado:

```java
public FruitSalad makeSalad(Basket b){
	FruitSalad fs = new FruitSalad();
	while (b.hasItems()){
		Fruit f = (Fruit) b.nextItem();
		f.chop();
		fs.add(f);
	}
	return fs;
}
```
O exemplo acima foi retirado de uma aula do Eduardo Guerra.

O método acima pode parecer não ter nenhum problema, porém caso algum programador insira um objeto do tipo <code>Basket</code> e que não possua objetos do tipo <code>Fruit</code> erros irão ocorrem em tempo de execução.

Outro grande problema que ocorria bastante era quando coleções do tipo <code>Object</code> eram definidas, essa como todos sabem é a classe herdada por todos os objetos em Java, isso fazia que uma coleção deixasse qualquer objeto ser inserido, o que no momento de realizar alguma operação causava problemas, sendo necessários usos de cast e outros.

Para resolver estes problemas surgiram os genéricos, estes que tem como principal objetivo "definir coleções de forma que estas contenham somente determinado tipo de objeto". Santos, Rafael.

Com isso podemos criar coleções, classes e interfaces que são do tipo <code><E></code> (Tipo genérico). Este tipo, aqui dito como <code><E></code>, será definido somente no momento da declaração, ou seja, a classe/método/interface é criada sem saber qual tipo será recebido (Criada utilizando um tipo genérico).

Veja o exemplo:

```java
public class Agenda<E>{
	public void add(E e){
		// Ações
	}

	public E get(){
		// Ações
	}
}
```
Veja que a classe é criada de forma genérica, sem ter nenhum tipo vinculado. E com isso é possível evitar os erros listados acima.

Ao declarar a classe vista acima é necessário especificar o tipo, veja:

```java
public static void main(String[] args){
	Agenda<Contato> contatos = new Agenda<>();

	// Com a específicação do tipo os métodos passar a aceitar o tipo especificado

	// add(Contato e)

	// get(); return Contato
}
```

Para realizar a leitura de uma classe que foi implementada com algum tipo genérico, é interessante utilizar a relação <code>é de alguma coisa</code>. Mesmo que de maneira informal, ao utilizar fica mais fácil vincular com o tipo genérico. Veja que pode ser dito que, a agenda <code>é de alguma coisa</code>.

É interessante notar que, o entendimento dos <code>Generics</code> são importantes antes de entrar nas coleções, isso porque, elas foram as que mais se beneficiaram com esta adição. Isso porque os problemas citados acima de tipos <code>Object</code> foram resolvidos, trazendo mais qualidade e robustez a API de Collections. 

# Coleções

O Java possui em sua API uma quantidade consideravel de coleções e estruturas de dados para armazenar tipos e objetos.

Essas são estruturas utilizadas para armazenar vários outros objetos, sendo todas de tamanho dinâmico. Para disponibilizar estas estruturas o Java utiliza da interface <code>Collection</code>, e dela as outras interfaces e implementações são providas.

Como todas as interfaces de coleções herdam de <code>Collection</code>, todas apresentam os mesmos métodos básicos (Mesmo que a implementação interna seja modificada), e são eles:

* Adicionar elemento;
* Remover elemento;
* Acessar elementos;
* Pesquisar elementos;
* Percorrer elementos;
* Verificar quantidade de elementos.

## Coleções VS Array

Deve-se utilizar os arrays no lugar das coleções quando:

* O tamanho máximo de elementos já foi definido;
* Requer mais desempenho;
* Não haverá necessidade de alteração na estrutura.

## List - Interface (Collection)

<code>List</code> é uma interface que faz parte das coleções do Java. Essa é uma lista de objetos sequêncial que aceita elementos duplicados.

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

Outro ponto interessante sobre o ArrayList é que ele é muito rápido em pesquisas, e que não é Thread-Safe.

* Vector

O Vector trabalha de forma muito parecida ao ArrayList, com a diferença, de que sua forma de realocação acaba sendo mais eficaz, isso porque quando estiver chegando em seu limite ele duplica, assim caso haja 10 espaços, ele irá <code>duplicar</code> para 20, e assim por diante.

Por fim é possível perceber que o Vector acaba tendo um pouco mais de desempenho do que o ArrayList, e ainda o Vector é thread-safe, o que permite ele trabalhar com thread, e este é um ponto que pode tornar o Vector um pouco mais lento que o ArrayList.

Aqui vale deixar claro que, tudo irá depender da sua necessídade.

## Set - Interface (Collection)

<code>Set</code> que é um conjunto de objetos que não é sequêncial, onde não pode haver elementos repetidos.

Como esta é a interface que faz a representação de um conjunto, a noção de ordem na inserção dos elementos não existe, isso justifica o ponto citado acima que diz que, as implementações da interface <code>Set</code> não tem uma ordem.

Ao adicionar um elemento repetido, o elemento equivalente que estava presente na coleção dará lugar ao novo objeto.

* HashSet
	* Os elementos não ficam ordenados;
* TreeSet
	* Os elementos ficarão ordenados independe da ordem que forem adicionados.

## Queue - Interface (Collection)

<code>Queue</code> oferece operações de filas (FIFO), ou filas com prioridades.

## Map - Interface (Não pertence a Collection)

Mesmo que a interface <code>Map</code> não extenda a interface de <code>Collection</code> é considerado que ela faz parte das <code>Collections</code> do Java.

<code>Map</code> representa um grupo de objetos que possui um identificador/chave associado a cada objeto dentro desta coleção.

Ao criar o Map, ele possui dois tipos genéricos <code>Map<K, V></code>, este K e V são tipos genéricos. Os Map podem ser comparados aos Arrays no sentido de haver um índice, porém, o tipo do indice diferente do array que era apenas numérico, poderá ser definido pelo programador.

Caso haja chave repetida, o elemento novo será posto no lugar do antigo (Presente no Map)

* HashMap
	* Não sincronizado e não ordenado
* HashTable
	* igual ao HashMap, porém é sincronizado
* TreeMap
	* Não sincroniza, mas é ordenado

# Comparação de objetos - compareTo e equals

Executar ações para realizar a ordenação de objetos é algo comum, e a forma de ordenação de vários tipos já foram definidos, como por exemplo, os números que se ordenam do menor para o maior.

Porém isso não ocorre automaticamente nos objetos, primeiro que, como citado no inicio, ao criarmos um objeto, estamos criando uma estrutura de dados nova, e assim o Java não consegue compreender qual critério ele deve utilizar para fazer a comparação, e definir qual será a ordem.

Para fazer isso em Java é necessário a utiliação da Interface Comparable.

Abaixo, será feito um exemplo de como comparar e definir a ordem dos elementos de um ArrayList.

```java
public class Pessoa implements Comparable<Pessoa>{

    private String nome;
    private int idade;

    public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

    /*
        Após implementar a interface Comparable
        é necessário descrever o método compareTo().
        Este passo é feito abaixo
    */

	@Override
    public int compareTo(Pessoa p){
        return nome.compareTo(p.getNome());
    }

    /*
        Perceba que, implemento o método
        que tem retorno int
        isso porque ao fazer a comparação com nome.CompareTo
        Estou retornando o seguinte:

        Quando nome < p.getNome(); return  -1 (Ou qualquer valor negativo)
        Quando nome > p.getNome(); return 1 (Ou qualquer valor positivo)
        Quando nome == p.getNome(); return 0
    */
}
```
<!-- Separação -->

```java
import java.util.List;
import java.util.Vector;
import java.util.Collections;

public class Start {

	public static void main(String[] args) {

		List<Pessoa> pessoas = new Vector<>();

		pessoas.add(new Pessoa("Felipe", 12));
		pessoas.add(new Pessoa("Pedro", 23));
		pessoas.add(new Pessoa("Ana", 18));

		Collections.sort(pessoas);

		for (Pessoa pessoa : pessoas) {
			System.out.println(pessoa.getNome());
		}
	}
}
```

Out: 
```java
Ana

Felipe

Pedro

```

Veja que a classe que será comparada teve de implementar a Interface Comparable, e,  a classe onde estava o método main, teve de importar a biblioteca <code>java.util.Collections</code>, isso para que fosse possível utilizar o <code>Collections.sort()</code>.

Aqui fiz a implementação do sort pelo nome, mas poderia ser também pela idade, veja:

```java
public class Pessoa implements Comparable<Pessoa> {

	private String nome;
	private int idade;

	public Pessoa(String nome, int idade) {
		this.nome = nome;
		this.idade = idade;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

	@Override
	public int compareTo(Pessoa p) {

		if(idade > p.getIdade()) {
			return 1;
		} else if(idade < p.getIdade()) {
			return -1;
		} else {
			return 0;
		}

	}
}
```
Da forma vista acima, a ordenação será feita da menor para a maior idade.

OBS: A diferença entre <code>equals()</code> e <code>compareTo()</code> é que o <code>equals()</code> retorna um boolean, informando se o valor é ou não igual, e o <code>compareTo()</code>, retorna valores inteiros, que dizem se o valor é menor, maior ou igual. 

Da mesma forma que o <code>compareTo</code> o <code>equals</code> também deve ser sobrescrito (No caso de classes) pelo programador para fazer a comparação de um atributo específico, veja:

```java
public class Iguais {

	private String igualdade;
	private String informacao;

	public Iguais(String igualdade, String informacao) {
		this.igualdade = igualdade;
		this.informacao = informacao;
	}

	public String getIgualdade() {
		return igualdade;
	}

	public String getInformacao() {
		return informacao;
	}

	public void setInformacao(String informacao) {
		this.informacao = informacao;
	}

	public void setIgualdade(String igualdade) {
		this.igualdade = igualdade;
	}

	@Override
	public boolean equals(Object obj) {

		boolean igual = false;

		Iguais i = (Iguais) obj;
		if (this.igualdade.equals(i.getIgualdade())) {
			igual = true;
		}

		return igual;

	}

}
```

Perceba que, como argumento estou recebendo um elemento <code>Object</code>, isso ocorre porque estou sobrescrevendo um método da classe <code>Object</code> a qual todos herdam, caso eu mude este argumento não estarei sobrescrevendo e sim sobrecarregando o método.

Para que o item fique com o mesmo tipo de dados, faço um <code>cast</code>, e em seguida faço as comparações.

<!--  -->

```java
public class Main {

	public static void main(String[] args) {
		
		Iguais igual = new Iguais("Dado1", "Teste");
		Iguais igual2 = new Iguais("Dado1", "Teste2");
		
		System.out.println(igual.equals(igual2));	
	}
}
```

No caso do <code>equals</code>, não é necessário a implementação de nenhuma Interface.

# Serialização

Com o aumento da quantidade de funcionalidades de um programa, passa ser interessante que haja persistência dos dados que estão sendo processados.

Aqui irei demonstrar uma das formas de fazer a persistência, que é com a utilização de um recurso do Java, chamado de <code>Serialização</code>

A serialização é a técnica utilizada para salver o estado atual dos objetos em arquivos binários, sendo assim este estado poderá ser recuperado posteriormente, ficando da mesma forma que estava quando foi serializado.

Para realizar a serialização, é necessário implementar a Interface <code>Serializable</code>.

Um ponto importante sobre a serialização é que, caso haja algum elemento que não precise, ou não possa ser serializado, então o modificador de comportamento <code>transient</code>, deve ser atribuido para o atributo em questão, veja:

```java
public class Pessoa implements Serializable{

    // Atributo que não será serializado
    private transient List<Pessoa> pessoas = new ArrayList<>();
}
```
Na serialização podem haver erros com as verões dos arquivos serializados, assim fique atento as verões.

OBS: Se necessário serializar objetos, que tenham como variáveis de instância outros objetos, então as classes dos objetos usados como variáveis também devem implementar a interface <code>Serializable</code>.

# Exceções

Durante a execução de um programa muitos erros podem ocorrer, para tratar isso, existem as exeções. Essas são formas de manipular problemas e de dizer ao programa o que fazer quando encontrar certos tipos de erros.

Todas as exeções são heranças da classe <code>Exception</code>.

Para capturar a exeção e aplicar o tratamento correto é possível utilizar o <code>Try-Catch</code>.

Um exemplo de utilização de Try-Catch, pode ser feito com a serialização, veja:

```java

// Classe que será serializada

import java.io.Serializable;

@SuppressWarnings("serial")
public class Pessoa implements Serializable {

	
	private String nome;
	private int idade;

	public Pessoa(String nome, int idade) {
		this.nome = nome;
		this.idade = idade;
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getIdade() {
		return idade;
	}

	public void setIdade(int idade) {
		this.idade = idade;
	}

}
```
<!-- Separação  -->
```java
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

public class Start {

	public static void main(String[] args) {

		// Objeto que será serializado
		List<Pessoa> pessoas = new ArrayList<>();

		pessoas.add(new Pessoa("Felipe", 21));
		pessoas.add(new Pessoa("Maria", 19));
		pessoas.add(new Pessoa("Pedrão", 23));

		// Colocando o try-catch para tentar salvar o arquivo serializado

		try {

			FileOutputStream fos = new FileOutputStream("Binario.bin");
			ObjectOutputStream oos = new ObjectOutputStream(fos);

			oos.writeObject(pessoas);

			// Fecha o stream
			oos.close();
			fos.close();

		} catch (Exception e) {
			System.out.println(e.getMessage());
		}

	}

}
```

Veja que ele irá tentar salvar e caso não consiga, será exibido a mensagem com o erro. Este <code>Exception</code> poderia ser mais específico, já que neste utilizei direto a classe, mas poderia ter utilizado o <code>IOException</code>, que é mais específico para erros de leitura/gravação.

OBS: Um único try pode ter vários catchs.

# Escrita em arquivos

Também é possível escrever em arquivos de texto, este é um processo semelhante a escrita em arquivos de texto, porém aqui os dados não são transformados em binários, e não há a necessidade por parte das classes implementando Interfaces. 

Isso ocorre pela simplicidade com a qual é feita a leitura e escrita desdes dados, aqui não é possível salvar o objeto todo, mas sim o conteúdo de cada uma de seus atributos.

Para criar arquivos é possível fazer

```java
public class Dados {

	private String dados;
	private String dados2;

	public String getDados() {
		return dados;
	}

	public void setDados(String dados) {
		this.dados = dados;
	}

	public String getDados2() {
		return dados2;
	}

	public void setDados2(String dados2) {
		this.dados2 = dados2;
	}

}
```

<!--  -->

```java
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class Start {

	public static void main(String[] args) {

		Dados data = new Dados();

		data.setDados("Um dado");
		data.setDados2("Dois dados");

		try {
			File file = new File("./Dados.txt");
			FileWriter fw = new FileWriter(file);

			fw.write(data.getDados());
			fw.write("\n");
			fw.write(data.getDados2());

			fw.close();
		} catch (IOException e) {
			System.out.println(e.getMessage());
		}

	}

}
```
Veja que este também precisou utilizar do try-catch, isso porque podem haver erros, e para poder trata-los, foi utilizado o try-catch.

No lugar do <code>FileWriter</code> é possível utilizar o <code>BufferedWriter</code>, que acaba tendo um pouco mais de desempenho que o <code>FileWriter</code> normal.

E da mesma forma que a escrita foi feita a leitura também pode ser realizada. Seguindo a mesma hierarquia.

# Stringbuilder & Stringbuffer

Quando realizamos operações de concatenação com <code>+=</code> ou com <code>+</code>, não estamos realmente concatenando os valores.
 O que estamos fazendo é na verdade criar um novo objeto na memória, e o anterior fica perdido na memória até que o coletor de lixo do Java faça sua remoção, isso em softwares muito grandes pode apresentar problemas de velocidade.

Isso ocorre porque Strings são imutáveis. Para resolver este problema existem duas classes, o StringBuilder e o StringBuffer.

O processo de aplicação dos dois é bem parecido, a diferença entre os dois é que um suporta sincronismo, este no caso é o StringBuffer, por isso o StringBuilder é um pouco mais rápido.

A utilização destas classes é recomendada quando há muitas concatenações no programa.

Veja o exemplo de uma implementação:

```java
public class Builder {

	public static void main(String[] args) {

		StringBuilder sb = new StringBuilder();
		
		sb.append("Teste ");
		sb.append("de ");
		sb.append("Software");
		
		System.out.println(sb.toString());

	}

}
```

Vale lembrar que a mesma implementação feita para este item, para o <code>StringBuffer</code>