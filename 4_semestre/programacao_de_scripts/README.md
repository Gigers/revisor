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

## JavaScript
JavaScript é uma linguagem de programação orientada a objetos utilizada prncipalmente para definir o comportamento de páginas web. Ela é [client-side](https://www.gigasystems.com.br/artigo/60/client-side-e-server-side),podendo ser executada no lado do cliente(ou usuário) em seu navegador, e também [server-side](https://www.gigasystems.com.br/artigo/60/client-side-e-server-side), possibilitando a criação de [APIs RESTful](https://becode.com.br/o-que-e-api-rest-e-restful/) e, também, permite a criação de aplicativos nativos com a ajuda de alguns frameworks de desenvolvimento como o [REACT Native](https://www.devmedia.com.br/react-native/). 

O JavaScript pode ser aplicado em projetos com uma variedade de propósitos, dependendo de sua necessidade:

- O lado cliente do JavaScript fornece objetos para controlar um navegador web e seu [Document Object Model (DOM)](https://www.devmedia.com.br/trabalhando-com-dom-em-javascript/29039). Por exemplo, as extensões do lado do cliente permitem que uma aplicação coloque elementos em um formulário HTML e responda a eventos do usuário, como cliques do mouse, entrada de formulário e de navegação da página.

- O lado do servidor do JavaScript fornece objetos relevantes à execução do JavaScript em um servidor. Por exemplo, as extensões do lado do servidor permitem que uma aplicação comunique-se com um banco de dados, garantindo a continuidade de informações de uma chamada para a outra da aplicação, executar manipulações de arquivos em um servidor e até mesmo responder a requisições HTTP, devolvendo informações de acordo com o mapeamento acessado, em APIs RESTful.

## Exemplo de uso
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


# Referências
* [1] MDN Web Docs. "O que é JavaScript". Disponível em: [https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Guide/Introduction#O_que_é_JavaScript](https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Guide/Introduction#O_que_é_JavaScript). Acesso: meados do 2º semestre de 2019.
* [2] Davi Ferreira. "O que é JavaScript?". Disponível em: [https://tableless.github.io/iniciantes/manual/js/](https://tableless.github.io/iniciantes/manual/js/). Acesso: meados do 2º semestre de 2019.
* [3] RocketSeat. Curso de introdução ao Javascript. Disponível em: [https://rocketseat.com.br/starter/curso-gratuito-javascript](https://rocketseat.com.br/starter/curso-gratuito-javascript). Acesso: meados do 2º semestre de 2019.
* [4] GINAPE UFRJ. "Incluindo Javascript no Documento HTML" [http://www.nce.ufrj.br/ginape/js/conteudo/introducao/incluindo.htm](http://www.nce.ufrj.br/ginape/js/conteudo/introducao/incluindo.htm). Acesso: meados do 2º semestre de 2019.