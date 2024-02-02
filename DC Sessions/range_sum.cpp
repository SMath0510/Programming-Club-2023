#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q; cin >> n >> q;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }    

    int pref[n+1];
    pref[0]=0;
    for(int i=1; i<=n; i++){
        pref[i] = pref[i-1]+a[i];
    }

    while(q--){
        int a,b; cin >> a >> b;
        cout << pref[b] - pref[a-1] << '\n';
    }

    return 0;
}