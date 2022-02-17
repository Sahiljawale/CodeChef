for _ in range(int(input())):
  b,c=map(int,input().split())
  if c<b:
    print("Car")
  elif b<c:
    print("Bike")
  else:
    print("SAME")
