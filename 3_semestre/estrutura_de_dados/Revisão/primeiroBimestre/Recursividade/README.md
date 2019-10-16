# Revisão - Recursividade

Algoritmos recursivos tem uma característica bem interessante. São problemas grandes, que apresentam o mesmo problema várias vezes, em escala menor.

Um exemplo deste tipo de problema é o algoritimo da sequência de Fibbonaci, que a cada iteração há uma nova estrutura dos mesmos passos já feitos anteriormente.

# Questões

* Que tipo de problema os algoritmos recursivos são capaz de resolver ?
    * R: Os algoritmos recursivos são capazes de resolver problemas que podem ser divididos em instâncias menores do mesmo problema

* Veja o código abaixo
```c
int maxi (int n, int v[]) {       
    int m = v[0];
    for (int j = 1; j < n; ++j)
        if (v[j-1] < v[j]) 
            m = v[j];
    return m;
}
```

Faz sentido trocar `m = v[0]` por `m = 0` ?
    
* R: Não, isso porque nem sempre o menor valor será menor ou igual a 0, então é interessante manter como primeiro elemento um valor presente no array.

> O código acima pode ser usado para que você entenda que uma boa análise dos algoritmos, considerando diferentes casos pode ser útil na solução de vários problemas.

# Reconhecendo funções recursivas

Abaixo segue um roteiro que ajuda identificar se uma função é recursiva ou não (Retirada do livro de Paulo Fioloff)

* 1° - Identifique o que a função deve fazer;
* 2° - Identifique o menor caso e aplique para verificar se a função se encaixa;
* 3° - Após identificar o menor caso, faça a aplicação de um caso maior, para testar os resultados de retorno.
