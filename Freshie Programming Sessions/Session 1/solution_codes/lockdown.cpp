#include<bits/stdc++.h>
using namespace std;

int main(){
    // Taking the input
    int pos, mask;
    cin >> pos >> mask;

    bool condition = (pos == 0) && (mask == 1);

    if(condition){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    
    return 0;
}