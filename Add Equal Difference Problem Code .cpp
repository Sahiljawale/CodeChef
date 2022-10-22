#include <iostream>
#define ll long long int
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int test; 
    cin>>test;
	while(test--){
	        ll n;
	        cin>>n;
	        ll temp;
	        map<ll,ll> mp;
	        for(ll i=0;i<n;i++){
	                cin>>temp;
	                mp[temp]++;
	        }
	        if(n<=2) cout<<0<<endl;
	        else{
	                ll mx=0;
	                for(auto x:mp){
	                        mx=max(mx,x.second);
	                }
	                if(mx==1) cout<<n-2<<endl;
	                else cout<<n-mx<<endl;
	        }
	}
	return 0;
}
