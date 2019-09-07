# Busca em vetores

O problema: O problema consiste em encontrar o elemento <code> X </code> no vetor <code> V </code>, ou seja encontrar um índice que satisfaça V[k] == X.

Vale lembrar que o problema faz sentido apenas se o tamanho do vetor seja diferente de 0 (v[0..n-1] != 0), isso porque caso seja 0, o vetor estará vazio.

Para a implementação, é necessário tomar uma decisão de projeto, que tem como base a questão: O que fazer se <code> X </code> não está no vetor ? 

As buscas são divididas, e essas são definidas pelo tipo de dado, onde os dados podem ser estruturados (vetor, lista, árvore) ou não estruturados.

 * Obs: Consule a guia <code> ../src/busca </code> para ver os exercícios de busca