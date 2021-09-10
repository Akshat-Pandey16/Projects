rows=5
i,j,k,m=1,1,1,1
while i<=rows:
    for j in range(0,rows-i):
        print(" ",end= " ")
    for k in range(0,2*i-1):
        print("x ",end=" ")
    print("\r")
    i+=1
