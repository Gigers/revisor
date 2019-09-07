# Nesta versão de fibonacci, o mecânismo usado para melhorar e resolver o problema 
# dos muitos números iguais sendo cálculados, foi adicionado um dicionário 
# para que neste fique armazenado os valores já cálculados
# Calculo menos valores, mas mesmo assim o tempo continua alto
# Pense antes de escolher utilizar o fibonacci recursivo =D

dic = {}

def fibo(c):
    
    # Print de teste
    print(c)

    # Caso base
    if c <= 2:
        return 1
    else:
        if c not in dic:
            dic[c] = fibo(c - 1) + fibo(c - 2)
        return dic[c]

print("Fibonacci(6) = %d" % (fibo(6)))