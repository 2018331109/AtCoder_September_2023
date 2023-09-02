#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    int n, d, p;
    cin>>n>>d>>p;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());

    int i=0;
    int ans=0;
    while(i<n)
    {
        int sum=0;
        int cnt=0;
        int st=i;
        while(cnt<d && i<n)
        {
            sum+=a[i];
            cnt++;
            i++;
        }
        if(cnt<=d)
        {
            ans+=min(sum, p);
        }
        else
        {
            i=st;
            break;
        }

    }

    while(i<n)
    {
        ans+=a[i];
        i++;
    }

    cout<<ans<<endl;
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

