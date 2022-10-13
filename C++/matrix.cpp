#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int M, N, a, b, i, j, k, temp, flag, sum_row = 0, sum_col = 0, arr[100][100], res;
	cin >> M >> N;
	//cin >> a >> b;
	for(i = 0; i < M; ++i) {
		for(j = 0; j < N; ++j) {
			cin >> arr[i][j];
		}
	}

	// matrix is taken
	// sum of row

	for(i = 0; i < M; i++) {
		for(j = 0; j < N; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

	cin >> a >> b;
	temp = a;
	flag = b;

	// Finding sum of row
	for(i = 0; i < N; i++) {
		temp = a;
		sum_row = sum_row + arr[temp][i];
	}

	// sum of col

	for(i = 0; i < M; i++) {
		flag = b;
		sum_row = sum_row + arr[i][flag];
	}	

	

	res = sum_row + sum_col;
	res = res - arr[a][b];

	cout << res << endl;
	return 0;


}