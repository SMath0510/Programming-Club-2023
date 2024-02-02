#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){

    int n,x; cin >> n >> x;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }    

    int pref[n+1];
    pref[0]=0;

    for(int i=1; i<=n; i++){
        pref[i] = pref[i-1]+a[i];
    }

    map<int,int> sums;
    sums[0]=1;
    int ans=0;

    for(int i=1; i<=n; i++){
        ans = ans + sums[pref[i]-x];
        sums[pref[i]]++;
    }

    cout << ans << '\n';

    return 0;
}