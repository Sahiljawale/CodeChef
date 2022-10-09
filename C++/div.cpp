#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int T, N, K, i, j, temp, count_ans, flag;
    cin >> T;
    while(T--) {
        cin >> N >> K;
        long long int arr[N];
        for(i = 0; i < N; i++) {
            cin >> arr[i];
        }
        count_ans = 0;

        // Now array has been taken;
        for(i = 0; i < N; i++) {

            if(arr[i] % K != 0) {
                j = K;
                temp = arr[i];
                flag = 0;
                for(i = 0; i < j; i++) {
                    temp = temp + temp;

                }
                if(temp % K != 0) {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            cout << "YES" << endl;
    }
    return 0;
    
}