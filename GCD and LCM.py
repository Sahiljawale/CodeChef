import math
for _ in range(int(input())):
    a,b=map(int,input().split())
    gcd=math.gcd(a,b)
    print(gcd,int(a*b/gcd))
