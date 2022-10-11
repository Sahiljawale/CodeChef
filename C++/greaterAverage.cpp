#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;

    while (T--)
    {
        cin >> A >> B >> C;

        float average = (A + B) / 2.0;

        if (average > C)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}