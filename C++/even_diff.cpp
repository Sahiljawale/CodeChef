#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long int T, N, count;
    cin >> T;
    while(T--) {
        cin >> N;
        long int arr[N];
        count = 0;
        for(int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        // Now array has been taken.
        for(int i = 0; i < N; i++) {
            if(arr[i] % 2 == 1) {
                count++;
            }
        }
        cout << count << endl;
        
    }
    return 0;
    
}