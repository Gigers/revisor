# Engenharia de software 2 - Fatec SJC (Revisão)

## Introdução

A engenharia de software (ES) preocupa-se com as teorias, métodos e ferramentas para desempenhar da melhor forma possível a criação de softwares

Isso porque o mercado atualmente depende de softwares para se manter, e cada vez mais há sistemas sendo controlados por softwares, e ainda, uma parte consideral do PIB de vários países são voltados para os softwares.

Perceba que a engenharia de software, busca utilizar métodos e teorias que se encaixem nos contextos organizacionais e financeiros das empresas.

Esta área, não trata apenas dos aspectos técnicos do desenvolvimento de software, e sim, de todo o ecossistema que rodeia esta atividade, ou seja, ela se preocupa e revisa, ferramentas, métodos e teorias que dão apoio ao desenvolvimento de software.

A importância desta engenharia tem crescido muito, por conta da necessidade do mercado e das pessoas de terem softwares mais rápidos, e mais confiavéis.

O interessante dos trabalhos da ES é que não há um padrão universal, aplicável em todos os projetos, cada projeto utiliza certas técnicas, que em casos, não irão se aplicar a outros projetos

Quando não há a engenhria de software, tem-se problemas com o gerenciamento e manutenção do sistema desenvolvido.

### Custos de software

Em sistemas de computador, geralmente, o software acaba sendo a parte com maior custo, isso porque além do hardware barato, há que o software tem custos até o final de sua vida útil. Perceba que em softwares com vidas muito longas, o preço da manutenção pode se tornar muitas vezes o valor de compra do mesmo.

Então a engenharia de software preocupa-se com que os custos sejam efetivos.

### Produtos de software

Estes podem ser divididos em duas partes.

* Produtos genéricos
    * Estes são os softwares que são comercializados e vendidos para qualquer cliente com desejo e poder de compra;
    * As específicações e decisões de mudanças são ditas pelo desenvolvedor;
    * Exemplos: Softwares CAD, sistemas operacionais, entre outros.

* Produtos sob encomenda 
    * Este tipo de software é encomendado por um cliente que deseja resolver suas próprias necessidades;
    * As específicações e decisões são ditas pelas prioridades do cliente;
    * Exemplos: Sistemas de tráfego aéreo, sistemas de monitoramento de trafego, entre outros.

### Atividades de processo de software

Esses são passos que a frente, dentro dos métodos demonstrados, serão melhores desenvolvidos e melhor explicados, este tópico é apenas uma introdução ao processo de software.

* 1° - Especificação
    * Passo onde os clientes e engenheiros definem o software que será produzido;
* 2° - Desenvolvimento
    * Nesta etapa o software é projetado e programado;
* 3° - Validação
    * Passo onde o software é validado, aqui é garantido que os requisitos levantados durante a especificação e desenvolvimento foram cumpridos;
* 4° - Evolução
    * Por fim a evolução, ela ocorre quando o software já está funcionando, porém o cliente precisa de mudanças e melhorias para que o sistema se adeque as novas formas de trabalho ou ao mercado.

### Problemas que podem afetar um software

* Heterogeneidade
    * Cada vez mais é exigido do software que ele seja o mais distribuido possível e que ele esteja nos mais diferentes dispositivos e computadores;
* Mudanças de negócio e social
    * O crescimento rápido das empresas fazem com que o software cresca junto com a empresa, assim para que ele não seja um problema, e sim uma solução;
* Segurança e confiança
    * É exigido do software que ele seja confiável, sempre esteja disponível e que garanta a segurança dos dados.

### Alguns tipos de software

* 1° - Aplicações stand-alone
    * São aplicações que são executadas em um único PC, e não necessitam estar contectadas a rede.
* 2° - Aplicações interativas baseadas em transações
    * São aplicações alocadas em computadores remotos, e nestes os usuários fazem o acesso de seus próprios computadores ou terminais. Exemplo: Aplicações web para e-commerce
* 3° - Sistemas de controle embutidos
    * São sistemas de software que controlam e gerenciam dispositivos de hardware
* 4° - Sistemas de entretenimento
    * Sistemas para uso pessoal, utilizado para entreter os usuários.

### Fundamentos da engenharia de software

Foi citado acima que, não há um único padrão que se adequa a todos os projetos, foi visto que o que ocorre é a utilização de cada modelo de processo de software (Discutido no tópico a frente) em momentos em que o projeto permite.

Porém há alguns fundamentos que são a base, e que devem ser utilizados em qualquer modelo de software, e são eles:

* 1° - Conhecer e entender os requisitos e especificações é de extrema importância para o desenvolvimento do projeto;
* 2° - Gerenciar e enteder o projeto é muito importante. Isso porque não basta entender somente gerenciar, é necessário entender para que o gerenciamento seja efetivo;
* 3° - Levar em consideração o desempenho e a segurança. Esses são tópicos listados como desafios da engenharia de software, e que devem sempre ter a atenção em um projeto;
* 4° - Fazer a reutilização de software é muito importante, e deve ser feito sempre que possível.

## Rational Unified Process - RUP

O RUP é conhecido como uma metodologia que destaca-se por seguir as 'melhores práticas' de desenvolvimento de software. Entenda que as 'melhores práticas' no contexto de engenharia de software significa:

* a-) Desenvolvimento iterativo;
* b-) Gerenciamento de requisitos; 
* c-) Arquitetura baseada em componentes;
* d-) Organização do projeto em estruturas estáticas e dinâmicas;
* e-) Especificação do software baseado em modelagem visual;
* f-) Verificação constante de qualidade.


## Processos de negócios

## Modelagem de processos de negócios

## Eriksson-Penker

## BPM

* O que é ?

## BPMN - Business Process Modeling Notation

<!-- Explicar o que é -->

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

## Métodos ágeis


### Users Stories


## FAQ - Engenharia de software

![alt text](head.png "HEAD FAQ")
![alt text](faq_1.png "FAQ")
![alt text](faq_2.png "FAQ")

Os atributos essenciais de um bom software

![alt text](faq_3.png "FAQ PRODUTES")