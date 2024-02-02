#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define Fact_length 200001

ll Factorial[Fact_length];

// Gives a^b
ll BinExponentiation(ll a, ll b)
{
    ll result=1;
    ll a_pwr=a%mod;
    while(b)
    {
        if(b%2==1) result*=a_pwr;
        a_pwr*=a_pwr;
        a_pwr%=mod; // Take modulo everywhere
        result%=mod;
        b/=2;
    }
    return result;
}

// gives the modulo inverse of a with respect to mod
ll Mod_Inv(ll a)
{
    a%=mod;
    ll x= BinExponentiation(a,mod-2);
    return x;
}

ll Make_Factorial()
{
    Factorial[0]=1;
    for(ll i=1;i<Fact_length;i++)
    {
        Factorial[i]=i*Factorial[i-1];
        Factorial[i]%=mod;
    }
    return 0;
}

ll nCr(ll n, ll r)
{
    if(n<r) return 0;
    ll ans=Factorial[n];
    ans%=mod;
    ans*=Mod_Inv(Factorial[r]);
    ans%=mod;
    ans*=Mod_Inv(Factorial[n-r]);
    ans%=mod;
    return ans;
}

int main(){
    Make_Factorial();
    ll n, r;
    cin >> n >> r;
    cout << nCr(n, r);
}