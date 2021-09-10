a=int(input("Enter the basic salary of the employ : "))
if a<=10000:
    h=.20*a
    d=.80*a
    gross=a+h+d
elif a<=20000:
    h=.25*a
    d=.90*a
    gross=a+h+d
elif a>20000:
    h=.30*a
    d=.95*a
    gross=a+h+d
print("Gross salary is : %.2f" %gross)
