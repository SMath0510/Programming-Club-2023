#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n, 0);
    /* Taking input */
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    /* Forming the prefix product */
    vector<int> prefix_product(n, 0);
    prefix_product[0] = a[0];
    for(int i=1; i<n; i++){
        prefix_product[i] = prefix_product[i-1] * a[i];
    }

    /* Processing the queries */
    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        cout << prefix_product[b-1] / prefix_product[a-1] << endl;
    }
}