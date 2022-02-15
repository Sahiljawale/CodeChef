for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    k=0
    for i in range(len(l)):
        Value=1+i+k
        if Value==l[i]:
            k+=1
    print(k)
