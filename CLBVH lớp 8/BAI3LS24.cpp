/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1017
*/
#pragma GGC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 1e6 + 7;
bool prime[maxn];

void sieve()
{
    for (int i = 2; i < maxn; i++)
        prime[i] = true;

    for (int i = 2; i < maxn; i++)
        if (prime[i])
            for (int j = i * i; j < maxn; j += i)
                prime[j] = false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("BAI3LS24.INP", "r", stdin);
    freopen("BAI3LS24.OUT", "w", stdout);
    int n;
    cin >> n;

    int b = 0, c = 0;
    sieve();
    while (n--)
    {
        int a;
        cin >> a;

        if (a == 1)
            b++;
        else if (prime[a])
            c++;
    }

    cout << b * c << endl;
}
