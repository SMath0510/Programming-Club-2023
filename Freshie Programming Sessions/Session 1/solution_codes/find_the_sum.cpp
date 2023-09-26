#include <bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> numbers(n, 0);
    // Taking the input in array numbers
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    vector<int> prefix_sum(n, 0); // prefix sum array
    prefix_sum[0] = numbers[0];
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1] + numbers[i]; // forming the prefix sum array
    }

    /* Processing the queries */
    for(int i=0; i<q; i++){
        int k;
        cin >> k; // it is 1 indexed so we need to check index k-1
        cout << prefix_sum[k-1] << endl;
    }
}