# Programação linear

Este repositório guarda exercícios resolvidos de programação linear utilizando Python.

## Modelagem

Diversos exercícios de modelagem serão realizados, então para iniciar, uma definição de modelos de computadores é apresentada abaixo:

> Modelo de computador é um conjunto de relações matemáticas e hipóteses lógicas implementadas em computador como uma representação de um problema real da tomada de decisão. Leopoldino de Andrade

Para a criação de um modelo, é recomendado que os passos abaixo sejam seguidos:

- 1° - Definir as variáveis de interesse;
- 2° - Definir a Função Objetivo (Lembre-se o objetivo não combina com a função);
- 3° - Escrever as restrições;
- 4° - Definir as restrições de não negatividade.

Com estes conceitos básicos, verifique os exercícios realizados (Estes seguem o livro A recomendado abaixo).

`OBS`: Os exercícios resolvidos em Python utilizam a biblioteca puLP e quando necessário resolver o GLPK

## Resolução do modelo

Neste processo deseja-se pesquisar os valores ótimos da função objetivo. 

Para facilitar este processo, algumas etapas foram descritas, estas listadas abaixo:

- 1° - Enumerar todas as equações (Bottom-Up)
	- Aqui as equações são todas aquelas levantadas na modelagem, incluindo as restrições.
- 2° - Utilizar as equações para traçar as retas
	- Se necessário transformar as inequações em equações
	- Também realizar testes (Desigualdade) com pontos aleatórios presentes na restrição.
- 3° - Pegar os valores gerados nos pontos e aplicar na função objetivo. Pronto, escolha o resultado que melhor se adequa ao objetivo.

> Caso o grafico esteja com problema de escala, utilize a intersecção Z das retas.


#### Leituras recomendadas :bookmark_tabs: (Caso você tenha mais recomendações, faça a adição aqui =D)

- (A) Pesquisa Operacional na tomada de decisões;


