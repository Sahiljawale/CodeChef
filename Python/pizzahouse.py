list0 = list(map(int,input("\nEnter the number of houses and number of pizza shops with space ").strip().split()))[:2]
n=int(list0[0])
m=int(list0[-1])
list1 = list(map(int,input("\nEnter the X-coordinates of houses with space: ").strip().split()))[:n]
list2 = list(map(int,input("\nEnter the the X-coordinates of pizza shops with space: ").strip().split()))[:m]
list1.sort()
list2.sort()
d1=abs(list1[-1]-list2[-1])
d2=abs(list1[0] - list2[0])
if d1>d2:
  print(d1)
else:
  print (d2)