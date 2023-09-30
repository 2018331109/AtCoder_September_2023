#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);
    for (int i = 1; i <= n; i++)
    {
        auto it = lower_bound(a, a + m, i);
        if (it == a + m)
        {
            cout << n - i << endl;
        }
        else
        {
            cout << (*it) - i << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    //cin>>test;
    for (int t = 1; t <= test; t++)
    {
        solve();
    }
}

