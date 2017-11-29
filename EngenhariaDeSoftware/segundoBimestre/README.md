# Engenharia de software 2 - Resumo 2° bimestre

## Engenharia de requisitos;
* Requisitos de software
	* São descrições do que o software deve fazer
	
* Tipos de requisitos
	* Alto nível (Abstrato) - requisito de usuário;
		* Escrito em linguagem natural;
		* Diagramas;
	* Baixo nível (Detalhado) - requisito de sistema;
		* Especificação do sistema;
		* Este vai para o contrato;
		* São o detalhamento do requisito de usuário;
		* Aqui há a descrição de tudo aquilo que deverá ser feito pelo sistema.

OBS: Tanto requisito de usuário quanto o de sistema, podem ser funcionais ou não funcionais.

Abaixo são descritos as caracaterísticas dos requisitos. Lembrando que, estes requisitos devem ser completos e consistentes, onde:

* Completo:
	* Inclui toda a descrição dos requisitos necessários;
* Consistentes:
	* O requisito deve ser claro, evitando geração de ambiguidade.

* Requisitos funcionais
	* O que o sistema deve fazer;
	* Entradas e saídas;
	* O que o sistema não deve fazer;
	
	* Exemplo: 
		- Um usuário deve ser capaz de pesquisar as listas de agendamentos para todoas as clínicas;
		- O sistema deve gerar a cada dia, para cada clínica, a lista dos pacientes para as consultas daquele dia.
	
	Veja que os exemplos acima são exemplos de extremo alto-nível, com descrições simples claras e feitas na linguagem natural.

* Requisitos não-funcionais
	* Como o sistema deve fazer;
	* Inclui aspectos como:
		* Qualidade: Usabilidade, confiabilidade, eficiência;
		* Implementação: Sistema operacional, hardware;
		* Ambiente: Segurança, privacidade, sigilo;
	* Aplica-se aqui regras e restrições para o desenvolvimento do software;
	* Definem propriedades do sistema;
	* Requisitos não-funcionais são mais críticos, pois caso não sejam, pode ser que o sistema se torne inútil;
	
	* Os requisitos não funcionais diversas subcategorias, sendo as principais:
		* Produto;
		* Organizacional;
		* Externos.
	Para que seja possível realizar detalhamentos e exemplos abaixo há uma seção com apenas as subcategorias dos requisitos não funcionais

OBS: Um ponto importante sobre os requisitos é que, uma boa prática para fazer a melhor gestão deles é, manter todos os requisitos e suas conexões de forma controlada.	

# Subcategorias dos requisitos não funcionais

## Requisitos de produtos

* Requisitos de proteção:

## Métodologia ágeis;

Métodologia ágeis são técnicas de desenvolvimento para que seja possível entregar o produto no prazo correto, com qualidade, e o mais importante de todos, garantir a satisfação do cliente.

* Existem inúmeros métodos diferentes, os mais importantes são:
		· eXtreme Programming (XP)
		· Scrum 
		· Dynamic Systems Development Method (DSDM) 
		· Adaptive Software Development (ASD) 
		· The Crystal family
		
	
## Modelagem de caso de uso;
## Users stories (Levantar, pesos);
## Notação UML (Classes, Relações, associações, MVC);

Antes de mais nada, é extremamente importante citar nossos objetivos em descrever as notações UML, e quais seriam eles?
 Responder as seguintes perguntas:
 
  	 ** Em um nível alto de abstração, que objetos constituem o sistema em questão?

	 ** Quais são as classes candidatas?

	 ** Como as classes do sistema estão relacionadas entre si?

	 ** Quais são as responsabilidades de cada classe?
	 
* Classes
 A Classe descreve seus objetivos através de atributos e operações

	 **Atributos correspondem às informações que um objeto armazena.
	 **Operações correspondem às ações que um objeto sabe realizar.
	exemplo:
	<img> link da imagem</img>
* Associações
 É utilizada para representar a relação entre objetos.
 Na UML associações são representadas por linhas, que ligam as classes cujos objetos se relacionam
 	exemplo:
	<img> link da imagem </img>
	
* Multiplicidades
Representam a quantidade de objetos aos quais outro objeto pode se associar, ou seja, demonstra os limites inferiores e superiores.
	exemplo:
	**Nome: Apenas um
	Simbologia na UML: 1..1 (ou 1)
	**Nome: Zero ou muitos
	Simbologia na UML: 0..* (ou *)
	**Nome: Um ou Muitos
	Simbologia na UML: 1..*
	**Nome: Zero ou um
	Simbologia na UML: 0..1
	**Nome: Intervalo Específico 
	Simbologia na UML: 1¹..1¹
	

	
	
## Notação Crow's foot.
