# Revisão - Recursividade

Algoritimos recursivos tem uma caracteristica bem interessante. São problemas grandes, que apresentam o mesmo problema várias vezes, em escala menor.

Este tipo de problema é chamado de recursivo

Um exemplo deste tipo de problema é o algoritimo de Fibbonaci, que a cada iteração há uma nova estrutura dos mesmos passos já utilizados anteriormente.


# Questões
* Que tipo de problema os algoritimos recursivos são capaz de resolver ?
    * R: Os algoritimos recursivos são capazes de resolver problemas que podem ser divididos em instâncias menores do mesmo problema

* Veja o código abaixo
<code>
        int maxi (int n, int v[]) {       
            int m = v[0];
            for (int j = 1; j < n; ++j)
              if (v[j-1] < v[j]) 
                m = v[j];
            return m;
        }
</code>
Responda: Faz sentido trocar <code>m = v[0]</code> por <code>m = 0</code> ?
    * R: Não, isso porque nem sempre o menor valor será menor ou igual a 0, então é interessante manter como primeiro elemento um valor presente no array.


# Reconhecendo funções recursivas
Abaixo segue um roteiro que ajuda identificar se uma função é recursiva ou não (Retirada do livro de Paulo Fioloff)

* 1° - Identifique o que a função deve fazer;
* 2° - Identifique o menor caso e aplique para verificar se a função se encaixa;
* 3° - Após identificar o menor caso, faça a aplicação de um caso maior, para testar os resultados de retorno