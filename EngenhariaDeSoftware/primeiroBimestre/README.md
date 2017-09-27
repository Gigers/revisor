# Engenharia de software 2 - Fatec SJC (Revisão)

## Introdução

A engenharia de software se preocupa com teorias, métodos e ferramentas para o desenvolvimento de softwares profissionais. Tratando do ínicio do projeto até a manutenção do sistema, após estes já estar em uso.

A engenharia de software tem essa preocupação com a excelência na construção de software por vários motivos, e alguns deles são listados abaixo:

    * O custo de software em um sistema de computador acaba sendo muito elevado, veja que o software fica muito mais caro que o hardware;
    * Custos para manter o software;
    * Os sistemas que terão vida longa, em muitos casos, custam várias vezes o preço de desenvolvimento;

Por esses e por outros motivos a engenharia de software acaba sendo muito importante.

Os softwares são classificados em dois campos:

* Genéricos
    * Os softwares genéricos são sistemas autônomos, que são comercializados e vendidos para qualquer cliente que deseja comprar. Exemplos:
        * Sistemas de gerenciamento de projetos;
        * Softwares CAD;
        * Software de propósito específico.

    * Nestes casos, tanto as propriedades do software, quanto as decisões de mudanças no mesmo, são feitas pelo desenvolvedor do software. 

* Sob encomenda
    * Este é aquele tipo de software que foi criado para atender um cliente específico, e tudo isso, feito sob médida para os parâmetros e métricas do cliente. Exemplos: 
        * Softwares de tráfego aéreo;
        * Sistemas de monitoramento de tráfegos.

    * Os softwares sob medidas, tem suas propriedades e decisões de mudanças feitas em virtude das necessidades do cliente.

* Sobre a engenharia de software
    * Utiliza teorias e métodos adequados para resolver os problemas tendo em mente as restrições organizacionais e financeiras.

* Sobre a produção de software
    * A engenharia de software não trata somente dos aspectos técnicos do desenvolvimento, mas também, com o gerenciamento de projetos, apoio a produção e muitos outros tópicos.

### A importância da engenharia de software

A importância da engenharia de software pode ser vista nos tópicos abaixo:
    * Indivíduos e a sociedade dependem de sistemas de software avançados e complexos;
    * Necessidade de sistemas confiáveis, feitos com economia e velocidade;
    * Os custos são muito altos quando há necessidade de alteração de software que está em uso;

### Atividades de processos de software
* 1° - Especificação de software:
    * Aqui são definidos os requisitos e restrições do software (Processo feito pelos engenheiros, juntamente aos clientes); 
* 2° - Desenvolvimento:
    * Neste passo o software é projetado e programado;
* 3° - Validação de software:
    * O software é verificado para se garantir de que, atende os requisitos do usuário;
* 4° - Evolução de software;
    * Software modificado para atender aos requisitos do usuário e do mercado.

### Questões gerais que afetam a maioria dos softwares

* Mudanças sociais e de negócios
    * Com a mudança rápida da sociedade e dos neǵocios, e com isso, os softwares precisam de adaptação rápida para que a empresa se mantenha competitiva.
* Segurança e confiança
    * O sistema deve ser conviável, e deve ser resistente a falhas
* Heterogeneidade
    * Os sistemas devem cada vez mais se adequar para operar de forma distribuida.

### Ética na engenharia de sotware


## Processos de software

## Rational Unified Process - RUP

O RUP é conhecido como uma metodologia que destaca-se por seguir as 'melhores práticas' de desenvolvimento de software. Entenda que as 'melhores práticas' no contexto de engenharia de software significa:

* a-) Desenvolvimento iterativo;
* b-) Gerenciamento de requisitos; 
* c-) Arquitetura baseada em componentes;
* d-) Organização do projeto em estruturas estáticas e dinâmicas;
* e-) Especificação do software baseado em modelagem visual;
* f-) Verificação constante de qualidade.

## Processos de negócios

Um processo de negócios nada mais é que um conjunto de atividades, iniciado primeiramente por um evento, dirigo por regras de negócio e utilizando recursos, cujo qual entrega um resultado, finalizando com um determinado valor, seja para o cliente interno, seja para o cliente externo de uma empresa.
* Hierarquia:
   * Processos;
   * Subprocessos
   * Atividades
   * Tarefas

