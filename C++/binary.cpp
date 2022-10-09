#include <iostream>
#include <bitset>
#include <string>
#include <cmath>
int main()
{
    int T;
    std:: cin >> T;
    while(T--) {
    int n;
    std:: cin >> n;
    for(auto i = 1; i <= n; ++i) {
        std::string binary = std::bitset<32>(i).to_string(); //to binary
        int len = log2(i)+1;
        binary.erase(0,32-len);
        std::cout<<binary<<"\n";
    }
    std:: cout << std:: endl;
    }
    return 0;
}