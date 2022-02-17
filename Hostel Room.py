for _ in range(int(input())):
    n,x=map(int,input().split())
    l=list(map(int,input().split()))
    a,r=x,x
    for i in range(n):
        r+=l[i]
        a=max(a,r)
    print(a)
