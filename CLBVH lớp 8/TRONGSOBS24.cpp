/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1012
*/
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

	freopen("TRONGSOBS24.INP", "r", stdin);
	freopen("TRONGSOBS24.OUT", "w", stdout);

	int n;
	cin >> n;

	long double _max = 0;
	string ans;
	while (n--)
	{
		string s;
		cin >> s;

		long double cnt = 0, track = 0;
		for (char c : s)
			if (isdigit(c))
				cnt += c - '0', track++;

		if (cnt / track > _max)
		{
			_max = cnt / track;
			ans = s;
		}
	}

	cout << ans << endl;
	return 0;
}
