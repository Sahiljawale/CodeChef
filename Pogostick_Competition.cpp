#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    long long arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    long long dp[n]={0};
	   
	    for(int i=0;i<n;i++)
	    {
	        if(i<k)
	        dp[i]=arr[i];
	        
	        else
	        dp[i]=max(arr[i]+dp[i-k],arr[i]);
	    }
	    
	    long long  ans=INT_MIN;
        int i=n-1;
        while(i>=0 && k>0){
            ans=max(ans,dp[i]);
            i--;
            k--;
        }
	    
	    cout<<ans<<endl;
	}
	return 0;
}