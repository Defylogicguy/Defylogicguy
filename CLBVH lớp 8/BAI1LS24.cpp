/*******************************************************
 https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1015
 *******************************************************/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("BAI1LS24.INP", "r", stdin);
	freopen("BAI1LS24.OUT", "w", stdout);

	int n;
	cin >> n;

	if (n - 1 <= 200 && n % 2 == 0)
		cout << 300 * (n / 2);
	if (n - 1 <= 200 && n % 2 != 0)
		cout << 300 * ((n - 1) / 2) + 250;
	if (n - 1 > 200 && n % 2 == 0)
		cout << 280 * (n / 2);
	if (n - 1 > 200 && n % 2 != 0)
		cout << 280 * ((n - 1) / 2) + 250;
	return 0;
}
