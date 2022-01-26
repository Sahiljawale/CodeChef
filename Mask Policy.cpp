#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--){
    int p,in;cin>>p>>in;
    int un=p-in;
    cout<<min(in,un)<<endl;
  }
  return 0;
}
