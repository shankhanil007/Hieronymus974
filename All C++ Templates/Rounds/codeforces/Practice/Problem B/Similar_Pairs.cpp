
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
        ll n,cntabs=0,cnt0=0,cnt1=0,i;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        sort(v.begin(),v.end());

        for(i=0;i<n;i++)
        {
            if(i==0)
            continue;

            else 
            {
                if(abs(v[i]-v[i-1])==1)
                cntabs++;
            }
        }

        if(cntabs>=1)
        cout<<"YES"<<endl;

        else 
        {
            for(i=0;i<n;i++)
            {
                if(v[i]%2==0)
                cnt0++;

                else if(v[i]%2==1)
                cnt1++;
            }

            if(cnt1%2==0 and cnt0%2==0)
            cout<<"YES"<<endl;

            else 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}