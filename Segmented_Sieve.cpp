#include<bits/stdc++.h>
#include<stdio.h>
using namespacestd;
typedef long long ll;
#define N 1e6
vector<int>v(N,true);
void prime(){
    v[0]=v[1]=false;
    for(int i=2;i*i<=R;i++)
    {
        if(v[i]==true)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                v[j]=false;
            }
        }
    }
}
vector<int>seg_siv(int n){
    vector<int>primes();
    for(int i=2;i<=n;i++)
    {
        if(v[i]==true)primes.push_back(i);
    }
}

int main()
{
    prime();
    int l,r;
    cin>>l >>r;
    vector<int>res=seg_siv(sqrt(n));
    vector<int>res1(r-l+1,1);
    for(auto it:res)
    {
        int fm=(l/it)*it;//to get multiples
        fm=(fm<l)?fm+l:fm;
        for(int i=max(fm,it*it);i<=r;i+=it)
        {
            res1[i-l]=0;
        }
    }
    for(int i=0;i<res1.size();i++)
    {
        cout << res1[i] <<"\n";
    }
}
