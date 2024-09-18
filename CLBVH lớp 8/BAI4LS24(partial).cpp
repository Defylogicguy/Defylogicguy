/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1018
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
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

	freopen("BAI4LS24.INP", "r", stdin);
	freopen("BAI4LS24.OUT", "w", stdout);

	string s;
	int d = 0, d1 = 0, kq = 0;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++)
		if (s[i] == '(')
		{
			d = 0;
			d1 = 0;
			for (int j = i + 1; j < s.size(); j++)
			{
				if (s[j] == ')')
					d++;
				if (s[j] == '(')
					d1++;
				if (d1 + 1 == d)
					kq++;
				if (d - d1 - 1 > 0)
					break;
			}
		}
	cout << kq;
	return 0;
}
