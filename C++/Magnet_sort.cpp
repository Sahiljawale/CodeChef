#include<bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    string str;
	    cin>>str;
	    if(is_sorted(arr.begin(),arr.end()))
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int no_of_n=0;
	        for(int i=0;i<n;i++)
	            if(str[i]=='N')   no_of_n++;
            if(no_of_n==0||no_of_n==n)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                vector<int> arr2=arr;
                sort(arr.begin(),arr.end());
                int s=INT_MAX,e=INT_MIN;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]!=arr2[i])
                    {
                        s=min(i,s);
                        e=max(i,e);
                    }
                }
                
                bool ans1 = false, ans2 = false;
                for(int i = 0; i < s; i++) {if(str[i] != str[e]) ans1 = true;}
                for(int i = e; i < n; i++) if(str[i] != str[s]) ans2 = true;
              
                if(str[s]!=str[e]||ans1||ans2)    cout<<"1"<<endl;
                else cout<<"2"<<endl;
                 
            }
	    }
	}
	return 0;
}
