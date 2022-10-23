#include <bits/stdc++.h>
using namespace std;

// Problem Link: https://www.codechef.com/START49C/problems/SPLSTR

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string bin;
        cin >> n >> k >> bin;
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (bin[i] == '0')
                zeros++;
            else
                ones++;
        }
        int diff = abs(ones - zeros);
        if (diff == 0)
            cout << 0 << endl;
        else if (diff < k)
            cout << 1 << endl;
        else
        {
            if (diff % k == 0)
                cout << diff / k << endl;
            else
                cout << diff / k + 1 << endl;
        }
    }
}