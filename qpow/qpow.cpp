#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,p;
ll qpow(ll a, ll b,ll p)
{
    ll res=1;
    for(; b>0; b >>= 1,a = a * a % p)
    {
        if(b & 1){
            res = res * a % p;
        }
    }
    return res;
}
int main()
{
    cin>>a>>b>>p;
    cout<<a<<'^'<<b<<' '<<"mod "<<p<<"="<<qpow(a,b,p);
    return 0;
}