#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int maxt,maxn,maxs,x,p=0;
	    cin>>maxt>>maxn>>maxs;
	   
	    while(maxt--&&maxs>0)
	    {
	        if(maxs>=maxn)
	        {
	             maxs-=maxn;
	             p+=pow(maxn,2);
	            
	        }
	        else
	        {
	       p+=pow(maxs,2);
	            break;
	        }
	        
	    }
	   cout<<p<<endl;
	}
	return 0;
}
