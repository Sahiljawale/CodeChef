#Racing Horses
for _ in range(int(input())):
  n=int(input())
  l=list(map(int,input().split()))
  l.sort()
  m=l[1]-l[0]
  for j in range(1,n):
    if l[j]-l[j-1]<m:
      m=l[j]-l[j-1]
  print(m)
