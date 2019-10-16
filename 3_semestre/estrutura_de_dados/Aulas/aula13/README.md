# Aula 11/10/2017 

"As vezes, coisas ruins, são boas de serem aprendidas", Masanori, Fernando.

## Algoritimo de enumeração

* Gera (2 ^ n) - 1 elementos

Veja o tamanho dos valores gerados por este algoritimo

```python
n = 10
2 ^ n -1 # Output: 1023

n = 100
2 ^ n - 1 # Output: 1267650600228229401496703205375
```

### Porque estudar ?
* 1° - Pode ser que este seja a única forma de resolver o problema;
* 2° - Testes com quantidades pequenas de possibilidades;

### Algoritimo de permutação

Este algoritimo resolve problemas diferentes do algoritimo de enumeração!

n! >>> (2 ^ n) - 1

n fatorial é muito maior que (2 ^ n) - 1. Veja o exemplo abaixo:

```python
import math
math.factorial(10) #Output: 3628800

n = 10
2 ** n - 1 # Output: 1023
```

# Busca de palavras em um texto

* Forma tradicional:
    * Percorrer todos os elementos até encontrar
    * O pior caso pode ser:
        * <code>{
            n = letras;
            m = palavra procurada;
            Gerando: n * m
        }</code>

Para resolver este problema utiliza-se o boyer-moore

Este algoritimo trabalha com saltos, ele básicamente pula uma quantidade de casas equivalente a posição em que uma letra da palavra foi encontrado no texto análisado.

* Pior caso de boyer-moor: m * n
Isso porque no pior caso não será utilizado o salto, ele ocorre quando há no texto as mesmas letras que na palavra. Exemplo: 

Palavra comparada:
<code> @xxxxxxxx </code>
<code> xxxxxxxxx </code>

Busca sequêncial: 31 * 10
Boyer-moore: 3 * 10