#include<bits/stdc++.h>
using namespace std;

void fun1(int n, int m){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cnt ++;
        }
    }

    for(int i = 0; i < m; i++){
        cnt ++;
    }
}

void fun2(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i*=2){
        cnt ++;
    }
}

/*
Hint: ln(x) = 1 + 1/2 + 1/3 + ... 1/x
*/

void fun3(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j += i){
            cnt ++;
        }
    }
}

int main(){
    return 0;
}

