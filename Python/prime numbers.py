a=int(input("Enter first number : "))
b=int(input("Enter last number : "))
for i in range(a,b+1):
    if b>1:
        for j in range(2,i):
            if i%j==0:
                break 
        else:
            print(i)