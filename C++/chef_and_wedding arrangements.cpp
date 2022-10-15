#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007 
int main(){
 int t;
 cin>>t;
 while(t--){
int i,j,n,k,c;
cin>>n>>k;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
map<int,int> mp;
int cost[n][n],ans[n];
for(i=0;i<n;i++)
ans[i]=100000000;
for(i=0;i<n;i++){
for(j=i;j<n;j++)
{   mp[v[j]]++;
      if(i==j)
    cost[i][j]= k;
    else {
    if(mp[v[j]]==2) c=2;
    else if(mp[v[j]]>2 )c=1;
    else c=0;
    cost[i][j]=cost[i][j-1]+c;
    }
    
}
mp.clear();
}
ans[0]=k;
for(i=1;i<n;i++){
      for(j=0;j<=i;j++){
            if(j==0) ans[i]=min(cost[j][i],ans[i]);
            else
            ans[i]=min(ans[j-1]+cost[j][i],ans[i]);
      }
}

cout<<ans[n-1]<<"\n";

 }
  
 
}
  
  