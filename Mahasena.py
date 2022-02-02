n=int(input())
l=list(map(int,input().split()))
e,o=0,0
for i in l:
  if i%2==0:
    e+=1
  else:
    o+=1
if e>o: print("READY FOR BATTLE")
else:  print("NOT READY")
