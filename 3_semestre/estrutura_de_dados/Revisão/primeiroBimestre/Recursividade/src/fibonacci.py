def fibo(c):

    # Print de testes para ver os números calculados    
    print(c)

    if c <= 2:
        return 1
    else:
        return fibo(c - 1) + fibo(c - 2)

print("Fibonacci(6) = %d" %(fibo(6)))