/*
Problem
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output Format
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Input
3 
120 140
10213 312
10 30

Output
20 840
1 3186456
10 30
*/

#include <iostream>
using namespace std;
int gcd(int x,int y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}

int main() {
	// your code goes here
	int t;
    cin>>t;
    for(int j=0;j<t;j++){
        long long int a,b,h,l,max,min;
        cin>>a>>b;
        if(a>b){
            max=a;
        }
        else{
            max=b;
        }
        min=(a+b)-max;
        h=gcd(max,min);
        l=(a*b)/h;
        cout<<h<<" "<<l<<endl;
        
    }
	return 0;
}