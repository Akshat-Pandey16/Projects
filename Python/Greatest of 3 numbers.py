a=int(input("Enter the first number : "))
b=int(input("Enter the second number : "))
c=int(input("Enter the third number : "))

#code1 using nested if
print("\n")
print("Using nested if : ")
print("\n")
if a>b :
      if a>c :
          print("%d is the greatest number" %a)
      else :
          print("%d is the greatest number" %c)
elif b>c :
    if b>a :
        print("%d is the greatest number" %b)
    else :
        print("%d is the greatest number" %a)
else :
    print("%d is the greatest number" %c)

#code2 using if
print("\n")
print("Using if : ")
print("\n")
if a>b and a>c :
      print("%d is the largest number!" %a)
if b>a and b>c :
      print("%d is the largest number!" %b)
if c>a and c>b :
      print("%d is the largest number!" %c)

#code3 using elif
print("\n")
print("Using elif : ")
print("\n")
if a>b and a>c :
      print("%d is the largest number!" %a)
elif b>c :
      print("%d is the largest number!" %b)
else :
      print("%d is the largest number!" %c)

#code4 using if else
print("\n")
print("Using if else : ")
print("\n")
if a>b and a>c :
      print("%d is the largest number!" %a)
if b>c :
      print("%d is the largest number!" %b)
else :
      print("%d is the largest number!" %c)
 
