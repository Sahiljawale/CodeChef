// problem link : https://www.codechef.com/submit/MINLCS

#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

void solve(ll tt) {
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll>a(26, 0), b(26, 0);
    for (auto c : s) a[c - 'a']++;
    cin >> s;
    for (auto c : s) b[c - 'a']++;
    ll ans = 0;
    for (ll i = 0; i < 26; i++) ans = max(ans, min(a[i], b[i]));
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) {
        solve(i);
    }
}
