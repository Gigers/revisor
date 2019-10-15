# Programação de scripts

Esta matéria estuda o desenvolvimento de paginas web com o uso de Scripts(JavaScript).

As páginas web são baseadas em três tecnologias

* HTML - Define estrutura
* CSS - Define estilo
* JavaScript - Define Comportamento

Além disso, a matéria engloba assuntos relacionados a Typescript e Angular, que serão abordados mais a frente.

## HTML (Hypertext Markup Language)

É a linguagem de *marcação* utilizada para definir a estrutura de uma página.
Para marcar um elemento na página utiliza-se a seguinte notação, chamada de tag ou nó: 

``` html
<tagname propriedade="valor"> conteudo da tag </tagname>
```

Por exemplo 

``` html 
<a href="https://www.g1.globo.com">Site da globo</a>
```

No exemplo a cima temos uma tag de link `<a>` para o site do globo. A propriedade `href` tem o valor `https://www.g1.globo.com`

De forma geral, a maioria das tags contém tag de fechamento, contudo há algumas tags que fogem a esta regra.

### Documento HTML

Um arquivo .html é chamado de documento html. Sua estrutura básica é:

```html
<!DOCTYPE html>
<html>
	<head>
	</head>
	<body>
	</body>
</html>

```

### Principais tags
* ``` <!DOCTYPE html> ``` - utilizada para o navegador entender a versão do HTML.
* ``` <html></html> ``` - Define um documento html.
* ``` <head></head> ``` - define uma informação de configuração sobre o documento (titulo, importações).
* ``` <title></title> ``` - Define o titulo do documento que ficará na aba do navegador.
* ``` <body></body> ``` - define o corpo da página.
* ``` <h1></h1> até <h6></h6 ``` - estas tag são utilizadas para cabeçalho da pagina. Esta tag possui variação de tamanho que vai de h1(maior) até h6(menor).
* ``` <div></div>```  - define uma seção no documento
* ``` <p></p>``` - Define um parágrafo de texto 
* ``` <a></a> ``` - Define um hyperlink
* ``` <img> ``` - Define uma imagem
* ``` <meta>``` - Define informações meta
* ``` <ul></ul>``` - Define uma lista não ordenada
* ``` <ol></ol>``` - Define uma lista ordenada
* ``` <li> </li>``` - Define o elemento de uma lista
* ``` <br>``` - Define uma quebra de linha
* ``` <form></form> ``` - Define um formulário

---

