n,atm=map(float,input().split())
n=int(n)
if (n+0.5<=atm and n%5==0):
    print(float(atm-n-0.5))
else:
    print(float(atm))
