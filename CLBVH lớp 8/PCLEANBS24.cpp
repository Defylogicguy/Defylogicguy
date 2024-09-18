/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1011
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e6 + 1;

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

int a[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("PCLEANBS24.INP", "r", stdin);
    freopen("PCLEANBS24.OUT", "w", stdout);

    int n;
    cin >> n;
    cin >> a[0];
    int l = a[0];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        l =  lcm(l, a[i]);
    }

    cout << l << endl;
    for (int i = 0; i < n; i++)
        cout << l / a[i] << ' ';
    return 0;
}
