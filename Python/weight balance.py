# https://www.codechef.com/submit/WEIGHTBL


for i in range(int(input())): # number of test case
    l=list(map(int,input().split())) # taking inputs in a list
    inc=l[1]-l[0]
    minR=l[2]*l[4]
    maxR=l[3]*l[4]
    if(inc==minR or inc==maxR or (inc>minR and inc<maxR)):
        print(1) 
    else:
        print(0)