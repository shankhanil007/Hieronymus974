#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    rotate(a,a+2,a+n);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;

}