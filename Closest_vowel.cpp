#include<bits/stdc++.h>
using namespace std;
int power(long long x, unsigned int y, int p)
{
    int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0;
 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
        
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
int main(){
int t;
cin>>t;
while(t--)
{ 
    long long m = 1000000007;
    int n,c=0;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='c' || a[i]=='g' || a[i]=='l' || a[i]=='r')c++;
    }
    if(c==0){
        cout<<1<<endl;
    }
    else cout<<power(2,c,m)<<endl;
  }
}