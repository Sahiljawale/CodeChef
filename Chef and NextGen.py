for _ in range(int(input())):
    a,b,x,y=map(int,input().split())
    if (x*y)>=(a*b):
        print("YES")
    else:
        print("NO")
