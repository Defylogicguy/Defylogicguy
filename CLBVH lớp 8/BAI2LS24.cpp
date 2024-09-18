/*
https://code.ntthnue.edu.vn/?CODE=viewde&r=156&idb=1016
*/
#pragma GGC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("BAI2LS24.INP", "r", stdin);
    freopen("BAI2LS24.OUT", "w", stdout);
    
    string a, b;
    cin >> a >> b;
    
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            cnt++;
    
    cout << cnt << endl;
}
