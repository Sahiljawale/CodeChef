#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
	int T;
	float x1, x2, x3, v1, v2, d1, d2, t1, t2;
	cin >> T;
	while(T--) {
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		d1 = x3 - x1;
		d2 = x2 - x3;
		t1 = d1 / v1;
		t2 = d2 / v2;
		if(t1 < t2) {
			cout << ""
		}
	}
	return 0;
}
