# Vetores (Arrays)

Vetor é uma estrutura de dados que faz o armazenamento de uma sequência de dados do mesmo tipo, em posições consecutivas da memória.

# Caracteristicas (Em C)
    * Tamanho estático;
    * Estrutura de tipo único;
    * Tem problemas de otimização, quando implementados da maneira errada.

# Problemas

Neste tópico será discutido os problemas de procurar um objeto dentro de um vetor, estes problemas envolvem a correção, eficiência e elegância dos algoritimos.

Os problemas são:
 * Busca;
 * Inserção;
 * Remoção. 

 Imagine um vetor <code>numeros</code> declarada da forma <code>numeros[0..n - 1]</code>, onde se deve ter que <code>0 <= n <= T </code>, onde <code>n == 0</code> o vetor está vazio, e caso esteja <code>n == T</code>, o vetor está cheio