#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	char str[1000], i, flag_bored = 0, count_1, j, flag;
	cin >> T;
	while(T--) {
		cin >> str;
		count_1 = 0;
		for(i = 0; i < 30; i++) {
			for(j = i + 1; j < 30; j++) {
				if(str[i] == '1' && str[j] == '1') {
					count_1++;
					if(count_1 >= 5) {
						flag = 1;
						cout << "#coderlifematters" << endl;
	
						break;
					}
					else if(count_1 < 5) {
						flag = 0;
					}
				}
				else if(str[i] == '0' || str[j] == '0') {
					count_1 = 0;
					flag = 0;
				}
			}
			
			
		}
		if(flag == 0) {
				cout << "#allcodersarefun" << endl;
				break;
			}
	}
	return 0;

}