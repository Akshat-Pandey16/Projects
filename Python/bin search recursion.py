
def bin_search(l,key,left,right):
    mid=(left+right)//2
    if left>right:
        return -1
    else:
        if l[mid]==key:
            return mid
        elif l[mid]>key:
            return bin_search(l,key,left,mid-1)
        elif l[mid]<key:
            return bin_search(l,key,mid+1,right)

l=[1,2,3,4,5,6,7,8,9,10]
index=bin_search(l,4,0,len(l)-1)
print("Element found at index : ",index)
