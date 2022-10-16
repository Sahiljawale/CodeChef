#include<bits/stdc++.h>
using namespace std;
const int M=1e9;
typedef long long int ll;
ll power(ll a,ll b){
  ll ans=1;
  while(b){
    if(b&1){
      ans=(a*1ll*ans)%M;
    }
    a=(a*1ll*a)%M;
    b>>=1;

  }
  return ans;
}
int main(){
 
    int t;
    cin>>t;
    while(t--){
      ll k,n,ans=0;cin>>n;
      vector<ll>v;k=(n/2)+(n%2!=0);string s;
      if(n==2) cout<<"NO"<<"\n";
      else if(n==4){cout<<"YES"<<"\n";
      cout<<2<<" "<<1<<" "<<4<<" "<<3<<"\n";
      }
      else if(n%2==0){
        cout<<"YES"<<"\n";
        for(int i=1;i<=k;i++){
         v.push_back(i);
       
      }
      v.push_back(n);ll y=n-1;
      for(int i=k+2;i<=n;i++){
        v.push_back(y);y--;
      }
      ll i1=n/2;ll i2=i1-2;
      swap(v[i1],v[i2]);
        for(auto i:v)cout<<i<<" ";cout<<"\n";
      }
      else{
      for(int i=1;i<k;i++){
         v.push_back(i);
       
      }
      v.push_back(n);ll y=n-1;
      for(int i=k+1;i<=n;i++){
        v.push_back(y);y--;
      }
      //ll num=5;
      //cout<<ans<<"\n";
      cout<<"YES"<<"\n";
      for(auto i:v)cout<<i<<" ";cout<<"\n";
      }
    }
}
