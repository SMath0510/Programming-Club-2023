#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, s;
    cin >> n >> s;
    ll arr[n];
    // Cant make frequency array as arr[i] can be as large as 1e9
    map<ll,ll> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]] ++; // maintaining frequency 
    }
    ll f_ele = -1;
    for(auto &mp_ele: mp){
        ll num1 = mp_ele.first;
        ll f1 = mp_ele.second;
        if((2*num1 == s) && (f1 >= 2)){
            f_ele = num1;
            break;
        }
        
        // if((2*num1 != s) && (mp.find(s - num1) != mp.end())){
        //     f_ele = num1;
        //     break;
        // }

        if((2*num1 != s) && (mp[s - num1] > 0)){
            f_ele = num1;
            break;
        }
    }
    ll idx1 = -1, idx2 = -1;
    if(2*f_ele == s){
        bool first = true;
        for(int i = 0; i < n; i++){
            if(arr[i] == f_ele){
                if(first){
                    idx1 = i + 1;
                    first = false;
                }
                else{
                    idx2 = i+1;
                }
            }
            if(idx1 != -1 && idx2 != -1) break;
        }
    }
    else if(f_ele != -1){
        for(int i = 0; i < n; i++){
            if(arr[i] == f_ele) idx1 = i+1;
            else if(arr[i] == (s-f_ele)) idx2 = i+1;

            if(idx1 != -1 && idx2 != -1) break;
        }
    }
    if(idx1 != -1 && idx2 != -1) cout << idx1 << " " << idx2 << endl;
    else cout << "IMPOSSIBLE\n";
}