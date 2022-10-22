#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int x, u;
        cin >> x >> u;
        int q = x / u;
        cout << q * q << endl;
    }
}
