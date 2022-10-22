#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<n-3;i+=3){
	        
	       a[i+1]=a[i]*2;
	     
	       a[i+2]=2*a[i+3];
	    }
	 if(n%3==2)a[n-1]=2*a[n-2];
	 else if(n%3==0){
	     a[n-1]=2*a[n-1];
	     a[n-2]=2*a[n-3];
	 }
	   for(int i=0;i<n;i++)cout<<a[i]<<" ";
	  
	}
	
		return 0;
}
