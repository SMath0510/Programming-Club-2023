/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){
    /* Using in-built C++ sort function */

    // sorting a vector
    vector<int> v = {1,4,3,2,6};
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // sorting an array
    int arr[] = {1,4,3,2,6};
    sort(arr, arr+5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}