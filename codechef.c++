//Problem
//It's dinner time. Ashish is very hungry and wants to eat something. He has XX rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is YY rupees while the cost of a BURGER is ZZ rupees.
//
//Ashish can eat at most one thing. Find out what will Ashish eat for his dinner.
//
//Input Format
//The first line will contain TT - the number of test cases. Then the test cases follow.
//The first and only line of each test case contains three integers XX, YY and ZZ - the money Ashish has, the cost of a PIZZA and the cost of a BURGER.
//Output Format
//For each test case, output what Ashish will eat. (PIZZA, BURGER or NOTHING).
//
//You may print each character of the string in uppercase or lowercase. (for example, the strings Pizza, pIzZa and piZZa will all be treated as identical).
//
//Constraints
//1 \leq T \leq 1001≤T≤100
//1 \leq X, Y, Z \leq 1001≤X,Y,Z≤100
//Input
//3
//50 40 60
//40 55 39
//30 42 37
//Output
//PIZZA
//BURGER
//NOTHING
//*************HUNGRY ASHISH**************
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y<=x)
	    cout<<"PIZZA"<<endl;
	    else if(z<=x)
	    cout<<"BURGER"<<endl;
	    else{
	        cout<<"NOTHING"<<endl;
	    }
	}
	return 0;
}
