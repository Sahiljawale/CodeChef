#include <bits/stdc++.h>

#define inputv(x, n) for(ll i = 0; i < n; i++) cin >> x[i];
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, p, k;
        cin >> n >> p >> k;
        ll ans;
        ll mod_p = p % k;
        if(n % k <= mod_p - 1)
        {
            ans = (n % k)*(n/k + 1) + (mod_p - n%k) * (n/k);
            ans = ans + (p/k + 1);
        }
        else
        {
            ans = (mod_p)*(n/k +  1);
            ans = ans + (p/k + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
