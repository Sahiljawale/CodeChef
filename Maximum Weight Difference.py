for _ in range(int(input())):
  n,k=map(int,input().split())
  l=list(map(int,input().split()))
  l.sort()
  if k<=n//2:
    print(abs(sum(l[:k])-sum(l[k:])))
  else:
    print(abs(sum(l[n-k:])-sum(l[:n-k])))
