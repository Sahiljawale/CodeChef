## Problem Statement :

Chef has a square-shaped chart paper with the side length equal to NN. He wants to cut out K \times KK×K squares from this chart paper.

Find the maximum number of K \times KK×K squares he can cut from the entire chart paper.

Note that, some part of the chart paper might not be a included in any K \times KK×K cutout square.


## Code solution :

```cpp

#include <iostream>
using namespace std;

int main() {
	int t,n,k,s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    s = (n/k)*(n/k);   // it is important to note we should use not (n*n)*/(k*k) since it is not simply area division
	    cout<<s<<endl;
	}
	return 0;
}


```

