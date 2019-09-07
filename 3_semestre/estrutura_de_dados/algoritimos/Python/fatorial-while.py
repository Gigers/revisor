def fat(n):
    
    result = 1
    while n > 0:
        result = result * n
        n = n - 1
    return result


# testes
print("Fatorial de 3: ", fat(3));
