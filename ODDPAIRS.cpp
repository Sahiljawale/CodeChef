#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, e, o;
        cin >> n;
        e = n / 2;
        o = n - e;
        cout << e * 2 * o << endl;
    }
    return 0;
}