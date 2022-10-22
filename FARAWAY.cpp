#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {

        long long N, M;
        cin >> N >> M;
        long long A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long sum = 0;
        for (int i = 0; i < N; i++)
        {

            sum += max(abs(A[i] - M), abs(A[i] - 1));
        }

        cout << sum << endl;
    }
    return 0;
}