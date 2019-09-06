# Programação de scripts

Esta matéria estuda o desenvolvimento de paginas web com o uso de Scripts(JavaScript).

As páginas web são baseadas em três tecnologias

* HTML - Define estrutura
* CSS - Define estilo
* JavaScript - Define Comportamento

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

