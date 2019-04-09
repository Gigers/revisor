# JavaSpring

O Spring é um framework Java criado com o objetivo de facilitar o desenvolvimento de aplicações, explorando, para isso, os conceitos de **Inversão de Controle** e **Injeção de Dependências**. Dessa forma, ao adotá-lo, temos à nossa disposição uma tecnologia que nos fornece não apenas recursos necessários à grande parte das aplicações, como módulos para persistência de dados, integração, segurança, testes, desenvolvimento web, como também um conceito a seguir que nos permite criar soluções menos acopladas, mais coesas e, consequentemente, mais fáceis de compreender e manter.

### Injeção de Dependencias

A injeção de dependência (Dependency Injection – DI) é um padrão de projeto que permite especificar a dependência externamente. A implementação a ser utilizada pode ser facilmente alterada, sem necessidade de reescrever a lógica de Placa.

```
A injeção de dependência pode ser de 3 tipos: metodos setter, constructor e na interface java.
```

**Para mais informações e melhor entendimento, consulte o site: **

https://blog.algaworks.com/injecao-de-dependencias-com-spring/

### Inversão de controle

A inversão de controle é um padrão de projeto onde a sequência (controle) de chamadas dos métodos não é determinada diretamente pelo programador. Este controle é delegado a uma infraestrutura de software, muitas vezes chamada de container, ou a qualquer outro componente que possa tomar controle sobre a execução.

```
Basicamente, ao invés do código chamar o framework, o framework chama o código;

Injeção de dependências é um tipo de inversão de controle;

Um framework controla as instâncias de classes, permitindo uma programação para interfaces, sem dependências com implementações;

```
**Para mais informações e melhor entendimento, consulte o site: **

http://www.linhadecodigo.com.br/artigo/3418/inversao-de-controle-ioc-e-injecao-de-dependencia-di-diferencas.aspx

### Primeira aplicação com Spring

+ Escolha uma pasta para o projeto

+ No prompt de comando digite:

```
mvn archetype:generate -DgroupId=br.gov.sp.fatec -DartifactId=springExample1 -
DarchetypeArtifactId=maven-archetype-quickstart -DinteractiveMode=false
```
Entre na pasta criada (springExample1) edite o arquivo pom.xml,incluindo as dependências básicas do Spring:

```
<properties>
  <org.springframework.version>4.1.4.RELEASE</org.springframework.version>
</properties>
<dependencies>
<!-- Outras dependencias -->
<!-- Spring -->
<dependency>
<groupId>org.springframework</groupId>
<artifactId>spring-context</artifactId>
<version>${org.springframework.version}</version>
</dependency>
</dependencies>

```
Baixe as dependências e compile o projeto:

```
mvn clean package
```
Logo em seguida, importe o projeto como projeto Maven:
• File > Import... > Maven > Existing Maven Projects.

Crie um arquivo applicationContext.xml em src\main\resources:

```
<?xml version="1.0" encoding="UTF-8"?>
<beans xmlns="http://www.springframework.org/schema/beans"
xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
xsi:schemaLocation="http://www.springframework.org/schema/beans
http://www.springframework.org/schema/beans/spring-beans-3.1.xsd">
<bean id="placa"
class="br.gov.sp.fatec.Placa">
<property name="mensagem" ref="mensagem"/>
</bean>
<bean id="mensagem"
class="br.gov.sp.fatec.HelloWorld">
<property name="nome" value="Newcomer"/>
</bean>
</beans>
```
**Crie a pasta resource como "source folder" no Eclipse!**

Crie o arquivo para uma **interface** chamada Mensagem:

```
package br.gov.sp.fatec;
public interface Mensagem {
/**
* Uma mensagem
* @return Uma mensagem
*/
public String getMensagem();
}
```
Crie a **classe** HelloWorld:

```
package br.gov.sp.fatec;

public class HelloWorld implements Mensagem {

private String nome;

public HelloWorld() {
}

public void setNome(String nome) {
this.nome = nome;
}

@Override
public String getMensagem() {
return "Hello World! Hello " + nome + "!";
  }
}
```
Crie a **classe** Placa:

```
package br.gov.sp.fatec;

public class Placa {

private Mensagem mensagem;

public Placa() {
}

public String ler() {
return "[ <" + mensagem.getMensagem() + "> ]";
}

public void setMensagem(Mensagem mensagem) {
this.mensagem = mensagem;
  }
}
```
Edite a classe principal App:

