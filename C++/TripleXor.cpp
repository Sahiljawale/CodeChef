#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back;
#define wh(k) while(k--)
#define fo(i, c) for (long long(i) = 0; (i) < (c); ++(i))
typedef vector<long long> vi;
typedef vector<string> vst;
typedef vector<double> vfl;
typedef pair<long long, long long> ii;
typedef vector<pair<long long,long long>> vecpr;
typedef list<long long> lis;
typedef stack<long long> stk;
typedef queue<long long> que;
typedef set<long long> seti;
typedef multiset<long long> mulset;
typedef unordered_set<long long> unoset;
typedef map<long long, long long> mapi;
typedef multimap<long long, long long> mulmap;
typedef unordered_map<long long, long long> unomap;
typedef map<long long, string> mapstr;
typedef map<long long, vi> mapvec;
const long long mod = 1e9 + 7;
const long long N = 1e5 + 5;
ll bin_exp(ll a,ll pw)
{
    if(pw == 0) return 1;
    ll x = bin_exp(a,(pw/2));
    if(pw%2==0)
    {
        return (x*x);
    }
    else return (x*x*a);
}
signed main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        ll lim = bin_exp(2,n);
        ll ans = (lim-1)*(lim-2);
        cout<<ans<<endl;
        
        
    }
}