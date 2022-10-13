#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int Divisor(long long int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 


int main() {
    long long int L, R, i, j, flag = 0, T, N, div1, div2;
    cin >> T;
    while(T--) {
        cin >> N;
        long long int arr[N];
        for(i = 0; i < N; i++) {
            cin >> arr[i];
        }
        flag = 0;
        for(L = 0, R = N-1; L <= R; L++, R--) {
            div1 = Divisor(arr[L]);
            div2 = Divisor(arr[R]);

            if(div1 % 2 == 1 && div2 % 2 == 1) {
                cout << R-L << endl;
                flag = 1;
            }
            
        }
        if(L > R && flag == 0) {
            cout << "0" << endl;
        }

        
    }
    return 0;

}