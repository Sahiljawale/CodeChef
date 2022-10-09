#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	 int T, N;
	
	cin >> T;
	N = T + 1;
	cin.ignore();
	while(N--) {
		string str, res;
		getline(cin, str);
		int i = 0, j = 1, m = 0, count = 0, space_count = 0, k;
		for(i = 0; str[i] != '\0'; i++) {
			if(str[i] == ' ') {
				space_count++;
			}
		}
	// Here we are having count of spaces.
	// 3 Test Cases 
		//cout << space_count << " Space" << endl;
		if(space_count == 0) {
			if(str[0] > 64 && str[0] < 91) {
				res[0] = str[0];
			}
			else if(str[0] > 96 && str[0] < 123) {
				res[0] = str[0] - 32;
			}
			for(i = 1; str[i] != '\0'; i++) {
				if(str[i] > 96 && str[i] < 123) {
					res[j] = str[i];
					j++;
					count++;
				}
				else if(str[i] > 64 && str[i] < 91) {
					res[j] = str[i] + 32;
					j++;
					count++;
				}
			}
		}
		//cout << "hare" << endl;

		for(i = 0; i <= count; i++) {
			cout << res[i];
		}
		cout << endl;
	}
	return 0;

}