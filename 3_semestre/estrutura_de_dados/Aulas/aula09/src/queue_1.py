'''

    Regras
    Implementação de uma fila utilizando vetor;
    O primeiro elemento da fila é: p
    E o ultimo elemento da fila é: u
    Conteúdo é: y

    Para adicionar usa-se: [u++] = y;
        * [u++] = y, equivale:
            u = u + 1;    
            fila[u] = y;
    Para remover usa-se: [p++];
        * [p++] , equivale:
            fila[p];
            p = p + 1;            

    Ao trabalhar com arrays, as filas tem valores pré-definidos. E é importante lembrar que 
    ao inserir um elemento em uma lista, estamos fazendo a inserção no final.
    Lembre-se que aqui a natureza dos elementos é irrelevante. 
'''


fila = []

def inserir(n):

    fila.append(n)

def excluir():

    if(len(fila) != 0):
        del fila[0]
    else:
        print("A lista está vazia")

def exibe():

    if(len(fila) != 0):
        for i in range(0, len(fila)):
            print(fila[i])

    else:
        print("Hey, a lista está vazia")


inserir(23)

exibe()

excluir()
