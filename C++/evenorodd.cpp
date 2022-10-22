#include<bits/stdc++.h>
using namespace std;


void solve(){

  int n;
  
  int e= 0;
  int o= 0;

  if(n%2 == 0){
    e = n/2;
    o = n/2;
  }else{
    e = n/2;
    o= (n+1)/2;
  }
  if(n<=1){
    cout<<"0"<<endl;
  }else{
    cout<<e*o*2<<endl;
  }

}
int main(){
  int tc;
  cin>>tc;

  while(tc--){
    solve();
  }
  
  return 0;
}
