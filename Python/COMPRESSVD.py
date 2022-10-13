def answer_finder():
    n = int(input())
    a = input()
    a = a.split()
    if n == 1:
        print(n)
    
    elif n ==2:
        if a[0] == a[1]:
            print(1)
        else:
            print(2)
    else:
        count = 0
        for i in range(1,n):
            if a[i] == a[i-1]:
                a[i]=a[i-1]
                count+=1
                
            elif  i != n-1 and a[i] == a[i+1]:
                count+=1
                a[i]=a[i-1]
                
        
        print(len(a)-count)

test_cases = int(input())

while test_cases:
    test_cases -= 1
    answer_finder()
