#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int i, j, temp, T, group_ct, N, count_1,flag;
    string str;
    char ch;
    string :: iterator itr;
    cin >> N;
    while(N--) {
        cin >> str;
        group_ct = 0;
        count_1 = 0;
        flag = 0;
        // Handling all Zeros case;
        itr = find(str.begin(), str.end(), '1');
        if(itr == str.end()) {
            // Means no any 1 present all are zeros.
            cout << "0" << endl;
            flag = 1;
        }
        if(flag == 0) {
            itr = find(str.begin(), str.end(), '0');
            if(itr == str.end()) {
                cout << "1" << endl;
                flag = 2;
            }
        }
        // Now handling combination case;
        if(flag == 0) {
            // check '01' pair now.
            for(i = 0; i < str.size()-1; i++) {
                if(str[i] == '1' && str[i+1] == '0') {
                    group_ct++;
                    count_1 = 0;
                }
                else if(str[i] == '1' && str[i+1] == '1') {
                    count_1++;
                }

            }
            
            if(count_1 > 0 || str[i] == '1') {
                group_ct++;
            }
            
            
            cout << group_ct << endl;

        }
        str.clear();


    }
    return 0;
}