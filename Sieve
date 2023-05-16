// #include <stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
#define N 1e6
vector<bool>seive(N+1,true); // Take an vector of length of 10^6
bool def(){
    seive[0]=seive[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==true)
        {
            for(int j=i*i ;j<=N;j+=i)
            {
                seive[j]=false;
            }
        }
    }
    // for(int i=1;i<=N;i++){
    //     seive[i]=seive[i]+seive[i-1];
    // }
}
int main() {
    def();
    int n;
    cin>> n;
    if(seive[n]==true) cout<<"Prime";
    else cout <<"Not prime";
    // int l,r;
    // cin>> l>>r;
    // cout << seive[r]-seive[l-1] <<"\n";
    
}
