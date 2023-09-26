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
int Factorial[2000000+1];
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
    int n,m;
    cin>>n>>m;
    Factorial[0]=1;
    for(int i=1;i<m+n;i++)
    Factorial[i]=(Factorial[i-1]*i)%N;
    cout<<nCr(m+n-1,m)<<endl;
}
