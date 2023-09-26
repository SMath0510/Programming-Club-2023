#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the input
    int n;
    cin >> n;

    // Check the remainder by 2
    int remainder = (n % 2);
    if((remainder) == 0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    return 0;
}