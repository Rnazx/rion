n=int(input("Enter the no. of rows "))
k=4
l=0
for i in range(1,n+1):
    s=i
    for j in range(1,i+1):
        if (j==1): print(i,end=' ')
        else:
            print(s+k-l,end=' ')
            s=s+k-l
            l=l+1
    l=0
    k=4
    print()
