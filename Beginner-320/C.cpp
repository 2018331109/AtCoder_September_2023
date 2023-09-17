//Got wa verdict in 3/26 tests. Don't know why. 

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define ies cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int md = 1e9+7;

vector<int>v1[10], v2[10], v3[10];

void solve()
{
    int m;
    cin>>m;
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    for(int i=0;i<m;i++)
    {
        v1[i].clear();
        v2[i].clear();
        v3[i].clear();
    }
    for(int i=0; i<m; i++)
    {
        v1[s1[i]-'0'].pb(i);
    }
    for(int i=0; i<m; i++)
    {
        v2[s2[i]-'0'].pb(i);
    }
    for(int i=0; i<m; i++)
    {
        v3[s3[i]-'0'].pb(i);
    }

    for(int i=0; i<10; i++)
    {
        if(v1[i].size())
        {
            v1[i].pb(v1[i][0]+m);
            v1[i].pb(v1[i][0]+m+m);

        }
        if(v2[i].size())
        {
            v2[i].pb(v2[i][0]+m);
            v2[i].pb(v2[i][0]+m+m);

        }

        if(v3[i].size())
        {
            v3[i].pb(v3[i][0]+m);
            v3[i].pb(v3[i][0]+m+m);

        }
    }

    int ans=1000;
    int f=0;

    for(int i=0; i<10; i++)
    {
        if(v1[i].size() && v2[i].size() && v3[i].size())
        {

            //cout<<i<<endl;
            f=1;
            int res=1000;
            for(int j=0; j<v1[i].size(); j++)
            {
                int cnt1=v1[i][j];
                int cnt2, cnt3;
                for(auto it: v2[i])
                {
                    if(it!=cnt1)
                    {
                        cnt2=it;
                        break;
                    }
                }

                for(auto it:v3[i])
                {
                    if(it!=cnt1 && it!=cnt2)
                    {
                        cnt3=it;
                        break;
                    }
                }

                //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;

                int cnt=max({cnt1, cnt2, cnt3});
                res=min(res, cnt);

                //cout<<res<<endl;
            }
            ans=min(ans, res);

        }
    }

    if(f==0)
    {
        cout<<-1<<endl;
    }

    else
    {
        cout<<ans<<endl;
    }
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

