#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	ll n;
    cin>>n;
    string s;
    cin>>s;
    //deque <char> d;
    //abcdefghij
    //1-->dcbaefghij
    //2-->hgfeabcdij
   
    ll cnt=0;
    vector<char> v;
     vector<char> d;
    for(ll i=0;i<n;++i){
    
         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'  ||s[i] == 'u'){
            cnt++;
        }
    
     if(cnt%2 == 0){
         v.push_back(s[i]);
     }else{
          d.push_back(s[i]);
     }
    }
    if(cnt%2==0){
         reverse(d.begin(),d.end());
         for(auto m: d){
           cout<<m;
        }
          for(auto p: v){
           cout<<p;
          }
    }else{
          reverse(v.begin(),v.end());
          for(auto p: v){
             cout<<p;
          }
          for(auto m: d){
              cout<<m;
          }
    }
    cout<<endl;
	}
	return 0;
}
