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
        ll n,m;
        cin>>n>>m;

        if(n==1 or m==1)
        	cout<<"YES"<<endl;

        else if(n==2 and m==2)
        	cout<<"YES"<<endl;

        else 
        	cout<<"NO"<<endl;
    }
    return 0;
}