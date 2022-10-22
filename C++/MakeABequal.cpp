#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define yes cout<<"yes"<<endl;
#define no cout<<"no"<<endl;
#define ll long long int
using namespace std;

// Make A and B equal question
// https://www.codechef.com/AUG221C/problems/EQUALISE?tab=statement
// basic math and bitwise operations required
// highly into competitive coding

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	 int maxi = max(a,b);
	 int mini = min(a,b);
	 if(maxi%mini == 0)
	 {
	     int num = maxi/mini;
	     if((num&(num-1)) == 0)
	     yes
	     else
	     no
	 }
	 else
	 no
	}
	return 0;
}
