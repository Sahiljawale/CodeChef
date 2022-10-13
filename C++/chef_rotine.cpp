#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
	long long T, len, count = 0, i;
	char str[100000];
	cin >> T;
	while(T--) {
		cin >> str;
		len = strlen(str);
		count = 0;
		for(i = 0; i < len; i++) {
			if(str[i] == 'C') {
				if(str[i + 1] == 'C' || str[i + 1] == 'E' || str[i + 1] == 'S') {
					count++;
				}
			}
			else if(str[i] == 'E') {
				if(str[i + 1] == 'E' || str[i + 1] == 'S') {
					count++;

				}
			}
			else if(str[i] == 'S') {
				if(str[i + 1] == 'S') {
					count++;
				}
			}
		}
		if(count == (len - 1)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}

	}
	return 0;
}