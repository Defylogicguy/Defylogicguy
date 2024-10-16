#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define all(x) x.begin(), x.end()
#define pb push_back
#define MOD 1000000007
#define endl '\n'

const int N = 8;
int n;
vector<vector<bool>> grid(N, vector<bool>(N, false));

bool isSafe(int x, int y)
{
	for (int i = 0; i < x; i++)
		if (grid[i][y])
			return false;

	for (int i = x, j = y; i >= 0 && j >= 0; i--, j--)
		if (grid[i][j])
			return false;

	for (int i = x, j = y; i >= 0 && j < n; i--, j++)
		if (grid[i][j])
			return false;

	return true;
}

void gen(int x)
{
	if (x == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << (grid[i][j] ? "Q " : ". ");
			cout << endl;
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < n; i++)
		if (isSafe(x, i))
		{
			grid[x][i] = true;
			gen(x + 1);

			grid[x][i] = false;
		}
}

signed main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin.exceptions(cin.failbit);
	cout.exceptions(cout.failbit);

	cin >> n;
	gen(0);
	return 0;
}
