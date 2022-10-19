#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
#define mod 1000000007

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
     
    while(t--){
        int n;
        cin >> n;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[x]+=1;
        }
        if(n<=2) {
            cout << 0 << "\n";
            continue;
        }
        int max_freq=INT_MIN;
        for(auto it=m.begin();it!=m.end();it++){
            max_freq=max(it->second,max_freq);
        }
        
        if(max_freq==1) cout << n-2 << endl; 
        else cout << (n-max_freq) << endl;
    }
    
    return 0;
}