#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    int tc=x+y/2;
	    int th=h*tc;
	    if(th<=c)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
