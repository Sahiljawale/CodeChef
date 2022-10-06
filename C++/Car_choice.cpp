#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    float c1=0,c2=0;
	    c1=y1/x1;
	    c2=y2/x2;
	    if(c1>c2)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(c2>c1)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
