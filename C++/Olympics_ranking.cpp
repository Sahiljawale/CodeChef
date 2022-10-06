#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int g1,b1,s1,g2,b2,s2;
	    cin>>g1>>b1>>s1>>g2>>b2>>s2;
	    int ans=g1+s1+b1;
	    int sum=g2+s2+b2;
	    if(ans>sum)
	    {
	        cout<<"1"<<endl;
	        
	    }
	    else
	    {
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}
