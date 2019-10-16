def quicksort(lista):
    if len(lista) <= 1: 
        return lista
    
    pivô = lista[0]
    iguais  = [x for x in lista if x == pivô]
    menores = [x for x in lista if x <  pivô]
    maiores = [x for x in lista if x >  pivô]
    return quicksort(menores) + iguais + quicksort(maiores)

print (quicksort([2, 7, 0, 3, 4, 9, 8, 1, 5, 6]))