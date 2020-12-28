#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll n,i,j,ans=INT_MIN;
        cin>>n;

        vector<pair<ll,ll>>v(n);

        for(i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v[i]=make_pair(a,1);
        }
        
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((j+1)%(i+1)==0 and v[j].first>=v[i].first)
                v[j].second=v[i].second+1;
            }
        }

        for(auto i:v)
        ans=max(ans,i.second);

        cout<<ans<<endl;
    }
    return 0;
}