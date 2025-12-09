// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    ll x;
    cin >> x;
    for (ll n = 1; n <= x; n++)
    {
        ll size = n * n;
        ll allWays = size * (size - 1) / 2;
        ll badWays = 0;
        badWays += 8 * (n - 4) * (n - 4);
        badWays += 6 * (n - 4) * 4;
        badWays += 4 * (n - 3) * 4;
        badWays += 3 * 8;
        badWays += 2 * 4;
        badWays /= 2;
        cout << allWays - badWays << endl;
    }
}

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // ll tstcs;
        // cin >> tstcs;
        // for (int t = 1; t <= tstcs; t++)
        {
            // cout << "Case " << t << ": ";
            solve();
        }
        return 0;
    }
