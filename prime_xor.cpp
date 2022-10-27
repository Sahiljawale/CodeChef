#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	        if(a%2==0)
	        a=a^b;
	        else if(b%2==0)
	        b=b^a;
	    
	    a=a^2;
	    b=b^2;
	    cout<<2<<" ";
	    if(a<b)
	    cout<<a<<" "<<b<<endl;
	    else
	    cout<<b<<" "<<a<<endl;
	    
	}
	return 0;
}
