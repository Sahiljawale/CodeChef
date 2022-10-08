#include<bits/stdc++.h>
typedef long long ll;

#define mod 1000000007
#define inf 1e9
#define rep(i,n) for(int i=0;i<n;i++)
#define w(t) ll tt;cin>>tt;while(tt--)
#define pb push_back
#define endl "\n"
#define vll vector<ll> 
#define pi pair<ll,ll>
#define all(arr) arr.begin(),arr.end()
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}


void solve(){
		int n; cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];

		int m; cin>>m;
		vector<int> b(m);
		for(int i=0;i<m;i++) cin>>b[i];

			vector<int> tempa= a;
		for(int i=0;i<m;i++){
			if(b[i]>0){
				 a.push_back(b[i]);
				 tempa.insert(tempa.begin(),b[i]);
				}
		}	

		long long sum=0, maxsum=INT_MIN;
		for(int i=0;i<a.size();i++){

			sum+=a[i];
			maxsum=max(maxsum,sum);
			if(sum<0){
				sum=0;
			}
		}
		sum=0;
		long long maxi=INT_MIN;
		for(int i=0;i<tempa.size();i++){
			sum+=tempa[i];
			maxi=max(maxi,sum);
			if(sum<0){
				sum=0;
			}
		}
	
	
		cout<<max(maxi,maxsum)<<endl;

		
}

int main(){
	init_code();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     ll t;cin>>t;
 
     while(t--){ 
     	solve();
		}		

}