def fib(n):
  print ('fib(%d)' %n)
  if n <= 2:
    return 1
  #bad O(2**n)
  return fib(n-1) + fib(n-2)

print (fib(8))
