//Problem link : -> https://www.codechef.com/problems/E1
//Difficulty Rating -> Difficulty Rating:1530 (Dynamic Programming)

//Code:
#include <bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[10005][1005];

int DFS(int x, int y, int n, vector<vector<char>>&a)
{
    if (x<0 || y<0 || x>=n || y>=n) return 0;

    if (dp[x][y]>=0) return dp[x][y];

    int t;
    if (a[x][y]=='P') t=1;
    else t=0;

    int f=t+DFS(x-2,y+1, n, a);
    int b=t+DFS(x-1,y+2, n, a);
    int c=t+DFS(x+1,y+2, n, a);
    int d=t+DFS(x+2,y+1, n, a);

    int kq;
    kq=max(f, b);
    kq=max(kq, c);
    kq=max(kq, d);

    dp[x][y]=kq;
    return dp[x][y];

}

int main()
{
    faster
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, n;
        cin >> n;
        vector< vector<char> > a(n, vector<char>(n));

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                dp[i][j]=-1;
                cin >> a[i][j];
                if (a[i][j]=='K') {x=i; y=j;}
            }

        int kq=DFS(x, y, n, a);
        cout << kq << endl;
    }
}


