# Segurança da informação - Revisão das atividades (2° bimestre)

<!-- Então você é um pirata forte ! chegou até aqui =D, continue, de agora em diante não há mais dor -->

## Criptografia

A criptografia consiste básicamente no processo de ocultação de informações utilizando um determinado algoritimo criptográfico, podendo este ser simétrico ou assimétrico (No âmbito abordado durante o curso)

### Simétrica

Este é um tipo básico de criptografia onde há apenas uma única chave que encripta e `des`encripta a mensagem que está sendo passada, um exemplo muito famoso deste tipo de criptografia é a `crifra de cesar`. As características gerais deste tipo de encriptação pode ser vista nos tópicos abaixo:

- Contém apenas uma chave de encriptação/`des`criptação;
- Rápida;
- Apresenta problemas na troca da chave.

Bem veja que acima, foi descrito que, há um problema na troca de chaves, isto porque por este método criptográfico utilizar apenas uma chave, caso esta caia em mãos erradas, pronto! Todo os segredos criados com aquela chave poderão ser vistos, e caso ocorra da chave ser utilizada para a garantia de autenticidade, esta propriedade também estará comprometida!

### Assimétrica

Para resolver o problema apresentado com os métodos simétricos de encriptação, o método a`ss`imétrico foi criado, neste existem duas chaves, uma pública e outra privada que normalmente são criadas no mesmo instante de tempo, sendo tratadas como completendos, umas das outras. Neste tipo de encriptação, a chave pública, pode ser distribuída para todos! O conteúdo encriptado por esta chave só poderá ser desencriptado pela chave privada, e o oposto também é válido.

### Considerações gerais sobre criptografia

Lembre-se que, para empresas o bem mais importante nos dias de hoje são as informações, e para garantir que estas não sejam utilizadas por qualquer agente não autorizado, deve-se utilizar encriptação. Uma fala muito interessante do Diego Aranha no `Mind the sec` que mostra como a criptografia deve ser tratada é: `A encriptação atualmente trata-se de controle! E não apenas de ocultação de informações`, perceba o quão importante passa a ser a criptografia para o controle dos ativos de uma empresa. Um ponto importante, citado na `ISO 27002/2013` é que, para a garantia de segurança é necessário ter processos e pontos de controle!.

## Controle de acesso

De acordo com a norma, o controle de acesso tem por objetivo limitar o acesso a recursos de processamento e informações, citando ainda que, `tudo é proibido, a menos que expressamente permitido`.

Existem diversas formas de realizar o controle de acesso, aqui vamos focar nas técnicas DAC, MAC e RBAC, descritas nas seções abaixo.

### Controle de acesso discrecionário (DAC)

Este é um método simples onde, que define o controle de acesso a objetos do sistema levando em consideração as descrições feitas pelo seu proprietário, isto através de usuários ou grupos de usuários.

### Controle de acesso obrigatório (MAC)

Este é um mecanismo que limita o nível de controle dos usuários sobre os objetos que eles próprios criam, ao contrário do que ocorre nos métodos `DAC`.

### Controle de acesso baseado em papéis (RBAC)

Este modelo, proposto em 1992, utiliza os papeis de cada usuário (Ou setor) para a criação de regras para quais conjuntos de recursos podem ser acessados. Considera-se que este é o mais fácil de ser implementado em empresas e sistemas.

### Considerações sobre o controle de acesso

Os controles definidos acima, podem ser levados em consideração tanto para o controle de lógico quanto físico da empresa, para o entendimento completo deste tópico, e sua aplicação nos projetos, é necessário que a empresa já tenha uma organização mínima, e também que haja uma classificação de importância de ativos para que assim os acessos possam ser definidos de uma forma mais acertiva, isto de acordo com a norma `ISO 27002/2013`.

Veja que, tudo isto foi implementado no projeto feito nas aulas! Para isto foi necessário a criação de processos, uma estrutura organizacional razoável e também uma definição prévia da importância de cada ativo para a empresa criada pelos alunos durante as aulas.