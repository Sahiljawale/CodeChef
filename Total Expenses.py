for _ in range(int(input())):
  q,p=map(int,input().split())
  if q<=1000:
    ans=q*p
    print("%.6f" %ans)
  else:
    ans=q*p
    dic=ans*0.1
    res=ans-dic
    print("%.6f" %res)
