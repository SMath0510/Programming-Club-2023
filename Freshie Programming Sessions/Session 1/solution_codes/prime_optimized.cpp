#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the input
    int n;
    cin >> n;

    if(n == 1){
        cout << "Neither";
    }
    else{
        bool is_prime = true;
        for(int i = 2; i*i <= n; i++){
            int remainder = (n % i);
            if(remainder == 0){
                // n is divisible by i -> not prime
                is_prime = false;
                break; // breaks out of the loop
            }
        }
        if(is_prime){
            cout << "Prime";
        }
        else {
            cout << "Composite";
        }
    }
    return 0;
}