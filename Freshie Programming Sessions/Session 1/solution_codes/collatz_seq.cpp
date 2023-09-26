#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the input
    int n;
    cin >> n;

    while(n > 1){
        cout << n << " "; // printing the sequence in space seperated form
        if((n%2) == 0){
            // even
            n = n / 2;
        }
        else{
            // odd
            n = 3*n + 1;
        }
    }
    cout << n << " "; // this is 1 basically, the final value
    return 0;
}