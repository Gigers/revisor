# Engenharia de software 2 - Resumo 2° bimestre

## Engenharia de requisitos

A engenharia de requisitos é uma sub-área da engenharia de software que visa identificar, controlar e manter requisitos.

Os requisitos, são as necessidades do cliente, bem definididas, e que desta forma podem ser usadas em contratos, documentações e no desenvolvimento da solução.

### Requisitos de software

São descrições do que o software deve fazer
	
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

## Requisitos de sistemas

## Requisitos funcionais

* Requisitos funcionais
	* O que o sistema deve fazer;
	* Entradas e saídas;
	* O que o sistema não deve fazer;
	
	* Exemplo: 
		- Um usuário deve ser capaz de pesquisar as listas de agendamentos para todoas as clínicas;
		- O sistema deve gerar a cada dia, para cada clínica, a lista dos pacientes para as consultas daquele dia.
	
	Veja que os exemplos acima são exemplos de extremo alto-nível, com descrições simples claras e feitas na linguagem natural.

## Requisitos não funcionais

* Requisitos não funcionais
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
	Para que seja possível realizar detalhamentos e exemplos, abaixo há uma seção com apenas as subcategorias dos requisitos não funcionais

OBS: Um ponto importante sobre os requisitos é que, uma boa prática para fazer a melhor gestão deles é, manter todos os requisitos e suas conexões de forma controlada.	


Algumas métricas para levantar requisitos não funcionais

* Velocidade;
* Tamanho;
* Facilidade de uso;
* Confiabilidade.

### Subcategorias dos requisitos não funcionais

Como citado anteriormente, os requisitos funcionais devem ser detalhados, isso porque cada detalhe faz a diferença no momento da implementação, para isso, é feito uma grande divisão dos requisitos não funcionais, como é possível visualizar na figura abaixo.

<!-- Colocar figura aqui -->

#### Requisitos não funcionais de produtos
Requisitos que especificam a forma do produto, seus comportamentos.

* Requisitos de proteção:
Estes são requisitos que fazem referência as formas com que o sistema deverá ser protegido;

* Requisitos de confiança:
Métricas utilizadas para garantir a confiabilidade do sistema

* Requisitos de eficiência:
    * Requisito de desempenho:
        - Como o próprio nome diz, este é um tópico que define o desempenho apresentado pelo produto, seja ele em tempo de resposta, ou em otimização. 
    * Requisitos de espaço: 
        - Requisito que diz quais os requisitos relacionados a armazenamento

* Requisito de usabilidade
Quais os fluxos o sistema deverá seguir, quantidade de janelas, clicks. Ou seja, a forma de experiência e uso que o usuário terá com o sistema, a facilidade e intuitividade que o sistema tem.

#### Requisitos não funcionais organizacionais
Estes são requisitos relacionados a politicas e procedimentos das empresas envolvidas

* Requisitos operacionais
Diz respeito a regras estabelecidas para a empresa que fará o software

* Requisitos de desenvolvimento
Diz sobre regras e restrições aplicadas sobre o código desenvolvido, bem comos as tecnologias empregadas neste

#### Requisitos externos

* Requisitos éticos
Trata da privacidade do usuário, entre outros pontos relacionados

* Requisitos legais
Diz-se sobre as normas, leis, regras ou padrões que o sistema deve atender.

### Métricas para especificar requisitos não funcionais

* Velocidade:
    - Tempo de resposta;
    - Tempo de troca entre telas
* Confiabilidade:
    - Tempo médio para faltas;
    - Disponibilidade. 
* Robustez:
    - Percentual de erros que causam falhas;
    - Tempo de reinício após falha.

### Metas

Dentro dos requisitos é necessário que haja uma meta a ser alcançada por eles, seja um sistema simples de utilizar, ou um sistema seguro, etc.

### Documento de requisitos de software
É a declaração oficial do que é demandado dos desenvolvedores do sistema. Este é um documento que define <code>O QUE</code> o sistema deve fazer e não <code>COMO</code>.

A utilização deste documento é bastante vasta, podendo ser utilizado pelo usuário final, por outros engenheiros de software, os engenheiros de teste e muitos outros. Porém em metodologias ágeis, este é um formato pouco usado, sendo substituido principalmente pelas <code>User Stories</code>.

Tanto desenvolvedor quanto cliente deverão conseguir utilizar este documento.

### Especificação de requisitos

Este é o processo de descrever os requisitos de sistema e os requisitos de usuário. Ao realizar a especificação de requisitos é necessário que haja uma preocupação com usuários não técnicos, ou seja, usuários que não tem formação técnica. Isso é feito para que haja a compreensão de todos que estão lendo o documento.

Vale lembrar aqui que, os requisitos de sistema, normalmente são mais detalhados que os requisitos de usuário, exatamente por tratar de algumas outras questões técnicas.

### Projetos e requisitos

De maneira bastante simples, os requisitos devem indicar o que o sistema deve fazer, e o projeto deve descrever como fazer isso.

### Diretrizes para escrever requisitos

