/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){        
    /* Loops */
    
    // for loop (counter initialize; condition; incrementer)
    for(int i = 0; i < 10; i++){
        cout << i << " "; // printing with spaces
    }
    cout << endl; // endl == \n (end line)
    
    for(int i = 10; i >= 1; i--){
        cout << i << " "; // printing with spaces
    }
    
    // while loop (condition)
    int i = 0;
    while(i < 10){
        cout << i << " ";
        i ++;
    }
    cout << endl;
    
    int i = 10;
    while(i >= 1){
        cout << i << " ";
        i --;
    }
    cout << endl;
    
    /*  
    Testing Programmes
        1. Print all the odd numbers from 1 to 20 (using for and while both)
        2. Print all multiples of 4 between 1 and 100 (using for and while both)
        3. Find out factorial of a number (< 20)
    */    

    /* Calculate number of digits */
    int num; cin >> num;
    int digs = 0;
    while(num > 0){
        num /= 10;
        digs ++;
    }
    cout << digs << endl;
}
