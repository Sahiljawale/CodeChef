#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0;
	    int count=INT_MAX;
	    int i=0,j=n-1;
	    int flag=0;
	    while(i<j){
	        if(a[i]>a[j]){
	           cout<<"-1"<<endl;
	           flag=1;
	           break;
	           
	        }
	        int curr=a[j]-a[i];
	        if(curr>count){
	            cout<<"-1"<<endl;
	           flag=1;
	           break;
	        }
	        count=curr;
	        ans=max(ans,curr);
	        i++;
	        j--;
	    }
	    if(flag==0)
	    cout<<ans<<endl;
	    
	}
	return 0;
}
