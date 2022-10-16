#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio() ios_base::sync_with_studio(false);cin.tie(NULL);cout.tie(NULL)
#define fo(i,n) for(ll i=0;i<n;i++)
#define fr(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i++:i--)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define clr(x) memset(x,0,sizeof(x))
#define sortall(x) sort(all(x))
#define at(it,a) for(auto i=a.begin();it!=a.end();it++)
#define PI 3.1415926535897932384626
#define  printall(v)     for(auto value:v) cout<<value<<" ";cout<<endl;


const int mod=1e9+7;
const int N=1e5;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
ll power(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans=(ans*1ll*ans);
        }
        a=(a*1ll*a);
        b=(b>>1);
    }
    return ans;
}
bool cmp(pii &a,pii &b){
    if(a.first==b.first)return b.second>a.second;
      return a.first>b.first;
}
bool cmp1(pll &a,pll &b){
    return a.second<b.second;
}

int main(){
   int t;cin>>t;
   
   while(t--){
       ll n,m;cin>>n>>m;
       ll x1,x2,y1,y2,dist;
       ll a[n+1][m+1];
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++)a[i][j]=0;
       }
       cin>>x1>>y1>>x2>>y2;
       a[x1][y1]=1;a[x2][y2]=2;
       dist=abs(y1-y2)+abs(x1-x2);
       ll d2=(x1-1+y1-1);
       if(dist%2){
           for(int i=1;i<=n;i++){
               for(int j=1;j<=m;j++){
                   if(a[i][j]==0){
                   if(a[1][1]==0){
                       if(d2%2==0){
                           a[1][1]=1;
                       }else{
                           a[1][1]=2;
                       }
                   }else if(j>1){
                       if(a[i][j-1]==1)a[i][j]=2;
                       else a[i][j]=1;
                   }else if(i-1>=1){
                       if(a[i-1][j]==1)a[i][j]=2;
                       else a[i][j]=1;
                   }
                   }
               }
           }
           
       }else{
           if(x2+1<=n)a[x2+1][y2]=3;
            if(x2-1>=1)a[x2-1][y2]=3;
            if(y2-1>=1)a[x2][y2-1]=3;
            if(y2+1<=m)a[x2][y2+1]=3;

              for(int i=0;i<=n;i++){
               for(int j=0;j<=m;j++){
                   if(a[i][j]==0){
                    if(a[1][1]==0){
                       if(d2%2==0){
                           a[1][1]=1;
                       }else{
                           a[1][1]=2;
                       }
                   }else if(j>1){
                       if(a[i][j-1]==1)a[i][j]=2;
                       else a[i][j]=1;
                   }else if(i-1>=1){
                       if(a[i-1][j]==1)a[i][j]=2;
                       else a[i][j]=1;
                   }
                   }
               }
           }
       }
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++)cout<<a[i][j]<<" ";
           cout<<"\n";
       }
       //cout<<"\n";
   }
}
