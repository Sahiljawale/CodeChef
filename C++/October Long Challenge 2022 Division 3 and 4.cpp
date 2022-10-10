
[codechef]SINGLEOP1

#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
   int n;string s;
   cin >> n >> s;
   for(int i=0;i<n;++i) 
      if(s[i]=='0') {
         cout << i << endl;
         return;
      }
   cout << n << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}


[codechef]SINGLEOP2

#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
   int n;string s;
   cin >> n >> s;
   for(int i=1;i<n;++i) 
      if(s[i]=='1') {
         cout << i << endl;
         return;
      }
   cout << n << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}



[codechef]BINARYSUB

#include<bits/stdc++.h>
#define int long long
using namespace std;
bool a[100001];
int dp[100001][2];
void solve(){
   int n;string s;
   cin >> s;n=s.size();
   for(int i=1;i<n;++i)
      a[i]=s[i]!=s[i-1];
   dp[0][0]=1;
   for(int i=1;i<n;++i) {
      dp[i][0]=(dp[i-1][0]+dp[i-1][1])%998244353;
      if(a[i]==1) dp[i][1]=dp[i-1][0];
      else dp[i][1]=0;
   }
   cout << (dp[n-1][0]+dp[n-1][1])%998244353 << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}



[codechef]ARRCONS

#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,s;
long long power(long long b,long long n) {
    long long s=1;
    while(n) {
        if(n%2==1)s=s*b%998244353;
        b=b*b%998244353;
        n/=2;
    }
    return s;
}
long long count(int i,int j) {
   return ((i/(1<<(j+1)))<<j)+(max(0ll,i%(1<<(j+1))-(1<<j)+1));
}
void solve(){
   cin >> n >> m;s=0;
   for(int i=0;i<31;++i)
      s=(s+(power(count(m,i),n)<<i)%998244353)%998244353;
   cout << s << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}



[codechef]TWOZERO

#include<bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;
long long power(long long b,long long n) {
    long long s=1;
    while(n) {
        if(n%2==1)s=s*b%MOD;
        b=b*b%MOD;
        n/=2;
    }
    return s;
}
long long Inv(int x) {
    return power(x,MOD-2);
}
int n,m,s,a[3],b[3];
void solve(){
   cin >> n >> m;
   a[0]=(vector<int>{2,1,-1,-2,-1,1}[n%6]+power(2,n))*Inv(3)%MOD;
   a[1]=(vector<int>{-1,1,2,1,-1,-2}[n%6]+power(2,n))*Inv(3)%MOD;
   a[2]=(vector<int>{-1,-2,-1,1,2,1}[n%6]+power(2,n))*Inv(3)%MOD;
   b[0]=(vector<int>{2,1,-1,-2,-1,1}[m%6]+power(2,m))*Inv(3)%MOD;
   b[1]=(vector<int>{-1,1,2,1,-1,-2}[m%6]+power(2,m))*Inv(3)%MOD;
   b[2]=(vector<int>{-1,-2,-1,1,2,1}[m%6]+power(2,m))*Inv(3)%MOD;
   cout << ((a[0]*b[0]+a[1]*b[1]+a[2]*b[2])%MOD+MOD-1)%MOD << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}