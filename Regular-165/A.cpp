#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
#define neg cout << -1 << endl;

int md = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    bool found = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && (__gcd(i, n / i) == 1))
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        yes
    }
    else
    {
        no
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    for (int t = 1; t <= test; t++)
    {
        solve();
    }
}

