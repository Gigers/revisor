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
* ``` <head></head> ``` - define configurações da pagina como (titulo, importações).
* ``` <body></body> ``` - define o corpo, isto é, a estrutura da página html.
* ``` <h1></h1><h2></h2><h3></h3><h4></h4><h5></h5><h6></h6 ``` - estas tag são utilizadas para cabeçalho da pagina. Esta tag possui variação de tamanho que vai de h1(maior) até h6(menor).
* ``` <p></p>``` - Define um parágrafo de texto 
* ``` <title></title> ``` - Define o titulo que ficará na aba do navegador
* ``` <meta charset="utf-8">``` - Define o enconding como utf8 e assim é possível utilizar acentos da lingua portuguesa.
* ``` <a></a> ``` - link para outra página 
* ``` <ul></ul>``` - lista não ordenada
* ``` <ol></ol>``` - lista ordenada
* ``` <li> </li>``` - elemento de uma lista este é utilizado como conteudo das tags `<li>` e  `<ol>`
* ``` <img> ``` - exibe uma imagem na página
