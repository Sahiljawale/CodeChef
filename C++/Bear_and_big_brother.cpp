#include<bits/stdc++.h>
using namespace std;

int main() {
	int a , c ;
	cin >> a >> c;

	int y = 0 ;

	while (!(a > c)) {
		a *= 3;
		c *= 2;
		y++;
	}
	cout << y << endl;



}
