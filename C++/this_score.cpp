#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int T, N, pi[10000], prob[10000], si[10000], sc[10000], count = 0,score = 0, i, j, k = 0, flag, m;
	cin >> T;
	while(T--) {
		cin >> N;
		count = 0;
		score = 0;
		for(i = 0; i < N; i++) {
			cin >> pi[i];
			cin >> si[i];
		}
	// Now pi[] contains N problems
	// And si[] contains N scores
		for(i = 0; i < N; i++) {
			for(j = i + 1; j < N + 1; j++) {
				if(pi[i] == pi[j]) {
					if(si[i] > si[j]) {
						count = si[i];
					}
					else if(si[i] < si[j]) {
						count = si[j];
					}
					flag = count;
				}

			}
			if(pi[i] > 0 && pi[i] < 9) {
				score = score + flag;
			}

		}
		cout << score << endl;

	}
	return 0;
}
