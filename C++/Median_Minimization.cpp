#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
   
    ll mn=a[n/2]-a[n/2-1];
    cout<<mn<<"\n";

}
int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  ll t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}
