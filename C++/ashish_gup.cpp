#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,  K, temp, i, j, no_solve, no_moreK, no_atmost;
    float N;
    int arr[1000];
    cin >> T;
    
    while(T--) {
        cin >> N >> K;
        no_solve = 0;
        no_moreK = 0;
        no_atmost = 0;
        for(i = 0; i < N; i++) {
            cin >> arr[i];
        }
    // Here we decided the count of no pbs solved 
        for(i = 0; i < N; i++) {
            if(arr[i] != -1) {
                no_solve++;
            }
        }

    // Pbs taken time more than K;
        
            for(i = 0; i < N; i++) {
                if(arr[i] > K) {
                    no_moreK++;
                }
            }
        

        if(no_solve == N && no_moreK == 0) {
            for(i = 0; i < N; i++) {
                if(arr[i] <= 1) {
                    no_atmost++;
                }
            }
        }
        


        temp = 0;
        if(no_solve < ceil(N/2)) {
            cout << "Rejected" << endl;
        }
        else if(no_moreK >= 1) {
            cout << "Too Slow" << endl;
        }
        else if(no_atmost == N) {
            cout << "Bot" << endl;
        }
        else {
            cout << "Accepted" << endl;
        }







        
    }
    return 0;

}