## Problem Statement :

Chef has 3 numbers A,B,C.

Chef wonders if it is possible to choose exactly two numbers out of the three numbers such that their sum is odd.


## Code solution :

```cpp

#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    x=a+b;
	    y=b+c;
	    z=a+c;
	    
	    if(x%2!=0 || y%2!=0 || z%2!=0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}


```

