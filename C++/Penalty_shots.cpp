#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0)
    {
        int goal[10];
        for (int i=0;i<10;i++)
        {
            cin>>goal[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<9;i=i+2)
        {
            sum1=sum1+goal[i];
        }
        for(int i=1;i<10;i=i+2)
        {
            sum2=sum2+goal[i];
        }
        if (sum1>sum2)
        {
            cout<<1<<endl;
        }
        else if(sum1==sum2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
	return 0;
}
