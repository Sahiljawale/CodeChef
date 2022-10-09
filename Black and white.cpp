#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n],sum_0 =0,sum_1 =0,s=0;
  

  for(int i=1;i<=n;++i) {
    cin >> arr[i];
    sum_0+=arr[i]==0;
    sum_1+=arr[i]==1;
  }


  for(int i=1;i<=n;++i) {
    if(i==1){
      s+=(arr[1]==arr[n]);
    } 
    else {
      s+=arr[i]==arr[i-1];
    }
  }
  
  s-=abs(sum_0-sum_1);
  if(s%4 == 0){
    cout<<"BOB\n";
  }else{
    cout<<"ALICE\n";
  }
}
int  main() {
  int tc;
  cin >> tc;
  while(T--){
    solve();
    }
    return 0;
}