```
package br.gov.sp.fatec;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App{

public static void main(String[] args) {

//O seguinte trecho é responsável por ler o arquivo XML e gerar os beans de acordo com o configurado:
ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");

//Para se utilizar um bean, basta solicitá-lo pelo nome:
Placa obj = (Placa) context.getBean("placa");

System.out.println(obj.ler());
context.close();
  }
}
```
Após arrumar a classe principal basta executar o projeto.

Por padrão todo bean definido possui o escopo do tipo **singleton**, ou seja, todos que requisitam o bean recebem a mesma instância.

**Qualquer alteração em um bean será vista por todos que o utilizarem!**

Vamos agora criar um bean com escopo diferente (prototype) que cria uma nova instância a cada requisição e ver a diferença.
acrescente o seguinte bean ao arquivo applicationContext.xml:

```
<bean id="mensagem2"
  class="br.gov.sp.fatec.HelloWorld" scope="prototype" >
  <property name="nome" value="Ze Ninguem"/>
</bean>
```
Altere a classe principal para:

```
public static void main(String[] args) {
ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");

Placa obj = (Placa) context.getBean("placa");
System.out.println(obj.ler());

HelloWorld msg1 = (HelloWorld) context.getBean("mensagem");
System.out.println(msg1.getMensagem());
msg1.setNome("Teste");

HelloWorld msg2 = (HelloWorld) context.getBean("mensagem");
System.out.println(msg2.getMensagem());

HelloWorld msg3 = (HelloWorld) context.getBean("mensagem2");
System.out.println(msg3.getMensagem());
msg3.setNome("Teste");

HelloWorld msg4 = (HelloWorld) context.getBean("mensagem2");
System.out.println(msg4.getMensagem());

context.close();
}
```
A saída do programa será:

```
[ <Hello World! Hello Newcomer!> ]
Hello World! Hello Newcomer!
Hello World! Hello Teste!
Hello World! Hello Ze Ninguem!
Hello World! Hello Ze Ninguem!
```
Isso ocorre porque msg1 e msg2 na verdade referenciam a mesma instância da classe HelloWorld, enquanto msg3 e msg4 possuem instâncias diferentes. Tudo isso por conta do escopo definido!

### Spring com anotações

Para habilitar anotações é preciso incluir a seguinte tag no arquivo de configuração do Spring (applicationContext.xml).

```
<context:component-scan base-package="br.gov.sp.fatec"/>
```
**No parâmetro "base-package" é preciso configurar o package a partir do qual se encontram as classes com anotações aceitas pelo Spring. Esse parâmetro é opcional e, caso não seja informado, todas as classes do projeto serão verificadas**

Abaixo um exemplo de classe anotada:

```
@Component("placaMensagem")
public class Placa {

@Autowired
@Qualifier("mensagem1")
private Mensagem mensagem;
```
A anotação **@Component** indica ao Spring que um bean deve ser criado para a classe anotada (no exemplo, Placa), opcionalmente, pode ser informado um id para o bean criado (no exemplo, placaMensagem). A desvantagem de anotar a classe diretamente reside no fato de
que apenas um bean pode ser criado dessa forma.

A anotação **@Autowired** vale somente para o atributo **"mensagem"** e serve para carregá-lo com um bean do tipo Mensagem.
A anotação opcional **@Qualifier** identifica qual o id do bean a utilizar.

### Spring sem XML

É possível substituir o arquivo de configuração XML (applicationContext.xml) por uma classe anotada:

```
@Configuration
@ComponentScan(value={"br.gov.sp.fatec"})
public class DIConfig {

@Bean(name={"mensagem1"}) //Nao e necessario especificar um nome
public Mensagem getMensagem() {
HelloWorld mensagem = new HelloWorld();
mensagem.setNome("Newcomer");
return mensagem;
}

@Bean(name={"mensagem2"}) //Nao e necessario especificar um nome
@Scope("prototype")
public Mensagem getMensagem2() {
HelloWorld mensagem = new HelloWorld();
mensagem.setNome("Ze Ninguem");
return mensagem;
  }
}
```
A anotação **@Configuration** indica que a classe possui configurações do Spring. Habilita o uso das anotações **@Bean**, **@Scope** e **@ComponentScan**. A anotação **@Bean** é utilizada para definir um bean, de forma similar à tag XML "bean"


