#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
// Merges two subarrays of array[].
// First subarray is L[begin..mid]
// Second subarray is R[mid+1..end]
void merge(int l , int r, int mid) {
	//merging two sorted array
	int l_size = mid - l + 1;
	int r_size = r - mid;
	int L[l_size + 1], R[r_size + 1]; // extra one ele INT_MAX

	//fill array made above
	for (int i = 0 ; i < l_size; i++) {
		L[i] = a[i + l];
	}
	for (int i = 0 ; i < r_size; i++) {
		R[i] = a[i + mid + 1];
	}
	L[l_size] = R[r_size] = INT_MAX;

	int s = 0;
	int s2 = 0;

	for (int i = l ; i <= r; i++) {
		if (L[s] <= R[s2]) {
			a[i] = L[s];
			s++;
		} else {
			a[i] = R[s2];
			s2++;
		}
	}

}

void merge_sort(int l , int r) {
	if (l == r) return ; // 1 ele only present
	int mid = (l + r) / 2;
	merge_sort(l, mid); // l se mid ka sort kar diya
	merge_sort(mid + 1, r); // mid+1 se r ka sort kar diya
	merge(l, r, mid); // sorted array ko merge kardega
}


int main() {
	int n;
	cin >> n;
	for (int i = 0 ; i < n; i++) {
		cin >> a[i];
	}
	merge_sort(0, n - 1);
	for (int i = 0 ; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

// O(N LOG N TO THE BASE 2)
