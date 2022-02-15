for _ in range(int(input())):
    n=int(input())
    s=input()
    a,b=0,0
    for i in s:
        if i=='0':
            a+=1
        else:
            b+=1
    if(n%2==0):
        if a==b:
            print("YES")
        elif(a%2==0 and b%2==0):
            print("YES")
        else:
            print("NO")
    else:
        print("YES")
    
