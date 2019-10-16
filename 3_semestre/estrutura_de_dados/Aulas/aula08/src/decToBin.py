bin = []

def decToBin(dec):
    
    while(True):
        
        if((dec % 2) == 0):
            bin.append(0)
        else:
            bin.append(1)

        dec = dec // 2

        if(dec == 0):
            break
            
decToBin(10)

while bin:
    print(str(bin.pop()), end= '')