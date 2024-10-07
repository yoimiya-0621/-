// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// ll n,p;
// ll qpow(ll a,ll b, ll p){
//     ll res=1;
//     while(b>0){
//         if(b&1){
//             res=res*a%p;
//         }
//         b >>= 1;
//         a = a*a%p;
//     }
//     return res;
// }
// ll inv(ll a,ll p){
//     return qpow(a,p-2,p);
// }
// int main()
// {
//     cin>>n>>p;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<inv(i,p)<<'\n';
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,p;
ll ans[1000010];
ll qpow(ll a,ll b, ll p){
    ll res=1;
    while(b>0){
        if(b&1){
            res=res*a%p;
        }
        b >>= 1;
        a = a*a%p;
    }
    return res;
}
ll inv(ll a,ll p){
    return qpow(a,p-2,p);
}
int main()
{
    cin>>n>>p;
    ans[1] = 1;
    for(int i = 2; i < p; ++ i)
        ans[i] = (p - p / i) * ans[p % i] % p;
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<'\n';
    }
    return 0;
}