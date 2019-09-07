'''
Para entendermos como uma pilha funciona façamos uma analogia com o mundo real:
    Você tem uma pilha de pratos e que adicionar mais pratos a ela, em qual posição
    essa adição será feita ? Em cima, pois é mais facil adicionar direto no topo.
    E na hora de lavar, você vai por onde, por baixo ? Logicamente não, você começa também
    pelo topo.
    Assim é possível concluir que todas as operações feitas nas pilhas são feitas no topo 

Pilhas
    Adição: No topo
    Exclusão: No topo

    (Last in, First Out)  - LIFO

Operações:
    Quantidade de elementos na pilha;
    Qual o elemento do topo da pilha;
    Empilhar
    Desempilhar
    Verificar se a pilha está vazia
'''

class Pilha():
    def __init__(self):
        self.itens = []
    
    def verificaTopo(self):
        return self.itens[len(self.itens) - 1]

    def verificaVazia():
        return len(self.itens) == 0

    def empilhar(self, item):
        self.itens.append(item)
    
    def desempilha(self):
        self.itens.pop()

    def exibe(self):
        for i in range(0, len(self.itens)):
            print(self.itens[i])

pilha = Pilha()

for i in range(0, 15):
    pilha.empilhar(i * 5)

pilha.exibe()

print("Eliminando o elemento do topo")

print("Exibindo elementos depois de retirar o topo")
pilha.exibe()