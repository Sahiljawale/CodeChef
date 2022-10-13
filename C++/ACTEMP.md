## Problem Statement :

There are three people sitting in a room - Alice, Bob, and Charlie. 
They need to decide on the temperature to set on the air conditioner.
Everyone has a demand each:

1. Alice wants the temperature to be at least AA degrees.
2. Bob wants the temperature to be at most BB degrees.
3. Charlie wants the temperature to be at least CC degrees.
4. Can they all agree on some temperature, or not?


## Code solution :

```cpp

#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	   
	    if(b>=a && b>=c)   // since b is the atmost condition
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	   
	}
	return 0;
}

```

