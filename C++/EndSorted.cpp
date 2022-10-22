#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];
    int ans, startdex, findex;
    for(int i = 1; i < n+1; i++) {
        cin >> arr[i-1];
        if(arr[i-1]==1) startdex = i;
        if(arr[i-1]==n) findex = i;
    }
    if(startdex < findex) ans = n-1 - findex + startdex;
    else ans = n-1 - findex + startdex - 1;
    cout << ans << endl;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    solve();
	}
	return 0;
}
