/*name Pranshu Gupta*/
/*edited on 12th October,2022*/
#include <iostream>
using namespace std;

int main() {
	int t,n,r,num,temp;
cin>>t;
while(t--)//Running a loop for the length of the given number
{
    cin>>n;
    temp=n;
    num=0;
    while(n!=0)
    {
        r=n%10;
        num=num*10+r;
        n=n/10;
    }
    if(num==temp)//if the initial number and final calculated number is equal then wins else loses
    cout<<"wins"<<endl;
    else
    cout<<"loses"<<endl;
}
	return 0;
}


