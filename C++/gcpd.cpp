#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int is_prime(int num) {
	int i, prime = 1;
	if(num == 1) {
		return 0;
	}
	else if(num == 2) {
		return 1;
	}
	for(i = 3; i <= num/ 2; i++) {
		if(num % i == 0) {
			prime = 0;
			break;

		}
	}
	if(prime == 0) {
		return 0;
	}
	else if(prime == 1) {
		return 1;
	}

}

int main() {

	int a, b, is_gcpd = 0, temp, res, flag, i, small;
	cin >> a >> b;
	if(a < b) {
		small = a;
	}
	else {
		small = b;
	}
	for(i = small; i > 0; i--) {
		if(a % i == 0 && b % i == 0 && is_prime(i) == 1) {
			res = i;
			is_gcpd = 1;
			break;
		}
	}
	if(is_gcpd == 1) {
		cout << res << endl;

	}
	else if(is_gcpd == 0) {
		cout << "-1" << endl;
	}

	return 0;


}