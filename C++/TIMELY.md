## Problem Statement :

Chef has recently moved into an apartment. It takes 3030 minutes for Chef to reach office from the apartment.
Chef left for the office XX minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.


## Code solution :

```cpp

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n>=30)
	    cout<<"YES\n";
	    else 
	    cout<<"NO\n";
	}
	return 0;
}


```