+ Ao contrário da configuração XML, é preciso instanciar a classe desejada e "setar" seus atributos manualmente Opcionalmente, pode-se nomear o bean

+ A anotação @Bean permite a criação de inúmeros beans de uma mesma classe (o que não seria possível com a anotação de classe      @Component)
 
+ A anotação **@Scope** é utilizada para definir o escopo de um bean, de forma similar ao parâmetro "scope" da tag XML "bean"

+ A anotação **@ComponentScan** é similar à tag XML "component-scan". No parâmetro "value" é preciso configurar o package a partir do qual se encontram as classes com anotações aceitas pelo Spring. Esse parâmetro é opcional e, caso não seja informado, todas as classes do projeto serão verificadas.

Para utilizar a classe de configuração em vez do arquivo XML é preciso alterar o programa principal de:

```
ClassPathXmlApplicationContext context =
new ClassPathXmlApplicationContext("applicationContext.xml");
```
para

```
AnnotationConfigApplicationContext context =
new AnnotationConfigApplicationContext(DIConfig.class);
```
A classe responsável por interpretar uma classe é diferente da utilizada para interpretar um arquivo XML, mas a utilização é idêntica.


# Spring Boot

O Spring Boot é um projeto que visa facilitar o desenvolvimento, configuração e publicação de aplicações que façam uso dos frameworks da família Spring.

>Convenção sobre configuração – O Spring Boot trabalha com configurações padrões. Apenas particularidades do projeto precisam ser configuradas

>Starters – Dependências que incluem diversas dependências. Exemplo: Basta incluir uma única dependência "spring-boot-starterdata-jpa" em vez de "spring-data-jpa", "spring-orm", "hibernatecore", etc

>Servidor web Java embutido – Não é necessário instalar um servidor em separado e realizar o deploy da aplicação Java desenvolvida. Ao executar a aplicação, o Spring Boot cuida de subir um servidor Tomcat (padrão) ou Jetty

>Spring Initializr – É possível montar um projeto Spring Boot para Maven ou Gradle pelo site https://start.spring.io/

>Sem XML – O Spring Boot aboliu o uso de arquivos XML para configuração

Para executar a aplicação Spring Boot a partir do Maven basta utilizar o comando: **mvn spring-boot:run**

>Caso a aplicação seja web, o servidor configurado (Tomcat por padrão) será iniciado e aplicação responderá na URL e porta configurados

O Spring Boot utiliza um arquivo de configuração "application.properties", algumas dependências extras devem ser especificadas **(conector do mysql por exemplo).**


# Spring data JPA

O Spring Data JPA é um framework da família Spring que nos auxilia na tarefa de persistir dados com JPA, eliminando a necessidade de escrever código para persistência de dados ou realização de consultas.
Para configurar o spring data JPA, é nescessario incluir algumas dependencias no arquivo **pom.xml**:

>spring-boot-starter-parent – Dependência base do Spring Boot;

>spring-boot-starter-data-jpa – Starter do Spring Data JPA

É nescessario incluir algumas dependencias no arquivo **application.properties** no projeto:

```
## Spring DATASOURCE (DataSourceAutoConfiguration & DataSourceProperties)
spring.datasource.url = jdbc:mysql://localhost:3306/estoque?useTimezone=true&serverTimezone=UTC
spring.datasource.username = root
spring.datasource.password = adm1n
```
### Repository

Um repositório realiza as operações de persistência de dados sobre uma classe persistida associada, assim como um DAO, mas também pode oferecer consultas diversas. Para se criar um repositório utilizando o Spring Data JPA, basta criar uma interface que estende uma de suas interfaces:

```
Repository – Repositório geral, que não disponibiliza nenhum
método. A interface que o estender deve especificar os métodos que
deseja utilizar;

CrudRepository – Repositório que disponibiliza as funcionalidades
CRUD (Create, Read, Update and Delete). A interface que o estender
recebe automaticamente todas essas funcionalidades;

```
**Não é necessário criar implementações para essas interfaces!
Podemos utilizá-las diretamente!**

**Existe uma interface PagingAndSortingRepository, que estende
CrudRepository, com métodos adicionais de paginação e ordenação**

**Existe também uma interface JpaRepository, que estende
PagingAndSortingRepository com métodos de flush (atualização
forçada do banco de dados) e exclusão em bloco**

### Query methods

