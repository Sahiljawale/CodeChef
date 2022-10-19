#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

void solve(){
    int a, b;
    cin >> a >> b;
    if(a > b){
        int temp=a;
        a = b;
        b = temp;
    }
    // a <= b
    int x = __gcd(a, b), c = (b/x);
    if(x == a && isPowerOfTwo(c) )
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	    solve();
    return 0;
}


