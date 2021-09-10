i,j,k=1,1,0
rows=5
for i in range(rows):
    for j in range(rows-i):
        print(" ",end=" ")
    for k in range(0,2*i-1):
        print("x ", end =" ")
    print("\r")
    
