#include<bits/stdc++.h>
using namespace std;

bool f_inc_s_inc(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> a(n);
    
    // Second index = index in array
    for(int i = 0; i < n; i++) a[i].second = i+1; // 1 indexed in Q

    // First index = value of that element
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i].first = (x % k);
        if(a[i].first == 0) a[i].first = k;

    }

    // Values in descending order, maintaining the indexes too
    sort(a.begin(), a.end(), f_inc_s_inc);

    for(int i = 0; i < n; i++){
        cout << a[i].second << " ";
    }
    cout << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}