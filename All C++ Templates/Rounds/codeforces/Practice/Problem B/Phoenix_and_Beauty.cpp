
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
        ll n,k,i,j,l;
        cin>>n>>k;

        vector<ll>v;
        set<ll>s;

        for(i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
        }

        if(s.size()>k)
        cout<<-1<<endl;

        else if(s.size()<=k)
        {
            cout<<n*k<<endl;
            for(i=0;i<n;i++)
            {
                for(auto j:s)
                cout<<j<<" ";

                for(l=0;l<k-s.size();l++)
                cout<<1<<" ";
            }
            cout<<endl;
        }

        
    }
    return 0;
}