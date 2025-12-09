// https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    for (ll i = 2; i <= n; i += 2)
        cout << i << " ";
    for (ll i = 1; i <= n; i += 2)
        cout << i << " ";
    cout << endl;
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