Abaixo algumas tópicos a serem levados em consideração no momento de escrever requisitos

* Usar um padrão de linguagem (Manter formal, ou algo similar);
* Usar "deve" para requisitos obrigatórios e "pode" para os requisitos desejáveis;
* Evitar termos muito técnicos;
* Incluir justificativa de o porque o requisito é necessário.

### Formas de levantar requisitos

Levantamento de requisitos estruturada:
* Problemas com o excesso de padrões;
* Limita o escritor;
* Porém geram um padrão na escrita do requisito.

<!-- Esta é a utilizada no trabalho!!! -->

Além desta há outras específicações como a tabular, que também trabalha com expressões, porém utilizando tabelas.

### Processos na análise de requisitos

Os processos utilizados na engenharia de requisitos pode variar bastante, porém, existem uma série de processos comuns a todos, são elas:

* Descoberta de requisitos;
* Classificação e organização de requisitos;
* Priorização e negociação de requisitos;
* Especificação de requisitos.

Veja abaixo um detalhamento destas etapas

A elicitação e análise dos requisitos inclui um processo interno onde é feito
* 1° - Descoberta dos requisitos;
* 2° - Classificação e organizaão de requisitos;
* 3° - Priorização e negociação de requisitos;
* 4° - Especificação de requisitos.

* Elicitação de requisitos e análise de requisitos:
    * Este é o processo que envolve os stakeholders (Os interessados no sistema);
    * Levantamento dos dados de dominio;
    * Levantamento dos serviços que o sistema deve fornecer;
    * Restrições operacionais do sistema;
    
    * Problemas desta etapa:
        * Pode ocorrer dos stakeholders não saberem o que querem;
        * Pode também acontecer de os stakeholders utilizarem termos muito específicos da área, causando problemas na interpretação por parte de quem está levantando os requisitos;
        * Fatores politicos podem influênciar.

* Validação de requisitos
    * Esta é a etapa onde os requisitos são validados com os interessados, evitando assim que, o que foi entendido e especificado é o que o usuário necessita;
    * Este processo é importante por evitar que problemas ocorram. Problemas em requisitos podem ter um custo muito alto;
    * Formas de validar:
        * Prototipar;
        * Verificar manualmente os requisitos.

* Gerenciamento de requisitos
    * Etapa bastante importante, pois é aqui que muitos erros podem acontecer, e para manter um sistema com muita qualidade é necessário que os requisitos não se percam, sendo recomendado uso de repositórios que versionem os requisitos;
    * É também importante pois com o tempo requisitos mudam, e é importante manter o controle das mudanças.

#### Revisão do requisito

A revisão é de extrema importância e deve ser feita sempre, o que recomenda-se é iniciar o processo de revisões periodicas desde o inicio do projeto, assim possíveis grandes problemas podem ser eliminados no inicio do projeto.

Alguns pontos a serem analisados:
* Verificabilidade;
* Compreensibilidade;
* Rastreabilidade;
* Adaptabilidade.

#### Evolução dos requisitos

A alteração pode sempre ocorrer, é por isso que, desde cedo, é necessário se preocupar me construir um sistema com baixo acoplamento.

Compreensão do problema -> Requisitos iniciais -> Compreensão alterada do problema -> Requisitos alterados

### Stakeholders

Os stakeholders são todos os interessados no sistema seja direto ou indiretamente, ou seja, a empresa que irá utilizar o software e seus funcionarios podem ser considerados interessados diretos, equanto que seus clientes interessados indiretos.

#### Entrevistas

Entrevistas boas são aquelas que mesclam o tipo aberto e o tipo fechado, ou seja, o tipo mais formal e estruturado (Com perguntas pre-feitas), e o tipo aberto, onde há a possibilidade de interação direta entre o engenheiro de software e o cliente.

As entrevistas facilitam e ajudam no entendimento de como os stakeholders irão interagir com o sistema, mas não resolvem o problema de compreensão dos requisitos de domínio, isso porque aqui como a conversa é direta com o cliente, as terminologias utilizadas por ele, poderão trazer dificuldades para o entendimento do engenheiro que está fazendo a entrevista.

### Cenários

Este tenta criar exemplos do mundo real, utilizando histórios, fluxos de eventos, possíveis erros entre outros.

### Etnográfia

Nem sempre a maneira que o processo é descrito é realmente a forma que as pessoas trabalham, podemos entender o processo como, a maneira como as pessoas deveriam trabalhar, mas isso nem sempre ocorre.

Para isso a etnográfica é a técnica de observar como as pessoas trabalham para que então se saiba como o processo realmente é feito. 

Isso faz com que o processo seja entendido de uma melhor forma já que, ao pensarmos em processo devemos entender que ele é a maneira como a pessoa realiza, e não somente como os parâmetros dizem.

Seu grande problema é que ela observa padrões utilizados, e que podem não ter relevância no processo.


## Métodologia ágeis;


## Modelagem de caso de uso;


## Users stories (Levantamento, pesos);


## Notação UML (Classes, Relações, associações, MVC);


## Notação Crow's foot.