/* https://www.codechef.com/problems/ALTSUFF?tab=statement */

//Solution

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, k, i, j;
    string a;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>k;
        ll op[n], left[n], right[n];
        
        cin>>a;
        
        for(i=0; i<n; i++)
        {
            left[i]=right[i]=10000000000;
        }
        
        j=-1;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='1'){
                j=i;
            }else{
                if(j!=-1){
                    left[i]=i-j;
                }
            }
        }
        
        j=-1;
        
        for(i=n-1; i>=0; i--)
        {
            if(a[i]=='1'){
                j=i;
            }else{
                if(j!=-1){
                    right[i]=j-i;
                }
            }
        }
        
        
        
        
        j=-1;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='0'){
                j=i;
            }else{
                if(j!=-1){
                    left[i]=i-j;
                }
            }
        }
        
        j=-1;
        
        for(i=n-1; i>=0; i--)
        {
            if(a[i]=='0'){
                j=i;
            }else{
                if(j!=-1){
                    right[i]=j-i;
                }
            }
        }
        
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='0'){
                j=min(left[i], right[i]);
                if(j<=k){
                    op[i]=k-j+1;
                    if((op[i]%2)==1){
                    a[i]='1';
                }
                }
                
            }else{
                j=min(left[i], right[i]);
                a[i]='0';
                if(j<=k-1){
                    op[i]=k-1-j+1;
                    if((op[i]%2)==1){
                    a[i]='1';
                }
                }
                
            }
        }
        
        for(i=0; i<n; i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
        
    }
    
}