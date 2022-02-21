notes=[100,50,10,5,2,1]
for _ in range(int(input())):
  m=0
  n=int(input())
  for i in notes:
    m=m+n//i
    n=n%i
  print(m)
