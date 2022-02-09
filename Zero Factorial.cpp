#include<bits/stdc++.h>
using namespace std;


void solve(){
  int n;
  cin>>n;
  int c=5;
  int zero=0;
  while(n/c>0){
    zero+=n/c;
    c*=5;
  }
  cout<<zero<<endl;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
