#include <bits/stdc++.h>
#define int long long
using namespace std;

void code()
{
    int n, ans=0, cnt=0;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++) 
    {
        int e;
        cin>>e;
        m[e]++;
    }
    for(auto &it:m)
    {
        if(it.second%2)
        {
            it.second+=1;
            ans++;
        }
        cnt+=it.second/2;
    }
    if(cnt%2)   ans+=2;
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        code();
    return 0;
}
