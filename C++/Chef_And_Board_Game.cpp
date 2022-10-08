#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    int x=1;
	    while(x!=n){
	        if(x==1){
	            ans += n*n;
	            x++;
	            }
	       else if(x%2!=0){
	            ans += (n-x+1)*(n-x+1);
	            x++;
	            }
	           else {
	               x++;
	           }
	    } 
	    if(n%2==0) {
	        cout<<ans<<endl;
	    }
	    else {
	        cout<<ans+1<<endl;
	    } 
	}
     
	return 0;
}
