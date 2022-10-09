#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int Q, a, b, i, nat_a, nat_b, diff;
	cin >> Q;
	while(Q--) {
		cin >> a >> b;
		nat_a = a % 2;
		nat_b = b % 2;
	// 0 -> Even, 1 -> Odd
		//diff = abs(a - b);
		if(nat_a == 1 && nat_b == 0) {
			//diff = b - a;
			diff = a - b;
			if(diff == -1) {
				cout << "YES" << endl;
			}
			else if(diff == 1) {
				cout << "NO" << endl;
			}
		}
		 if(nat_a == 0 && nat_b == 0) {
			//diff = b - a;
					diff = abs(a - b);

			if(diff == 2) {
				cout << "YES" << endl;
			}
		}
		 if(nat_a == 1 && nat_b == 1) {
			//diff = b - a;
					diff = abs(a - b);

			if(diff == 2) {
				cout << "YES" << endl;
			}
		}
		if((nat_a == 0 || nat_b == 0 || nat_a == 1 || nat_b == 1)) {
					diff = abs(a - b);

			if(diff > 2) 
				cout << "NO" << endl;
		}
		if((a % 2 == 0) && (b = a + 1)) {
					diff = abs(a - b);

			if(diff == 1) {
				cout << "NO" << endl;
			}
		}
		if(nat_a == 0 && nat_b == 1) {
			diff = a - b;
			if(diff == 1) {
				cout << "YES" << endl;
			}
		}

	}
	return 0;


}