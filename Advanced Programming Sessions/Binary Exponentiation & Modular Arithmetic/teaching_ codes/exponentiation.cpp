#include<bits/stdc++.h>
using namespace std;

#define ll long long

// gives a^b 
ll FastMultiplier(ll a,ll b) // Evaluates a^b
{
    ll result=1, a_pwr=a;
    while(b!=0)
    {
        if(b%2==1)
        result*=a_pwr;
        a_pwr=a_pwr*a_pwr;
        b/=2;
    }
    return result;
}

int main(){
    ll x, y;
    cin >> x >> y;
    cout << FastMultiplier(x, y);
}