#Definição de dicionario
dic = {}

#Definição da função
def fib(n):
  print ('fib(%d)' %n) #Print para mostrar o valor de n
  if n <= 2:
    return 1
  else:
    if n not in dic:
      dic[n] = fib(n - 1) + fib(n - 2)
    return dic[n]
    
print (fib(8))


