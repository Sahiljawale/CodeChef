#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i, arr_A[100], arr_B[100], score[100], max, N;
	cin >> T;
	while(T--) {
		cin >> N;
		max = INT_MIN;
		for(i = 0; i < N; i++) {
			cin >> arr_A[i];
		}
		for(i = 0; i < N; i++) {
			cin >> arr_B[i];
		}
		// calculation of score
		for(i = 0; i < N; i++) {
			score[i] = (arr_A[i] * 20) - (arr_B[i] * 10);
		}
		for(i = 0; i < N; i++) {
			if(score[i] > max) {
				max = score[i];
			}
		}
		if(max < 0)
			cout << "0" << endl;
		else if(max > 0) 
			cout << max << endl;
		
	}
	return 0;

}