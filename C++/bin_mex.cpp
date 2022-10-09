#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int i, j, temp, num, flag, T;
    string str, binary, zero;
    zero.push_back('0');
    cin >> T;
    while(T--) {
        cin >> str;
        flag = 1;
        num = 0;
        while(flag) {
            if(str.find(zero) == std::string::npos) {
                cout << "0" << endl;
                break;
            }
             binary = std::bitset<32>(num).to_string(); //to binary
            int len = log2(num)+1;
            //if(num != 0)
                binary.erase(0,32-len);
            //std::cout<<binary<<"\n";
            // check if binary present or not
            // If present continue else not present break
           // cout << binary << endl;
            if (str.find(binary) != std::string::npos) {
                //std::cout << "found!" << '\n';
                num++;
            }
            else if (str.find(binary) == std::string::npos) {
               // std::cout << "Not found!" << '\n';
               cout << binary << endl;
               break;
            }
    
        }
        binary.clear();
        str.clear();
    }
    return 0;
    
}