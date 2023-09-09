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
    int n;
    cin>>n;
    vector<int>ans(n+1, -1);

    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=9; j++)
        {
            if((n%j)==0 && i%(n/j)==0)
            {
                ans[i]=j;
                break;
            }
        }
    }

    for(int i=0; i<=n; i++)
    {
        if(ans[i]==-1)
        {
            cout<<'-';
        }
        else
        {
            cout<<ans[i];
        }
    }
    cout<<endl;
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

