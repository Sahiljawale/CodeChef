for _ in range(int(input())):
  n,k=map(int,input().split())
  l=list(map(int,input().split()))
  l.sort()
  ans=0
  for i in range(k):
    if l[i]>0:  #if ele is greater than 0 stop
      break
    elif l[i]<0:  #if not then make it postive
      l[i]*=-1
  for i in range(n): 
    if l[i]>0:   # add all postive ele from list 
      ans+=l[i]
  print(ans)
