n,k=map(int,input().split())
c=0
for _ in range(n):
  if int(input())%k==0:
    c+=1
print(c)
