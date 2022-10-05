#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        a[i] = a[i] * 100;
        b[i] = b[i] * 10;
        if (a[i] > b[i])
        {
            cout << "Cloth"
                 << "\n";
        }
        else if (a[i] < b[i])
        {
            cout << "Disposable"
                 << "\n";
        }
        else if (a[i] == b[i])
        {
            cout << "Cloth"
                 << "\n";
        }
    }
    return 0;
}