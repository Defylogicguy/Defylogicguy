/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1013
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("UOCLEBS24.INP", "r", stdin);
    freopen("UOCLEBS24.OUT", "w", stdout);

    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;

        vector<int> idk;
        for (int i = 1; i * i <= n; i++)
            if (n % i == 0)
            {
                if (i % 2 == 1)
                    idk.push_back(i);
                if ((n / i) % 2 == 1 and n / i != i)
                    idk.push_back(n / i);
            }

        sort(idk.begin(), idk.end());
        for (int i : idk)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
