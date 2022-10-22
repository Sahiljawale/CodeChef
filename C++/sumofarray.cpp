#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define goog(tno) cout << "Case #" << tno << ": "
#define fast_io                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define read(x) \
	int x;      \
	cin >> x
using namespace std;

void init_code()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int sum(int n, int a[])
{
	if (n < 0)
		return 0;
	return sum(n - 1, a) + a[n];
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	fr(0, n) cin >> a[i];

	cout << sum(n - 1, a);
	return 0;
}
