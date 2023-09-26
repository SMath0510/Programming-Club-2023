#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the input
    long long int n;
    cin >> n;

    long long int factorial = 1; // to avoid overflow
    for(long long int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    // note that factorial of 0 is 1 (and this code satisfies that)
    cout << factorial;
    return 0;
}