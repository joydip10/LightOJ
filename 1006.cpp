#include<bits/stdc++.h>
#define mod 10000007

using namespace std;

typedef long long int ll;
long long dp[100001]={-1};
long long  a, b, c, d, e, f;
ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!= -1) return dp[n];
    else{
        dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%mod;
        return dp[n];
    }
}
int main()
{
    ll x= 1;
    ll t,n;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", x++, fn(n)%mod);
    }
    return 0;
}
