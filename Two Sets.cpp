// https://cses.fi/problemset/task/1092

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
    ll sum = (n * (n + 1) / 2);
    if (sum % 2 != 0)
    {
        no;
        return;
    }
    yes;
    vector<ll> a, b;
    int first = 1, last = n;
    if (n % 2 != 0)
    {
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        first = 4;
    }
    while (first < last)
    {
        if (first % 2 != 0)
        {
            a.push_back(first);
            a.push_back(last);
        }
        else
        {
            b.push_back(first);
            b.push_back(last);
        }
        first++;
        last--;
    }
    cout << a.size() << endl;
    for (ll i = 0; i <= a.size() - 1; i++) cout << a[i] << " ";
    cout << endl;
    cout << b.size() << endl;
    for (ll i = 0; i <= b.size() - 1; i++) cout << b[i] << " ";
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
