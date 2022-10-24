for _ in range(int(input())):
    a,b = map(int,input().split())
    print('yes' if a%2 == b%2 else 'no')