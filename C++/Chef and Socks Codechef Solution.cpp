#include <bits/stdc++.h>
using namespace std;
int main(){
        int j,s,m,ans;
        cin>>j>>s>>m;
        ans=(m-j)/s;
        if(ans%2==0){
            cout<<"Lucky Chef"<<endl;
        }
        else{
            cout<<"Unlucky Chef"<<endl;
        }
  return 0;
}
