a=int(input("Enter Physics Marks : "))
b=int(input("Enter Chemistry Marks : "))
c=int(input("Enter the Biology Marks : "))
d=int(input("Enter the Computer Marks : "))
e=int(input("Enter the Mathematics Marks : "))
marks = a+b+c+d+e
percent=int((marks/500)*100)
print("Total Marks is : %d" %marks)
if percent>=90:
    print("Grade = A")
elif percent>=80:
    print("Grade = B")
elif percent>=70:
    print("Grade = C")
elif percent>=60:
    print("Grade = D")
elif percent>=40:
    print("Grade = E")
else:
    print("Grade = F")
