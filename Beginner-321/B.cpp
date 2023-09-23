#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;


void solve()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n-1];
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n-1);
    //cout<<sum<<endl;



    for(int i=0; i<=100; i++)
    {
        int total=sum+i;
        total-=min(i, a[0]);
        total-=max(i, a[n-2]);
        //cout<<total<<endl;
        if(total>=x)
        {
            cout<<i<<endl;
            return;
        }
    }

    cout<<-1<<endl;
    return;



}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    //cin>>test;
    for(int t=1; t<=test; t++)
    {
        solve();
    }

}

