#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int>>b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0 || a[i]==3)
         b.push_back({a[i],i});
    }
    for(int i=0;i<(int)b.size()-1;i++){
        int di=b[i+1].second-b[i].second;
        if(b[i].first!=b[i+1].first){
            if(di%2!=0){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(b[i].first==b[i+1].first){
            if(di%2==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
     
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
