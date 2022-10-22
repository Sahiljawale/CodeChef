#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, i, temp;
    cin >> N;
    // finding divisors.

    for(i = 1; i <= 10; i++) {
        if(N%i == 0) {
            temp = i;
        }
    }
    cout << temp << endl;
    return 0;
    
}