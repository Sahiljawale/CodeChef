from math import log2 as lg
tc= int(input())
for i in range(tc):
    n=int(input())
    lwr=int(lg(n))
    if n==1:
        print(1)
        continue
    if lg(n)-lwr==0.0:
        ans=n-(2**(lwr-1))
        print(ans)
    else:
        a=n-(2**(lwr))+1
        b=(2 ** (lwr))-(2** (lwr-1))
        print(max(a,b))
