#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
#define mod 1000000007
#define Fact_length 200001

ll Factorial[Fact_length];

// Computes the array factorial
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

int main(){
    Make_Factorial();
    ll x;
    cin >> x;
    cout << Factorial[x];
}