#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i+2<n;i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
        {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;


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


