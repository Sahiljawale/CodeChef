#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;
using    namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define M 998244353 //1000000007
#define ll long long
#define pa pair<ll,ll>
#define ff first
#define ss second
#define pb push_back
#define pi acos(-1.0)
#define vi vector<int>
#define vll vector<ll>
#define fr(i,n,j) for(i=j;i<=n;i++)
#define rfr(i,n,j) for(i=n;i>=j;i--)
#define ct continue;
#define yo cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(v) v.begin(),v.end()
ll a[500005],b[500005],c[500005],dp[500005];
vector<int>adj[200005];
int t[2000005],lazy[2000005];
void push(int v) {
    t[v*2] = (t[v*2]+lazy[v])%M;
    lazy[v*2] = (lazy[v*2]+lazy[v])%M;
    t[v*2+1] =(t[v*2+1]+ lazy[v])%M;
    lazy[v*2+1] =(lazy[v*2+1] +lazy[v])%M;
    lazy[v] = 0;
}

void update(int v, int tl, int tr, int l, int r, int addend) {
    if (l > r)
        return;
    if (l == tl && tr == r) {
        t[v] = (t[v]+addend)%M;
        lazy[v] = (lazy[v]+addend)%M;
    } else {
        push(v);
        int tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm), addend);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, addend);
        t[v] = (t[v*2] + t[v*2+1])%M;
    }
}

int query(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    int tm = (tl + tr) / 2;
    return (query(v*2, tl, tm, l, min(r, tm))
               +query(v*2+1, tm+1, tr, max(l, tm+1), r))%M;
}
int main()
{
    fast;
    ll te,i,j,k,n,m,w,l,r,x,y,z,l2,r2,k1;
    te=1;
    cin>>te;
    fr(w,te,1)
    {
        cin>>n;
        m=2*n;
        fr(i,4*m,0)lazy[i]=t[i]=0;
        n*=2;
        fr(i,n,1)cin>>a[i],adj[a[i]].pb(i);
        x=0;
        rfr(i,n-1,1)
        {
            //dbg(i);
            if(adj[a[i]][0]==i)
            {
                y=adj[a[i]][1];
                z=query(1,1,m,y,m);
                z=(z+2)%M;
                x=(x+z)%M;
                update(1,1,m,y,y,z);
                update(1,1,m,i,i,z);
            }
        }
        cout<<x<<endl;
        fr(i,m,1)adj[i].clear();
    }
}
