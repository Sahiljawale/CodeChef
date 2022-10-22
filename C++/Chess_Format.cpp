#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int ans=0;
	    ans=a+b;
	    if(ans<3)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(ans>=3 && ans<=10)
	    {
	        cout<<"2"<<endl;
	    }
	    else if(ans>=11 && ans<=60)
	    {
	        cout<<"3"<<endl;
	    }
	    else
	    {
	        cout<<"4"<<endl;
	    }
	}
	return 0;
}