Repositórios também podem conter consultas diversas sobre a classe persistida associada. A maneira mais simples de se realizar uma consulta consiste em utilizar **query methods**, pois basta declará-los na interface do repositório e o Spring Data JPA monta a consulta de acordo com seu nome:

+ Na primeira palavra do método indicamos a operação (find, read, query e get fazem buscas e count conta os resultados);

+ Entre a primeira palavra e o By podemos formatar o resultado (Distinct retira registros duplicados, Top1 traz o primeiro registro, Last5 traz os 5 últimos registros, etc)

+ Depois do By colocamos as condições, se não informamos operadores, subentende-se a operação de igualdade

```
Exemplos

Um método com o nome findByNome(String nome) retornaria todos
os usuários cujo atributo nome seja igual ao parâmetro;

Um método com o nome findTop1ByNomeContains(String nome)
retornaria o primeiro registro de usuário que contenha em qualquer
lugar de seu atributo nome o texto passado como parâmetro;

Um método com o nome findByIdGreaterThan(Long id) retornaria
todas os registros de usuário com atributo id maior que o parâmetro;

Existem várias opções e é possível inclusive acessar atributos
internos:

Um método com o nome findByAutorizacoesNome(String nome), por
exemplo, traria todos os usuários que possuissem, em seu atributo
autorizacoes (uma lista da classe persistida Autorizacao), uma
autorização com atributo nome igual ao parâmetro;

```
### @query

A utilização de query methods é bastante prática, contudo consultas complexas fatalmente gerarão métodos com nomes gigantescos e incompreensíveis. Para esse tipo de consulta existe a anotação **@Query**, que permite a construção de consultas em JPQL (Java Persistence Query Language):

Exemplos:

Essa consulta busca todos os usuários que possuem o texto contido no parâmetro "nome" em qualquer lugar de seu atributo nome e é equivalente ao query method findByNomeContains(String nome)

```
@Query("select u from Usuario u where u.nome like %?1%")
public List<Usuario> buscaUsuario(String nome);
```
Essa consulta busca todos os usuários que possuem uma autorização
cujo atributo nome é idêntico ao texto contido no parâmetro "nome"
e é equivalente ao query method findByAutorizacoesNome(String
nome)

```
@Query("select u from Usuario u join u.autorizacoes a where a.nome = ?1")
public List<Usuario> buscaUsuarioPorNomeAutorizacao(String nome);
```

### @Transactional

O Spring realiza o controle de transações por meio da anotação **@Transactional**. Qualquer método anotado com essa anotação passa a
funcionar como uma transação: se ocorrer uma exceção, todas as operações no BD são desfeitas

```
@Transactional
public void exemploTransacao() {
 // Cria usuario
 Usuario usuario1 = new Usuario();
 usuario1.setNome("Pedro");
 usuario1.setSenha("senha");
 usuarioRepo.save(usuario1);
 // Gera erro, pois nome e senha sao obrigatorios
 Usuario usuario2 = new Usuario();
 usuarioRepo.save(usuario2);
}
```

# Rest

REST é a abreviação para REpresentational State Transfer.

+ Princípios fundamentais:

+ Protocolo cliente/servidor sem estado (stateless): cada requisição
HTTP contém toda a informação necessária (nao manter sessão).

+ Um conjunto de informações padrão bem definidas: POST, GET, PUT,
DELETE, HEAD e OPTIONS

+ Cada recurso deve possuir um identificador único (URI)

+ Uso de hipermídia (links)

+ Recursos (serviços) com múltiplas representações (formatos de
retorno, como JSON ou XML)

+ Um webservice é dito RESTful se ele adere aos princípios
fundamentais

### Rest com Spring

O Spring fornece suporte a REST por meio do framework Spring MVC e, utilizando o Spring Boot, basta incluir o starter web e o Jackson (suporte a XML) no arquivo "pom.xml".

```
<dependency>
    <groupId>org.springframework.boot</groupId>
    <artifactId>spring-boot-starter-web</artifactId>
    </dependency>
    <dependency>
    <groupId>com.fasterxml.jackson.dataformat</groupId>
    <artifactId>jackson-dataformat-xml</artifactId>
</dependency>
```

+ Também é preciso configurar a porta e o path no arquivo **application.properties**

```
## Server
server.port=8081
server.servlet.context-path=/springRest
```

O trecho de código abaixo mostra um exemplo de controller REST:

