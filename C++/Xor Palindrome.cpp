#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j,c;
	string s;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		c=0;
		cin>>n>>s;
		i=0,j=n-1;
		while(i<=j)
		{
			if(s[i]!=s[j])
				c++;
			i++;
			j--;
		}
		if(c%2==0)
			cout<<c/2<<endl;
		else
			cout<<c/2+1<<endl;
	}
}
