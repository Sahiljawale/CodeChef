#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function for returning no. of digits;

int no_digit(int temp) {
	int flag = 0;
	while(temp > 0) {
		flag++;
		temp = temp / 10;
	}
	return flag;
}


// Rec. function for generating fibonacci sequence.


// z gives next fibonacii number;

int main() {
	int val, i, x = 0, y = 1, z = 0, count = 1, res;
	cin >> val;
	for(i = 0; i < 1000; i++) {
		z = x + y;
		count++;
		if(no_digit(z) == val) {
			res = count;
			break;
		}
		x = y;
		y = z;
	}
	cout << res << endl;

}