t=int(input())

for i in range(t):
    T=""
    length=int(input())
    N=input()
    i,j=0,length-1
    while(j>=i):
        
        T=N[i]+T if N[i]=='0' else T+N[i]
        i=i+1
        
        if(i-1==j):
            break
        
        T=T+N[j] if N[j]=='0' else N[j]+T
        j=j-1
            
    print(T)
        
