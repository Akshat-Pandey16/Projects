
def bin_search(l,key):
    low=l[0]
    high=len(l)-1
    flag=-1
    while low<=high:
        mid=int((low+high)//2)
        if l[mid]==key:
            print("Element found at index : %d" %mid)
            flag=0
            break
        elif l[mid]<key:
            low=mid+1
        elif l[mid]>key:
            high=mid-1
    if flag==-1:
        print("Element not found")

l=[1,2,3,4,5,6,7,8,9,10]
bin_search(l,11)
