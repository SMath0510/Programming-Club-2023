#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define N 1000000007
int Power(int a,int b)
{
    int result=1;
    while(b!=0)
    {
        if(b%2!=0)
        result*=a;
        a=a*a;
        a%=N;
        result%=N;
        b/=2;
    }
    return result;
}
int Factorial[1000006+1];
int Mod_Inv(int a)
{
    return Power(a%N,N-2);
}
int nCr(int n,int r)
{
    return (((Factorial[n]*Mod_Inv(Factorial[r]))%N)*Mod_Inv(Factorial[n-r]))%N;
}
int32_t main()
{
    int n;
    cin>>n;
    Factorial[0]=1;
    for(int i=1;i<n+1;i++)
    Factorial[i]=(Factorial[i-1]*i)%N;
    int a=2;
    int b=3;
    int suma=0;
    int sumb=0;
    while(a<=n)
    {
       suma+=Mod_Inv(Factorial[a]);
       suma%=N;
       a+=2;
    }
    while(b<=n)
    {
        sumb+=Mod_Inv(Factorial[b]);
        sumb%=N;
        b+=2;
    }
    int ans=(suma-sumb+N)%N;
    ans*=(Factorial[n]);
    ans%=N;
    cout<<ans<<endl;
}
