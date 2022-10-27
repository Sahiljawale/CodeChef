#define ll long long
#include <bits/stdc++.h>
using namespace std;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll m=n/2;
	    if(n==1) 
	    {
	        cout<<0<<endl;
	   }
	   else
	   {
	       if(n%2==0) cout<<(m*m)*2<<endl;
	       
	       else cout<<(m*m*2)+m*2<<endl;
	   }
	}
	return 0;
}
