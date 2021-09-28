def natnum(a):
    if a>=1:
        natnum(a-1)
        print(a)
    return 1

a=int(input("Enter number : "))
natnum(a)

