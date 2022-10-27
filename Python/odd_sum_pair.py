for _ in range(int(input())):
    a,b,c = map(int,input().split())
    print('YES') if (a+b)%2==1 or (b+c)%2==1 or (a+c)%2==1 else print('NO')
