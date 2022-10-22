#include<bits/stdc++.h>
using namespace std;
long long dist[1000000];
vector<int> adj[1000000];
void dfs(int u,int v)
{
    dist[u]=dist[v]^1;
    for(int child:adj[u])
    {
        if(child!=v)
        dfs(child,u);
    }
}
int main()
{
    long long i,j,n,m,u,v,t;
    cin>>t;
    while(t--)
    {
        memset(dist,0,sizeof(dist));
        for(i=0;i<=10000;i++)
        adj[i].clear();
        cin>>n;
        for(i=0;i<n-1;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,0);
        for(i=1;i<=n;i++)
        cout<<dist[i]+1<<" ";
        cout<<endl;
        
    }
    return 0;
    
}
