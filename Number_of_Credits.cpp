#include <iostream>
using namespace std;

int main()
{

    int T, X, Y, Z;
    cin >> T;

    while (T--)
    {
        cin >> X >> Y >> Z;

        int RTP = X * 4;
        int Audit = Y * 2;
        int Non_RTP = Z * 0;

        int Total_credits = RTP + Audit + Non_RTP;

        cout << Total_credits << endl;
    }

    return 0;
}