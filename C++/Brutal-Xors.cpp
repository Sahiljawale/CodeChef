#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1e9+7;

int main(){
   
   int t;
   cin>>t;
   while(t--){
     ll n,ans,y,j;
     cin>>n;
     ll x=sqrt(n);
     //j=n;
     y=__builtin_popcountll(n);
     
     if(n==1)ans=1;
     else if(n==2)ans=2;
     else{
       if(y==1)ans=(2*n-1)%N;
       else {
            ll x=log2(n);
            ans=pow(2,x+1);
            ans=ans%N;
       }
     }
     cout<<ans<<endl;
   }
}