Deve-se manter a análise somente no nível de processos. Como fazer isso? Para cada funcionalidade do negócio em estudo, verificam-se as características dessa funcionalidade.
 
Com os candidatos a processos identificados, temos realizado apenas o primeiro passo. O próximo passo consiste em definir cada um deles. É necessário então, para cada processo, responder ao Questionário de Identificação de Processos. 
* Questionário de Identificação de Processos:
 * Atividades envolvidas (de acordo com a descrição narrativa)
 * Quando será realizado a atividade (define o evento de entrada, "quando")
 * Sequência da realização das atividades(implementação dos fluxos)
 * Como serão realizadas as atividades
 * Objetivo do processo
 * O que está envolvido na execução das atividades
 * O que é consumido ou utilizado
 * O que é produzido
 * Relação entre o processo e a estrutura de negócio

* A Visão de Processos é realizada usando o diagrama das extensões Eriksson Penker da modelagem UML. 


## Modelagem de processos de negócios

## Eriksson-Penker

## BPM

* BPM é a abreviação de Business Process Management, que traduzido para o português significa Gerenciamento de Processos de Negócio.

* BPM é uma abordagem de gerenciamento adaptável, desenvolvido com a finalidade de sistematizar e facilitar processos organizacionais individuais complexos, dentro e fora das empresas.

* O BPM tem como intuito trazer a tona informações pertinentes de como os processos são executados para que melhorias possam ser realizadas e para que os processos possam ser gerenciados possibilitando uma melhor tomada de decisões e visão do negócio como um todo.

* Frase de impacto: "Você só pode melhorar aquilo que pode gerenciar, só pode gerenciar aquilo que pode medir e só pode medir aquilo que realmente conhece como é executado."

## BPMN - Business Process Modeling Notation

Notação BPMN especifica o processo de negócio em um diagrama que é fácil de ler tanto para os usuários técnicos quanto para os usuários de negócios. É intuitivo e permite a representação de detalhes complexos do processo. BPMN serve como uma linguagem padrão, colocando um fim na lacuna de comunicação entre a modelagem do processo e sua execução. Por este motivo e considerado hoje a lingua franca para comunicação no mundo dos negócios.

* Resumindo:
  Desenvolver uma visão clara sobre o projeto de entendimento "universal"

* Elementos

    * Elementos de fluxos:
        São esses os elementos que definem quando inicia e quando termina um processo, as tarefas humanas ou de sistema, que estão envolvidas e os desvios
            * Tarefas;
            * Eventos;
            * Representa desvios do fluxo.

    * Raias:
        Fazem a organização e definição de departamentos dos que irão participar do processo. São conhecidos como containers de elementos de fluxo.
            * As rais definem as responsabilidades dentro do processo;
            * A raia também é utilizada para facilitar a organização e visualização dos elementos de cada integrante do processo.

    * Piscina:
        Container que define certa estrutura, um contexto, como uma empresa, e dentro deste grupo há várias raias.
        
    * Conectores:
        Os elementos de fluxo não podem estar sozinhos, eles precisam de comunicação, e isso ocorre com os conectores. Para isso é possível fazer uma troca de mensagens, uma simples conexão ou uma associação de certos elementos.
            * Troca de mensagem;
            * Fluxo de sequência (Concetor mais simples);
            * Associação (Liga dados a tarefas)

    * Elementos de dados
        Os elementos de dados representam as formas de armazenamento e utilização dos dados (input e output).
            * Descrevem as entradas e saidas do processo
    
    * Artefatos:
        São utilizados para tornar o fluxo de diagrama mais claro.
        * São as representações da documentação

* Veja abaixo, uma representação completa dos elementos separados em grupo. (Imagem retirada do Heflo.com)


![alt text](elementos_bpmn.png "Elementos BPMN")


* Veja abaixo, um exemplo simples de um BPMN:
![alt text](BPMN-exemplo-tele-entrega-pizzaria.png "Exemplo BPMN")

## Métodos ágeis


### Users Stories


## FAQ - Engenharia de software

![alt text](head.png "HEAD FAQ")
![alt text](faq_1.png "FAQ")
![alt text](faq_2.png "FAQ")

Sobre produtos

![alt text](faq_3.png "FAQ PRODUTES")
