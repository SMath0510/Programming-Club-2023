#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int f[n+1];
        memset(f, 0, sizeof(f));
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x > n) continue;
            f[x] ++;
        }
        for(int i = 0; i <= n; i++){
            if(f[i] == 0){
                cout << i << "\n";
                break;
            }
        }
    }
}