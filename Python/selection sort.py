l=[10,9,8,7,6,5,4,3,2,1]
'''l1=[]

while not len(l)==0:
    l1.append(min(l))
    l.remove(min(l))
print(l1)'''

for i in range(len(l)-1):
    for j in range(i+1,len(l)):
        if l[j]<l[i]:
            l[i],l[j]=l[j],l[i]
print(l)