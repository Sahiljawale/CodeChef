#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int i , F_max, S_max, minm, N, temp, result, T;
    vector<long long int> arr;
    cin >> T;
    while(T--) {
        cin >> N;
        result = 0;
        F_max = INT_MIN;
        S_max = INT_MIN;
        minm = 0;
        for(i = 0; i < N; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        // Now let's find First Max, 2nd max and min element.
        F_max = *max_element(arr.begin(), arr.end());
        minm = *min_element(arr.begin(), arr.end());
        for(i = 0; i < N; i++) {
            if(arr[i] != F_max) {
                S_max = max(S_max, arr[i]);
            }
            
        }
        if(S_max == INT_MIN) {
            S_max = F_max;
        } 
       

        // Now we got all.
        result = (abs(F_max-minm) + abs(minm-S_max) + abs(S_max-F_max));
        cout << result << endl;
        arr.clear();

    }

    return 0;

}

