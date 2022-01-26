#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s="";
	    char curr = 'a';
	    
	    for(int i = 0;i<n;i++)
	    {
	        s += curr;
	        curr++;
	        
	        if(curr == 'z')
	        curr='a';
	    }
	    cout <<s<<endl;
	}
	return 0;
}
