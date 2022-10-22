#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'

using namespace std;
vi ar[1000001];
vi tr[1000001];
vi scc , order;

int vis[1000001];
int val[1000001];

int dfs(int node)
{
	vis[node] = 1;

	for(int adj : ar[node])
	if(vis[adj] == 0)
	dfs(adj);

	order.pb(node);
}

int dfs1(int node)
{
	vis[node] = 1;

	for(int adj : tr[node])
	if(vis[adj] == 0)
	dfs1(adj);

	scc.pb(node);
}


int main()
{
	int t , n , res;
	cin>>t;
	while(t--)
	{

		//input and reset section
		cin>>n;
		order.clear() , res = 0;
		REP(i , n)	ar[i-1].clear() , tr[i-1].clear() , vis[i-1] = 0 , cin>>val[i-1];


		//graph construction section
		REP(i , n)
		{
			int a = i - 1;
			int b = (i - 1 + val[i-1] + 1) % n;

			ar[a].pb(b);
			tr[b].pb(a);
		}

		//SCC section
		REP(i , n)
		if(vis[i-1] == 0)
		dfs(i-1);

		REP(i , n) vis[i-1] = 0;

		reverse(order.begin() , order.end());
		for(int i : order)
		if(vis[i] == 0)
		{
			scc.clear();
			dfs1(i);

			if(scc.size() == 1 && (scc[0] != ar[scc[0]][0])) continue;

			res += scc.size();
		}

		cout<<res<<endl;
	}
}
