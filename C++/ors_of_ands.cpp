#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,t,q,arr[1000000],fre[32],pos,val,x,y,a,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        memset(fre,0,sizeof(fre));
        for(i=0;i<n;i++)
        cin>>arr[i];
        ans=0;
       // a=arr[0];
        for(i=0;i<n;i++)
        {
            for(j=0;j<32;j++)
            {
                if(arr[i]&(1<<j))
                fre[j]++;
            }
           
        }
        for(i=0;i<32;i++)
        {
            a=1<<i;
            if(fre[i])
            ans+=a;
        }
        cout<<ans<<endl;
        while(q--)
        {
            cin>>pos>>val;
            x=arr[pos-1];
            ans=0;
            for(i=0;i<32;i++)
            {
                if(x&(1<<i))
                {
                    fre[i]--;
                }
            }
            for(i=0;i<32;i++)
            {
                if(val&(1<<i))
                {
                    fre[i]++;
                }
            }
            for(i=0;i<32;i++)
            {
                a=1<<i;
                if(fre[i])
                ans+=a;
            }
            arr[pos-1]=val;
            
            cout<<ans<<"\n";
        }
        
    }
    return 0;
}