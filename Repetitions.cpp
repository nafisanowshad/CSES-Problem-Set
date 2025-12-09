// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve()
{
    string s;
    ll cnt = 1, ans = 1;
    cin >> s;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i]) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
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
