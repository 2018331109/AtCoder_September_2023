#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    int f = 0, ff = 0;
    string st=t.substr(0, n);
    if(st==s)
    {
        f=1;
    }
    string sp=t.substr(m-n);
    if(sp == s)
    {
        ff=1;
    }

    if (f && ff)
    {
        cout << "0" << endl;
        return;
    }
    if (f == 1)
    {
        cout << "1" << endl;
        return;
    }
    if (ff == 1)
    {
        cout << "2" << endl;
        return;
    }
    cout << "3" << endl;
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    //cin>>test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }
}

