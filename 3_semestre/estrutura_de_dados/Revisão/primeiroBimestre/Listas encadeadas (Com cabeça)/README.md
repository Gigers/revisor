# Listas encadeadas com cabeça

Como visto anteriormente, os arrays em C apresentam alguns problemas. E para resolve-los, foram implementadas novas estruturas,  como também foi dito anteriormente.

Uma das estruturas que foram implementadas para a solução dos problemas são as listas encadeadas, que resolvem dois grandes problemas, além de vários outros problemas menores encontrados nos arrays, e são eles:

## Grandes problemas resolvidos

* Alocação dinâmica:
    * Com esta estrutura não há mais o problema de alocações estáticas, já que esta estrutura permite a alocação dinâmica de memória;
    * Desta forma não é mais necessário adicionar uma quantidade X de elementos sem saber se eles realmente serão utilizados, isso porque a alocação é feita de acordo com a necessidade;

* Desempenho:
    * O desempenho para a adição em listas encadeadas é muito melhor que em Arrays, isso porque não é necessário percorrer toda a lista para a adição.
    * A adição sempre é feita no início para evitar de percorrer toda a lista.

# Lista

Até aqui vimos vantagens e desvantagens, porém não foi feita a definição do que são listas. Listas básicamente são estruturas que contém elementos colocados de forma sequêncial

Exemplo:
O array é uma lista, pois aloca os valores sequêncialmente um atrás do outro, físicamente.

Mas não necessáriamente uma lista precisa estar um ao lado do outro, pode existir por exemplo, listas que tenham elementos em lugares distintos, porém vinculados por algum rótulo ou endereço, e essas são as listas encadeadas.

Elementos que estão gerando uma sequência utilizando rótulos que dizem ao elemento atual qual será o próximo elemento

# A lista e as células

Bom, agora que foi entendido como funciona uma lista, vejamos como funciona uma lista encadeada. Essa é uma lista que possuí dentro de si células (Elementos de uma lista).

[Abstração de uma lista encadeada](https://drive.google.com/file/d/0BwQVdunN4yJBeDZIbU1CaDR5djg/view)

# Operações

As operações básicas nas listas encadeadas são:

* Busca (Utilizada em vários casos para adicionar e remover elementos);
* Adição;
* Remoção;
* Exibição.

# Códigos

Os códigos de demonstração, estão na pasta <code>src</code>