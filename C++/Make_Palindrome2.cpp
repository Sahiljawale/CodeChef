#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  
   int t;
    cin>>t;
        while(t--){
           int n1;cin>>n1;string st;cin>>st;string ans="";
           int cnt1=count(st.begin(),st.end(),'1');
           int cnt0=count(st.begin(),st.end(),'0');
           if(cnt0>n1/2){
            while(cnt0--){
                ans+='0';
            }
           }else{
            while(cnt1--){
                ans+='1';
            }
           }
           cout<<ans<<"\n";
        }
}
