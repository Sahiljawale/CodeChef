#include<iostream>
using namespace std;
int main()
{
    int decimal, binary = 0, mul = 1, rem;
    cout << "Enter the Decimal Number: ";
    cin >> decimal;
    while (decimal > 0)
    {
        rem = decimal % 2;
        binary = binary + (rem * mul);
        mul = mul * 10;
        decimal = decimal / 2;
    }
    cout << "\nEquivalent Binary Value: " << binary;
    cout << endl;
    return 0;
}