```
@RestController
@RequestMapping(value = "/usuario")
public class UsuarioController {

@Autowired
private UsuarioService usuarioService;

@RequestMapping(value = "/get/{nome}")
@JsonView(View.All.class)
public ResponseEntity<Collection<Usuario>> pesquisar(@PathVariable("nome") String nome) {
    return new ResponseEntity<Collection<Usuario>>(usuarioService.buscar(nome), HttpStatus.OK);
}

@RequestMapping(value = "/getById")
@JsonView(View.All.class)
public ResponseEntity<Usuario> get(@RequestParam(value="id", defaultValue="1") Long id) {
    Usuario usuario = usuarioService.buscar(id);    
    if(usuario == null) {
        return new ResponseEntity<Usuario>(HttpStatus.NOT_FOUND);
    }
    return new ResponseEntity<Usuario>(usuario, HttpStatus.OK);
}
```
O trecho de código abaixo mostra um exemplo de controller REST (cont):

```
@RequestMapping(value = "/getAll")
@JsonView(View.Alternative.class)
public ResponseEntity<Collection<Usuario>> getAll() {
    return new ResponseEntity<Collection<Usuario>>(usuarioService.todos(), HttpStatus.OK);
}

// Voce pode informar o metodo e o tipo de retorno produzido
@RequestMapping(value = "/save", method = RequestMethod.POST, produces = MediaType.APPLICATION_JSON_VALUE)
@JsonView(View.All.class)
// E possivel indicar o status por anotacao, mas sera fixo, sem possibilidade de tratar erros
@ResponseStatus(HttpStatus.CREATED)

public Usuario save(@RequestBody Usuario usuario, HttpServletRequest request, HttpServletResponse response) {
    usuario = usuarioService.salvar(usuario);
    response.addHeader("Location", request.getServerName() + ":" + request.getServerPort() +
    request.getContextPath() + "/usuario/getById?id=" + usuario.getId());
    return usuario;
    }
}
```

Vamos repassar as anotações gerais da classe:

+ A anotação **"@RestController"** encapsula diversas outras anotações e, basicamente, indica que essa classe implementa webservices RESTful

+ A anotação **"@RequestMapping"** permite estabelecer uma URI geral para todos os serviços contidos na classe. No exemplo, todos os
serviços da classe terão uma URI iniciada em "/usuario

Vamos agora discutir o serviço 1:

```
@RequestMapping(value = "/get/{nome}")
@JsonView(View.All.class)
public ResponseEntity<Collection<Usuario>> pesquisar(@PathVariable("nome") String nome) {
    return new ResponseEntity<Collection<Usuario>>(usuarioService.buscar(nome), HttpStatus.OK);
}
```

+ Atende pela URI "/usuario/get/{nome}" e retorna os usuários cujo nome contenha "{nome}". Reparem que o nome do método não influi
na URI do serviço;

+ A anotação @JsonView(View.All.class) indica a View a utilizar para gerar a resposta do serviço (um JSON). Mais sobre isso adiante

+ O retorno do método é encapsulado por uma ResponseEntity, que permite, além do objeto retornado, informar um HttpStatus

+ O parâmetro "nome" do método é ligado à variável a parte "{nome}" da URI

+ **Uma chamada para a URI "/usuario/get/teste" chamaria o método "pesquisar" com o parâmetro "nome" com valor "teste"**

+ **A serialização/desserialização é completamente automática!**

Vamos agora discutir o serviço 2:

```
@RequestMapping(value = "/getById")
@JsonView(View.All.class)
public ResponseEntity<Usuario> get(@RequestParam(value="id", defaultValue="1") Long id) {
    Usuario usuario = usuarioService.buscar(id);
    if(usuario == null) {
        return new ResponseEntity<Usuario>(HttpStatus.NOT_FOUND);
    }
    return new ResponseEntity<Usuario>(usuario, HttpStatus.OK);
}
```

+ Atende pela URI **"/usuario/getById?id={id}"** e retorna o usuário com o id passado como parâmetro

+ O parâmetro de entrada "id" vem por meio da URI (requisição GET) e, por isso, é preciso anotá-lo com @RequestParam

+ A configuração **"(value="id", defaultValue="1")** indica que o nome do parâmetro na URL é "id" e, caso não seja especificado, possuirá valor "1"

+ **Uma chamada para a URI "/usuario/getById?id=2" chamaria o método "get" com o parâmetro "id" com valor "2"**

+ Nesse serviço o HttpStatus retornado varia com o resultado da busca

