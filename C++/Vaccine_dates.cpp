#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d,l,r;
	    cin>>d>>l>>r;
	    if (d>=l && d<=r)
	    {
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d>l && d>r)
	    {
	        cout<<"Too Late"<<endl;
	    }
	    else if(d<l && d<r)
	    {
	        cout<<"Too Early"<<endl;
	    }
	    
	}
	return 0;
}
