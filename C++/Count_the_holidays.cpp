#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        
        cin >> n;
        int a[n], c = 8;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
            if(a[i]%7 !=0 && 7- a[i]%7 != 1 )
            {
                c++;
            }
        }

        cout << c << endl;
    }
    return 0;
}