#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char str[1001][1001];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>str[i][j];
        int ctr=0,ctr1=0;
        if((n*m)%2==0)
        {
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='.')
                        ctr++;
                    }
                    else 
                    {
                        if(str[i][j]=='*')
                        ctr++;
                    }
                }
            }
            else 
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='*')
                        ctr++;
                    }
                    else 
                    {
                        if(str[i][j]=='.')
                        ctr++;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='*')
                        ctr1++;
                    }
                    else 
                    {
                        if(str[i][j]=='.')
                        ctr1++;
                    }
                }
            }
            else 
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='.')
                        ctr1++;
                    }
                    else 
                    {
                        if(str[i][j]=='*')
                        ctr1++;
                    }
                }
            }
        }
        cout<<min(ctr,ctr1)<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='.')
                        ctr1++;
                    }
                    else 
                    {
                        if(str[i][j]=='*')
                        ctr1++;
                    }
                }
            }
            else 
            {
                for(int j=0;j<m;j++)
                {
                    if(j%2==0)
                    {
                        if(str[i][j]=='*')
                        ctr1++;
                    }
                    else 
                    {
                        if(str[i][j]=='.')
                        ctr1++;
                    }
                }
            }
        }
        cout<<ctr1<<endl;
        }
        
    }
    return 0;
}