#include<bits/stdc++.h>
using namespace std;
bool prime[1000000 + 1];
vector <int> v;
void SieveOfEratosthenes(int n)
{
    //bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, 
        // then it is a prime
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
     for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
}
int main()
{
    SieveOfEratosthenes(1000000);
    int t,n;
    int a[1000001];
    memset(a,0,sizeof(a));
    int s=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-v[i-1]==2)
        {
            s++;
            a[v[i]]=s;
        }
    }
    int m=0;
    for(int i=0;i<=1000000;i++)
    {
        if(a[i]!=0)
        m=a[i];
        a[i]=m;
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }

}
