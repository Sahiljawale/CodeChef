#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a=0,b=0,c=0,d=0;
	    int i,j;
	    int arr[3];
	    int arr1[3];
	    for(i=0;i<3;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==0)
	        {
	            a++;
	        }
	        else if(arr[i]==1)
	        {
	            b++;
	        }
	    }
	    for(j=0;j<3;j++)
	    {
	        cin>>arr1[j];
	        if(arr1[j]==0)
	        {
	            c++;
	        }
	        else if(arr1[j]==1)
	        {
	            d++;
	        }
	    }
	    if (a==c && b==d)
	    {
	        cout<<"Pass"<<endl;
	    }
	    else
	    {
	        cout<<"Fail"<<endl;
	    }
	}
	return 0;
}
