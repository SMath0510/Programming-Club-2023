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

int main(){
    ll x, y;
    cin >> x >> y;
    cout << BinExponentiation(x, y);
}