#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long int> decToBinary(int n) 
{ 
    // array to store binary number 
    long long int temp; 
    vector<long long int> arr;
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        temp = n % 2; 
        arr.push_back(temp);
        n = n / 2;
        i++;
    } 
  
    // printing binary array in reverse order 
    reverse(arr.begin(), arr.end());
    return arr;
}

long long int binaryToDecimal(long long int n)
{
    long long int num = n;
    long long int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long int base = 1;
 
    long long int temp = num;
    while (temp) {
        long long int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

int main() {
    long long int A = 0, B = 0, C, i, j, T, temp;
    vector<long long int> Crr;
    vector<long long int> Arr;
    vector<long long int> Brr;
    cin >> T;
    while(T--) {
        cin >> C;
        A = 0;
        B = 0;
        // Now converting C into Crr.
        Crr = decToBinary(C);
        Arr.push_back(1);
        Brr.push_back(0);
        for(i = 1; i < Crr.size(); i++) {
            if(Crr[i] == 1) {
                if(Arr[i-1] == 0) {
                    Arr.push_back(1);
                    Brr.push_back(0);
                }
                else if(Arr[i-1] == 1) {
                    Arr.push_back(0);
                    Brr.push_back(1);
                }
            }
            else if(Crr[i] == 0) {
                Arr.push_back(1);
                Brr.push_back(1);
            }
        }
        // Now converting binary into decimal.
        for (auto &d : Arr)  
        {
            A = A * 10 + d;
        }

        for(auto &d: Brr) {
            B = B * 10 + d;
        }
        A = binaryToDecimal(A);
        B = binaryToDecimal(B);
        cout << A*B << endl;
        Arr.clear();
        Brr.clear();
        Crr.clear();
    }
    return 0;

}