## CSS (Cascading Style Sheets)
Utilizada para dar estilo as tags de marcação ([HTML](#HTML)).

Há três formas de utilizar o css junto com o HTML.

* Inline
* Incorporado
* Importado

### CSS Inline

O CSS recebe a classificação de Inline quando está junto com uma tag HTML.

Por exemplo,

``` html 
<span style="color:red">Olá mundo</span>
```

### CSS Incorporado

O CSS recebe a classificação de Incorporada quando está em um arquivo HTML dentro da tag `<style></style>`

Por exemplo, 

```html 
<DOCTYPE html>
<html>
	<head>
		<style>
			span { 
				color: red;
			}
		</style>
	</head>
	<body>
		<span>Olá mundo</span>	
	</body>
</html>
```

### CSS Importado (Linkado ou externo)

O css recebe a classificação de importado quando é escrito em outro arquivo e importando, por meio da tag `<link>` no html.

Por exemplo

* arquivo style.css
``` css
span {
	color: red;
} 
```
* arquivo teste.html

``` html
<DOCTYPE html>
<html>
	<head>
		<link rel="stylesheet" type="text/css" href="style.css">
	</head>
	<body>
		<span>Olá mundo</span>	
	</body>
</html>
```

---

## JavaScript
JavaScript é uma linguagem de programação orientada a objetos utilizada prncipalmente para definir o comportamento de páginas web. Ela é [client-side](https://www.gigasystems.com.br/artigo/60/client-side-e-server-side),podendo ser executada no lado do cliente(ou usuário) em seu navegador, e também [server-side](https://www.gigasystems.com.br/artigo/60/client-side-e-server-side), possibilitando a criação de [APIs RESTful](https://becode.com.br/o-que-e-api-rest-e-restful/) e, também, permite a criação de aplicativos nativos com a ajuda de alguns frameworks de desenvolvimento como o [REACT Native](https://www.devmedia.com.br/react-native/). 

O JavaScript pode ser aplicado em projetos com uma variedade de propósitos, dependendo de sua necessidade:

- O lado cliente do JavaScript fornece objetos para controlar um navegador web e seu [Document Object Model (DOM)](https://www.devmedia.com.br/trabalhando-com-dom-em-javascript/29039). Por exemplo, as extensões do lado do cliente permitem que uma aplicação coloque elementos em um formulário HTML e responda a eventos do usuário, como cliques do mouse, entrada de formulário e de navegação da página.

- O lado do servidor do JavaScript fornece objetos relevantes à execução do JavaScript em um servidor. Por exemplo, as extensões do lado do servidor permitem que uma aplicação comunique-se com um banco de dados, garantindo a continuidade de informações de uma chamada para a outra da aplicação, executar manipulações de arquivos em um servidor e até mesmo responder a requisições HTTP, devolvendo informações de acordo com o mapeamento acessado, em APIs RESTful.

### Exemplo de uso
Um exemplo simples da aplicação de javascript em uma página HTML pode ser representado abaixo, onde uma janela de alerta é exibida após o clique de um botão.

``` html
<!DOCTYPE html>
<html lang="pt-br">
  <head>
    <title>Olá Mundo</title>
    <meta charset="utf-8">
  </head>
  <body>
    <button onclick="alerta()">Clique em mim!</button>
    <script type="text/javascript">
      alerta() {
        alert('Olá Mundo!');
      }
    </script>
  </body>
</html>
```

No exemplo acima, ao clicar no botão exibido na tela, a mensagem "Olá Mundo!" é exibida em um alerta. O código a ser executado fica dentro da tag `<script></script>`, situado dentro da tag `<html></html>`. 

Caso fique dentro da tag `<head></head>`, o código será executado antes do conteúdo da página ser carregado, caso fique dentro do `<body></body>`, será carregado junto com o conteúdo, na rodem que aparece no código.

Além do uso exemplificado acima, um código javascript pode ser importado de um arquivo externo e utilizado da mesma forma: 

``` html
<!DOCTYPE html>
<html lang="pt-br">
  <head>
    <title>Olá Mundo</title>
    <meta charset="utf-8">
  </head>
  <body>
    <button onclick="alerta()">Clique em mim!</button>
    <script type="text/javascript" src="alo.js"></script>
  </body>
</html>
```

Arquivo "alo.js": 
``` javascript
alerta() {
    alert('Olá Mundo!');
}
```

---

## Typescript
Typescript é um **superset de javascript** criado pela microsoft que traz tipagem estática e elementos de orientação a objetos para uma melhor compreensão e organização do código. Esse superset disponibiliza melhor suporte aos recursos de POO, com base em seus quatro princípios fundamentais: encapsulamento, herança, abstração e polimorfismo.

A aplicação de POO em Javascript sempre foi um problema, pois sua tipagem de dados é dinâmica e uma classe criada em sua versão vanilla(versão pura e sem frameworks) não é clara o suficiente. O Typescript traz soluções para estes problemas em tempo de desenvolvimento, com tipagem estática, interfaces, classes, enums e toda uma checkagem de erros pelo [intelissense](https://docs.microsoft.com/pt-br/visualstudio/ide/using-intellisense?view=vs-2019) da IDE durante o desenvolvimento.

Por se tratar de um superset e não uma nova implementação, o Typescript permite a utilização de todos os recursos do **EC5+(ECMA Script 5 e superiores)**. Sintaxes que são apenas do superset são compiladas para a versão desejada do EC5+ através do comando `tsc nomedoarquivo.ts`.

### Instalação
Como pré-requisito é necessário possuir instalado o [node.js](https://www.opus-software.com.br/node-js/) e o gerenciador de pacotes do node, o [npm](https://www.hostinger.com.br/tutoriais/o-que-e-npm).

A instalação é realizada com o comando `npm install -g typescript`, onde o `-g` instala os recursos globalmente.

### Compilação 
O comando `tsc <nomeDoArquivo.ts>` é utilizado para compilar um código Typescript. Esse código compilado é transformado em javascript, que é executado diretamente no navegador.

### Exemplo de classe em Typescript

```ts
export class Pessoa {

  private nome: string;
  private idade: number;
  private parentesco: Array<Pessoa>;

  constructor(nome: String, idade: number, parentesco: Array<Pessoa>){
    this.nome = nome;
    this.idade = idade;
    this.parentesco = parentesco;
  }

  public getNome(): string {
    return this.nome;
  }

  public setNome(nome: string): void {
    this.nome = nome;
  }

  public getIdade(): number {
    return this.idade;
  }

  public setIdade(idade: number): void {
    this.idade = idade;
  }

  public getParentesco(): Array<Pessoa> {
    return this.parentesco;
  }

  public setParentesco(parentes: Array<Pessoa>): void {
    this.parentesco = parentes;
  }
}
```

---

## Angular
Angular é uma plataforma e framework criado por desenvolvedores da Google para contrução de interfaces de front-end utilizando HTML, CSS e Javascript em seu início (AngularJs), depois substituída por Typescript. Este framework diponibiliza facilidades no desenvolvimento de front-end como componentes, injeção de dependências, roteamento, módulos e ferramentas que automativam testes unitários.

O ambiente de desenvolvimento disponibilizado pelo Angular ajuda na criação de SPAs (Single Page Applications), que serão explicadas mais adiante.

### SPA (Single Page Application)
SPAs são aplicações que funcionam no navegador de internet e não recarregam durante o uso. São construídas com HTML, CSS e JavaScript e apresentam as informações aos usuários de uma forma simples, fluida e rápida.

### Arquitetura Angular
Aplicações Angular são divididas por componentes. Estes componentes possuem três tipos de arquivos: Template (HTML), Estilos (CSS), Componente (Typescript). 

A comunicação entre os elementos de uma aplicação Angular ocorre como na imagem abaixo:

![Blocos de componentes Angular](img/Building-blocks-angular.png)

#### Template
O template (HTML) se comunica com o componente (Typescript) através do event binding, onde eventos no navegador como cliques ou até mesmo contato do mouse com um elemento da página ativam métodos situados no componente e que podem afetar outros componentes da aplicação.

#### Componente
O componente (Typescript) se comunica com o Template através do property binding, onde variáveis contidas no componente são exibidas no HTML do template.

#### Diretivas
Diretivas são propriedades das tags HTML do Angular que alteram comportamento, visualização e estilo de onde são implementadas. Sua utilização é da mesma forma da aplicação de uma propiredade de TAG HTML: 
```html
<div diretiva>
  <!-- neste caso, a diretiva aplicada é uma diretiva customizada 
    e pode apresentar qualquer comportamento -->
</div>
```
Além das diretivas customizadas, [diretivas nativas](http://www.macoratti.net/18/06/ang_diret1.htm) como *ngIf, *ngFor e ngClass podem ser aplicadas em quaisquer tags do template.

#### Serviços
Serviços no Angular são arquivos que possuem uma função específica e podem ser utilizados em quaisquer componentes da aplicação. Geralmente se comunicam diretamente com o backend e retornam a informação ao componente desejado.

Sua utilização é providenciada através da injeção de dependências do Angular, que instancia o serviço desejado no componente quando necessário e permite um menor acoplamento entre componentes. o exemplo abaixo mostra a sintaxe de injeção de uma classe de serviços:

```ts
export class Pessoa {
  /*Códigos acima omitidos*/

  // Informando o serviço no contrutor, idica ao Angular que este serviço será necessário e pede para providenciar uma instância dele
  constructor(pessoaService: PessoaService) {}

  /*Códigos abaixo omitidos*/
}
```

#### Stackblitz
Stackblitz é uma plataforma de desenvolvimento online que providencia um ambiente completo para testes de códigos em Angular, React, Vue e outros frameworks. Com ela, o compartilhamento de pequenos códigos fica mais simples.

Um exemplo de uma aplicação Angular hospedada no Stackblitz foi criado [aqui](https://stackblitz.com/edit/cadastro-matriculas-firebase-orm). Nele foram aplicados conceitos de roteamento, lazy loading e comunicação com banco de dados externo utilizando Firebase.

# Referências
* [1] MDN Web Docs. "O que é JavaScript". Disponível em: [https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Guide/Introduction#O_que_é_JavaScript](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Guide/Introduction#O_que_é_JavaScript). Acesso: meados do 2º semestre de 2019.
* [2] Davi Ferreira. "O que é JavaScript?". Disponível em: [https://tableless.github.io/iniciantes/manual/js/](https://tableless.github.io/iniciantes/manual/js/). Acesso: meados do 2º semestre de 2019.
* [3] RocketSeat. Curso de introdução ao Javascript. Disponível em: [https://rocketseat.com.br/starter/curso-gratuito-javascript](https://rocketseat.com.br/starter/curso-gratuito-javascript). Acesso: meados do 2º semestre de 2019.
* [4] GINAPE UFRJ. "Incluindo Javascript no Documento HTML". Disponível em: [http://www.nce.ufrj.br/ginape/js/conteudo/introducao/incluindo.htm](http://www.nce.ufrj.br/ginape/js/conteudo/introducao/incluindo.htm). Acesso: meados do 2º semestre de 2019.
* [5] DEVMEDIA. "Introdução ao TypeScript". Disponível em: [https://www.devmedia.com.br/introducao-ao-typescript/36729](https://www.devmedia.com.br/introducao-ao-typescript/36729). Acesso: meados do 2º semestre de 2019.
* [6] TypeScript Lang. "TypeScript in 5 minutes". Disponível em: [http://www.typescriptlang.org/](http://www.typescriptlang.org/). Acesso: meados do 2º semestre de 2019.
* [7] Eduardo Rabelo. "TypeScript: O guia definitivo". Disponível em: [https://medium.com/@oieduardorabelo/typescript-o-guia-definitivo-1a63b04259cc](https://medium.com/@oieduardorabelo/typescript-o-guia-definitivo-1a63b04259cc). Acesso: meados do 2º semestre de 2019.
* [8] Diego Fernandes. "TypeScript: Vantagens, mitos, dicas e conceitos fundamentais". Disponível em: [https://blog.rocketseat.com.br/typescript-vantagens-mitos-conceitos/](https://blog.rocketseat.com.br/typescript-vantagens-mitos-conceitos/). Acesso: meados do 2º semestre de 2019.
* [9] Alexandre Afonso. "O que é Angular?". Disponível em: [https://blog.algaworks.com/o-que-e-angular/](https://blog.algaworks.com/o-que-e-angular/). Acesso: meados do 2º semestre de 2019.
* [10] Neoteric. "Single-page application vs. multiple-page application". Disponível em: [https://medium.com/@NeotericEU/single-page-application-vs-multiple-page-application-2591588efe58](https://medium.com/@NeotericEU/single-page-application-vs-multiple-page-application-2591588efe58). Acesso: meados do 2º semestre de 2019.
* [11] GARY SIMON. "Angular 4 Event Binding". Disponível em: [https://coursetro.com/posts/code/59/Angular-4-Event-Binding](https://coursetro.com/posts/code/59/Angular-4-Event-Binding). Acesso: meados do 2º semestre de 2019.
* [12] José Carlos Macoratti. "Angular 5 -  Principais diretivas - I". Disponível em: [http://www.macoratti.net/18/06/ang_diret1.htm](http://www.macoratti.net/18/06/ang_diret1.htm). Acesso: meados do 2º semestre de 2019.