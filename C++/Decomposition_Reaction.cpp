#include <bits/stdc++.h>
#define ll long long int
#define int long long
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, x, n) for (int i = n - 1; i >= x; i--)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define mod 1000000007
#define pr(x) {cout<<x<<'\n';  return ;}
#define pry  {cout<<"YES\n";  return ;}
#define prn  {cout<<"NO\n";  return ;}
#define nl cout<<'\n';
using namespace std;

void code()
{
    int n, m;
    cin>>n>>m;
    int arr[n+1];
    arr[0]=0;
    for(int i=1; i<=n; i++) cin>>arr[i];
    map<int, vector<pair<int, int>>> map;
    for(int i=0; i<m; i++)
    {
        int reactant, x;
        cin>>reactant>>x;
        vector<pair<int, int>> v;
        for(int j=0; j<x; j++)
        {
            int w, product;
            cin>>w>>product;
            v.push_back(make_pair(w, product));
        }
        map[reactant]=v;
    }
    for(auto it:map)
    {
        int lhs=it.first;
        for(auto i:it.second)
        {
            arr[i.second]=1LL*(arr[i.second] + i.first*arr[lhs])%mod;
        }
        arr[lhs]=0;
    }
    loop(i,1,n+1)   cout<<arr[i]<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        code();
    return 0;
}