Vamos agora discutir o serviço 3:

```
@RequestMapping(value = "/getAll")
@JsonView(View.Alternative.class)
public ResponseEntity<Collection<Usuario>> getAll() {
    return new ResponseEntity<Collection<Usuario>>(usuarioService.todos(), HttpStatus.OK);
}
```
+ Atende pela URI "/usuario/getAll", sem nenhum parâmetro, e retorna todos os usuários cadastrados

Vamos agora discutir o serviço 4:

```
// Voce pode informar o metodo e o tipo de retorno produzido

@RequestMapping(value = "/save", method = RequestMethod.POST, produces = MediaType.APPLICATION_JSON_VALUE)
@JsonView(View.All.class)

// E possivel indicar o status por anotacao, mas sera fixo, sem possibilidade de tratar erros

@ResponseStatus(HttpStatus.CREATED)
public Usuario save(@RequestBody Usuario usuario, HttpServletRequest request, HttpServletResponse response) {
    usuario = usuarioService.salvar(usuario);
    response.addHeader("Location", request.getServerName() + ":" + request.getServerPort() +
    request.getContextPath() + "/usuario/getById?id=" + usuario.getId());
        return usuario;
}
```

+ Atende pela URI **"/usuario/save"**

+ Os parâmetros de entrada vêm como JSON no "body" da requisição e, por isso, é preciso anotar o parâmetro "usuario" como @RequestBody

+ Definimos para esse serviço que o método de requisição deve ser POST ("method = RequestMethod.POST") e ele produz um JSON
("produces = MediaType.APPLICATION_JSON_VALUE)").

+ **Podemos omitir o método de acesso substituindo a anotação @RequestMapping por @PostMapping, @GetMapping, etc**

+ Para esse serviço retornamos um HttpStatus fixo ("@ResponseStatus(HttpStatus.CREATED") **Isso não é uma boa prática!**

+ Os parâmetros "HttpServletRequest request" e "HttpServletResponse response" são carregados automaticamente (não é necessário nenhuma alteração na requisição) e permite acessar dados da requisição (em "request") e alterar dados da resposta (em
"response")

+ Nesse serviço alteramos o cabeçalho da resposta utilizando dados da requisição

### CORS

**Cross-Origin Resource Sharing (CORS)** é uma especificação de uma tecnologia de navegadores que define meios para um
servidor permitir que seus recursos sejam acessados por uma página web de um domínio diferente.

+ Impede que uma rota em um servidor seja acessada por uma página (ou JavaScript) de outro servidor;

+ Para habilitar CORS em uma rota basta adicionar a anotação **@CrossOrigin**

+ Por padrão, a anotação permite acesso de qualquer destino com os métodos de acesso GET, HEAD e POST

+ Para permitir acesso a partir de apenas uma origem, pode-se usar, por exemplo, **@CrossOrigin(origins = "http://www.origem.com:9000")**, Mais de uma origem pode ser especificada!

+ É possível definir os métodos permitidos com a opção **methods**, os cabeçalhos permitidos com **allowedHeaders** e os cabeçalhos visíveis (na resposta da rota) com **exposedHeaders**

### Serialização

Não é preciso qualquer código adicional para realizar a serialização/desserialização com JSON ao utilizar o Spring Boot. Por outro lado, é possível criar diferentes visualizações (View) para uma mesma classe. Ou seja, permitir que, para diferentes serviços, diferentes campos de uma classe sejam serializado

Para controlar nossas Views, criaremos a classe abaixo:

```
package br.gov.sp.fatec.view;
/**
* Esta classe define as diferentes visualizacoes disponiveis para serializacoes
*/
public class View {
/**
* Visualizacao principal com os principais atributos
*/
    public static class UsuarioResumo {
    }
    /**
    * Visualizacao com todos os atributos
    * Inclui tudos os atributos marcados com UsuarioResumo
    */
    public static class UsuarioCompleto extends UsuarioResumo {
    }
    /**
    * Visualizacao alternativa
    */
    public static class UsuarioResumoAlternativo {
    }
}
```
São pontos de interesse da classe View: 
 
+ Ela apresenta diversas subclasses: UsuarioResumo, UsuarioCompleto e UsuarioResumoAlternativo

+ **O nome da classe e das subclasses não importam. O importante é entender que cada subclasse representa uma marcação (label)**

