/*******************************************************
 https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1014
 *******************************************************/
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

	freopen("VNMODBS24.INP", "r", stdin);
	freopen("VNMODBS24.OUT", "w", stdout);

	int n;
	cin >> n;

	map<int, int> mp;
	int _max = 0;
	while (n--)
	{
		int a;
		cin >> a;
		mp[a]++;
		_max = max(_max, mp[a]);
	}

	for (auto it : mp)
		if (it.second == _max)
			cout << it.first << endl;
	return 0;
}
