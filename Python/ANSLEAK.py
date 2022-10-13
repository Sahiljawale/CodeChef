from random import randint
def leakans(a, n, m, k):
  ans = [0]*n
  for t in range(n):
    g = a[t][t]
    ans[t] = g
  return ans

test = int(input())
for i in range(test):
  n, m, k = map(int, input().split())
  a = []
  for j in range(n):
    p = list(map(int, input().split()))
    a.append(p)
  z = leakans(a, n, m, k)
  print(*z)