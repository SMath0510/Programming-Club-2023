/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){
    /* Arrays */
    // collection of similar objects
    /*
     _ _ _ _ _
    |_|_|_|_|_| -> Array
    = Store elements of same type in them
     */

    int arr[10]; // array of size 10
    arr[0] = 1; // assigning value
    cout << arr[0] << endl; // first element of the array

    float arr_float[10];
    char arr_char[10];

    // can make array of given size too
    int array_size;
    cin >> array_size;
    int arr_int[array_size];
     
    // Taking input in an array using a loop
    for(int i = 0; i < 10; i++){
        cin >> arr[i]; 
    }
     
    // Printing the content of an array in a space seperated formal
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;    

    /* Find maximum value in an array */
    int max_value = arr[0];
    for(int i = 0; i < 10; i++){
        if(max_value < arr[i]){
            max_value = arr[i];
        }
        // alternate method
        // max_value = max(max_value, arr[i]);
    }
    cout << max_value << endl;

}
