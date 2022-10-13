#include <bits/stdc++.h>
#define ll long long int
#define int long long
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, x, n) for (int i = n - 1; i >= x; i--)
#define vi vector<int>
#define pr(x) cout<<x<<'\n';  return ;
#define pry  cout<<"YES\n";  return ;
#define prn  cout<<"NO\n";  return ;
using namespace std;

void code()
{
    int n;
    cin>>n; 
    vector<int> v;
    int sum=0;
    loop(i,0,n)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
        sum+=ele;
    }
    int prefix=0, mini=INT_MAX, minDiff=INT_MAX;
    for(int i=0; i<n; i++)
    {
        prefix+=v[i];
        int suffix=sum-prefix;
        // cout<<prefix<<" "<<suffix<<endl;
        // mini=min(mini, max(prefix, suffix));
        int diff=abs(suffix-prefix);
        if(diff<minDiff)
        {
            mini=max(suffix, prefix);
            minDiff=diff;
        }
    }
    // cout<<endl;
    cout<<mini<<endl;
}

signed main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        code();
    return 0;
}
