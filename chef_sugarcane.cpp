#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++){
      int total = 50*a[i];
      int profit = total - (10*a[i] + 10*a[i] + 15*a[i]);
      cout << profit << "\n";
    }
    return 0;
}