+ A subclasse UsuarioCompleto estende a subclasse UsuarioResumo. Isso indica que todos os atributos marcados com UsuarioResumo
também são automaticamente marcados com UsuarioCompleto

Vamos ver um uso de View na classe "Usuario":

```
public class Usuario{
@Id
@GeneratedValue(strategy=GenerationType.IDENTITY)
@Column(name = "USR_ID")
@JsonView({View.UsuarioCompleto.class, View.UsuarioResumoAlternativo.class})
private Long id;

@Column(name = "USR_NOME", unique=true, length = 20, nullable = false)
@JsonView({View.UsuarioResumo.class, View.UsuarioResumoAlternativo.class})
private String nome;

}
```
+ Usamos a anotação @JsonView nos atributos que desejamos serializar.

+ O atributo "id" será serializado quando a classe de View escolhida for View.UsuarioCompleto ou View.UsuarioResumoAlternativo

+ O atributo "nome" será serializado quando a classe de View escolhida for View.UsuarioResumo ou View.UsuarioResumoAlternativo

+ **Como View.UsuarioCompleto estende View.UsuarioResumo, o atributo "nome" também será serializado quando a classe de View escolhida for View.UsuarioCompleto**

Vamos ver um uso de View na classe "Usuario“ (cont.):

```
@ManyToMany(fetch = FetchType.EAGER)
@JoinTable(name = "UAU_USUARIO_AUTORIZACAO",
    joinColumns = { @JoinColumn(name = "USR_ID") },
    inverseJoinColumns = { @JoinColumn(name = "AUT_ID") })
@JsonView({View.UsuarioResumo.class, View.UsuarioResumoAlternativo.class})
private List<Autorizacao> autorizacoes;
```

**Anotar a lista de autorizações não significa que atributos da classe
“Autorizacao” serão apresentados!**

**É preciso anotar também os atributos desejados na classe
“Autorizacao” ou o resultado seria algo similar a: **


```
[
    {
        "id": 4,
        "nome": "teste",
        "autorizacoes": [
        {},
        {}
        ]
    }
]
```
+ **É possível perceber que existem duas autorizações associadas, mas nenhum atributo será exibido**

Em um serviço REST, basta indicar qual View deve ser utilizada para formatar o retorno:

```
@RequestMapping(value = "/get/{nome}", method = RequestMethod.GET)
@JsonView(View.UsuarioCompleto.class)
public ResponseEntity<Collection<Usuario>> pesquisar(@PathVariable("nome") String nome) {
    return new ResponseEntity<Collection<Usuario>>(usuarioService.buscar(nome), HttpStatus.OK);
}
```
JSON resultante:

```
[
    {
            "id": 4,
            "nome": "teste",
            "autorizacoes": [
            {
                "nome": "ROLE_USUARIO"
            },
            {
                 "nome": "ROLE_ADMIN"
            }
        ]
    }
]

```

**Somente o atributo “nome” foi anotado com “Vies.UsuarioCompleto” na classe “Autorizacao”**

Também pode-se fazer marshalling/unmarshalling (XML):

```
@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
@Entity
@Table(name = "USR_USUARIO")
public class Usuario{
.
.
.
@ManyToMany(fetch = FetchType.EAGER)
@JoinTable(name = "UAU_USUARIO_AUTORIZACAO",
    joinColumns = { @JoinColumn(name = "USR_ID") },
    inverseJoinColumns = { @JoinColumn(name = "AUT_ID") })
@JsonView({View.Main.class, View.Alternative.class})
@XmlElement(name = "autorizacao")
private List<Autorizacao> autorizacoes;
```
+ Ao usar anotações JAXB (Java Architecture for XML Binding) permitimos que os serviços também aceitem XML

+ **@XmlRootElement** define o elemento raiz para uma árvore XML

+ **@XmlAccessorTye(XmlAccessType.FIELD)** indica que os atributos devem compor o XML por padrão (sem necessidade de anotação, desde que
possuam um getter de mesmo nome);

+ **@XmlElement**, nesse exemplo, permite renomear o atributo no XML;

### Teste

Para testar nossos serviços utilizaremos a extensão Postman do Google Chrome que, entre outras coisas, permite:

+ Criar e enviar uma requisição completa, permitindo alterar tipo (GET, POST, etc), parâmetros, cabeçalhos (headers), corpo (body), etc

+ Verificar todos os detalhes da resposta recebida, como status, cabeçalhos (headers), corpo (body), cookies, etc;