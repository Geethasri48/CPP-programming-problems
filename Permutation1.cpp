// Negative and positive difference subarrays
// a=2^(i-1) 1<=i<=n
// b=-1 or b=1 1<=i<=n
// c=a.b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[n],b[n];
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]-1]=i;
    }
    int l=b[n-1];
    int r=b[n-1];
    int res=0;
    for(int i=1;i<=n;i++)
    {
        int ind=b[n-i];
        if(ind<l)l=ind;
        else if(ind>r)r=ind;
        if(r-l+1==i)res=i;
    }
    cout << res<<"\n";
    cout << l<< r;
}
