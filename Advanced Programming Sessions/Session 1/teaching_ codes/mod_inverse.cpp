#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

// Take a and b as input and returns : The power (a,b) , (a^b) % mod.
// mod need not be a prime OR coprime to b.
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

int main(){
    ll x;
    cin >> x;
    cout << Mod_Inv(x);
}