#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int x;
        cin >> x;
        vector<int> vect(100, 0);

        for (int i = 0; i < x; i++)
        {
            int h;
            cin >> h;
            vect[h]++;
        }

        int g = *max_element(vect.begin(), vect.end());

        if (g == 1)
        {
            cout << x - 1;
        }
        else
        {
            cout << x - g;
        }

        cout << endl;
    }
}