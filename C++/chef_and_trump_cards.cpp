
#include<bits/stdc++.h>
using namespace std;
long long int facto=1;
long long int  pow(long long  a, long long  b, long long mod) {
    long long  x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}



// Returns n^(-1) mod p 
 long long modInverse( long long n, long long int p) 
{ 
	return pow(n, p - 2, p); 
} 

// Returns nCr % p using Fermat's little 
// theorem. 
 long long nCrModPFermat( long long n, 
								long long int r, long long int p) 
{ 
	// Base case 
	if (r == 0) 
		return 1; 

	// Fill factorial array so that we 
	// can find all factorial of r, n 
	// and n-r 
 long long fac[n + 1]; 
	fac[0] = 1; 
	for (int i = 1; i <= n; i++) 
		fac[i] = (fac[i - 1] * i) % p; 

	return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}

long long int fact(int x)
{
    if(x==1)
    return facto;
    facto*=x;
    return fact(x-1);
}
int main()
{
    long long int i,j,n,m,arr[1000000],t,maxm=0,val,mod=1e9+7,val1,val2,temp,x,y,val3;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        maxm=0;
        val=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        cout<<2<<"\n";
        else 
        {
        for(i=0;i<n;i++)
        {
            maxm=max(maxm,arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==maxm)
            val++;
        }
        
        val1=pow(2,n,mod);
        if(val%2==0)
        {
            facto=1;
            temp=val/2;
            val2=pow(2,n-val,mod);
            val3=nCrModPFermat(val,temp,mod);
           cout<<(val1-((val3*val2)%mod)+mod)%mod;
           
             
        }
        else 
        cout<<val1;
        cout<<"\n";
        }
    }
    return 0;
}
