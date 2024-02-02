#include<bits/stdc++.h>
using namespace std;

bool f_dec_s_inc(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> a(n), b(n), c(n);
    
    // Second index = index in array
    for(int i = 0; i < n; i++) a[i].second = b[i].second = c[i].second = i;

    // First index = value of that element
    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) cin >> b[i].first;
    for(int i = 0; i < n; i++) cin >> c[i].first;

    // Values in descending order, maintaining the indexes too
    sort(a.begin(), a.end(), f_dec_s_inc);
    sort(b.begin(), b.end(), f_dec_s_inc);
    sort(c.begin(), c.end(), f_dec_s_inc);

    // TOP 3 is all we care
    int max_sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                // Check for unequal index
                bool equal_idx = (a[i].second == b[j].second) || (a[i].second == c[k].second) || (b[j].second == c[k].second);
                if(equal_idx) continue;
                int curr_sum = a[i].first + b[j].first + c[k].first;
                max_sum = max(max_sum, curr_sum);
            }
        }
    }
    
    cout << max_sum << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}