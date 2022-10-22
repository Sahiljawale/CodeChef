#include <bits/stdc++.h>
using namespace std;

// Problem Link: https://www.codechef.com/submit/LARGEFAM

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        multiset<int> ch;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            ch.insert(temp);
        }

        int count = 0, t2 = 0;
        multiset<int>::iterator itr = ch.begin();
        while (count < n && itr != ch.end())
        {
            count += *itr;
            if (count < n)
                t2++;
            itr++;
        }
        cout << t2 << endl;
    }
}