# Aula 5 - Ressalvas para a P1

<!-- Pesquisar e verificar se as palavras estão corretas -->
1. 
R: Sistemas de B.I tem agregações massivas, para manter agregações massivas é necessário diminuir o número de joins, fazendo com que seja necessário realizar a denormalização.
Pode-se denormalizar pois isso não fere a integridade do sistema pois sistemas de B.I é `read-only`.
Em sistemas operacionais tradicionais a normalização é feita para evitar duplicidade.

2. 
R: Através de uma tabela ponte (Isto no caso de uma árvore onde cada um tem apenas um filho)

3. 
R: Problemas com schemas pouco flexíveis, o que também gera consultas muito difícies de serem criadas e mantidas. Schema flexível é a solução.

4.
R: 
    - Schema dinâmico e flexível (Aumenta velocidade de desenvolvimento);
    - Escalabilidade horizontal.

5.
R:
    - Escalabilidade horizontal: A capacidade de processamento é dividida em várias máquinas (Commodit).
    - Escalabilidade vertical: Muita capacidade em um único computador

6.
R: 
    - A-) OpenSource;
    - B-) Schema Flexível e dinâmico;
    - C-) Apresenta escalabilidade horizontal;
    - D-) Atendem necessidades específicas.

7.
R:
    - Not only SQL
        - A-) Open Source;
        - B-) Schema flexível e dinâmico;
        - C-) Escalabilidade horizontal;
        - D-) Atende necessidade específica
        - E-) NoSQL não é tecnologia e sim tendência.

8. 
R: A deficiência das tuplas para agilidade no desenvolvimento e velocidade no acesso. Preciso de ORM e transação, neste caso.
Ex. Slide 36 (AAA)

9.
R: É uma relaxação da consistência forte para obter maior escalabilidade. Funciona em BD's distribuídos, cada nó secundário recebe a atualização dos primários em instantes. **Cuidado**: Eventualmente consistente em PT-BR, pode significar "Pode não ocorrer"

10.
R: Consistência, Disponibilidade, Particionamento são três atributos para BD's distribuídos que não ocorrem ao mesmo tempo, no máximo dos atributos podem ser simultâneos. (Só pode ser dois ao mesmo tempo)

11.
R: Big Table e Dynamo são os primeiros NoSQL, com artigo científico publicado, porém eles são proprietários. Então surgiu uma iniciativa (Apache Hadoop) para ter uma plataforma distribuida aberta.

12.
R: Pois são bancos para necessidades específicas. Seria como comparar uma escavadeira com uma empilhadeira.
- Neo4J;
- Redis;
- Cassandra;
- MongoDB;

13.
R: 
- Relacional (ORM) (bottom up) - Começa na tupla em direção a aplicação;
- MongoDB - (top down) - Começa na aplicação para depois definir os documentos nas `collections`.

14.
R: Competitivo para aplicações bem definidas, ruim para aplicações grandes e genéricas.
OBS: MongoDB 4.0 agora transação multi documento.

15.
R: Como operações atômicas são feitas na versão 3.X

16.
R: No dicionário em Python, não mantém a ordem dos elementos, por isso passo uma lista de tuplas para um comando de sort com chave composta.
OBS_1: Na versão 3.6 já tem a característica de manter a ordem

17.
R: Update quando o documento da existe, e insert quando o documento ainda não existe

18.
R: 
- 1:1 -> Se funcionário:CV
    - Se CV não é grande, ou acessado através do funcionário, melhor embutir.
    - Porém caso tenha a necessidade de acessar separado, melhor dividir;
- 1:N -> Se a cardinalidade de N for baixa, melhor embutir (E.g. Comentários de um post)
- N:N - Idem Autores: livros

Forma de gravação no EasyTaxi: `Fire and Forget`
- Material de apoio: AAA - https://pt.slideshare.net/fmasanori/hello-nosql-world