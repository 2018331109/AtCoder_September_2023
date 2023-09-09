#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    map<string, int> mp =
    {
        {"tourist", 3858},
        {"ksun48", 3679},
        {"Benq", 3658},
        {"Um_nik", 3648},
        {"apiad", 3638},
        {"Stonefeang", 3630},
        {"ecnerwala", 3613},
        {"mnbvmar", 3555},
        {"newbiedmy", 3516},
        {"semiexp", 3481}
    };

    string s;
    cin>>s;
    cout<<mp[s]<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

