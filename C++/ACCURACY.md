## Problem Statement :

There are 100100 questions in a paper. 
Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.

It is given that Chef received exactly XX (0 \leq X \leq 100)(0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.


## Code solution :

```cpp

#include <iostream>
using namespace std;

int main() {
	int t,n,s;
	cin>>t;
	while(t--)
	{
	   cin>>n;
	   //s=n/3;
	   if(n%3!=0)
	   {
	       cout<<3 - (n%3)<<endl;
	   }
	   else
	   cout<<0<<endl;
	}
	return 0;
}

```

