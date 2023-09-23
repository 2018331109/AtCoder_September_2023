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
    string s;
    cin>>s;
    int i=1;
    n=s.size();
    while(i<n)
    {
        if(s[i]>=s[i-1])
        {
            no;
            return;
        }
        i++;
    }
    yes;
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

