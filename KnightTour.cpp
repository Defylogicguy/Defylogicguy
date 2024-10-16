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

const int N = 12;
vector<vector<int>> grid(N, vector<int>(N, -1));
int n;

const vector<pair<int, int>> moves = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

void gen(int x, int y, int cur)
{
	if (cur == n * n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << grid[i][j] << ' ';
			cout << endl;
		}
		return;
	}

	for (const auto &move : moves)
	{
		int nx = x + move.first;
		int ny = y + move.second;
		if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == -1)
		{
			grid[nx][ny] = cur;
			gen(nx, ny, cur + 1);

			grid[nx][ny] = -1;
		}
	}
}

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> n;
	if (n == 2 or n == 3)
	{
		cout << "NO SOLUTION";
		return 0;
	}

	grid[0][0] = 0;
	gen(0, 0, 1);
	return 0;
}
