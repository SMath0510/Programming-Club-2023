/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){
    /* Conditional Statements */
    // if - else if - else
    bool condition_1 = true, condition_2 = false;
    
    /* Playing around with the conditions :) */
    if(condition_1){
        cout << "Condition 1\n";
    }
    if(condition_2){
        cout << "Condition 2\n";
    }
    
    if(condition_1){
        cout << "Condition 1\n";
    }
    else if(condition_2){
        cout << "Condition 2\n";
    }
    else{
        cout << "No Condition\n";
    }
    
    if(condition_1 && condition_2){
        cout << "Both Conditions \n";
    }
    
    if(condition_1 ^ condition_2){
        cout << "Only one condition\n";
    }
    
    if(condition_1){
        cout << "Condition 1 YES \n";
    }
    else {
        cout << "Condition 1 NO \n";
    }
    

    /* The Modulo Operator :: check remainder (%)*/
    int a, b;
    cin >> a >> b; // can take multiple inputs in one line
    int remainder = a % b;
    // if a is divisible by b then remainder = 0, else its != 0
    
    /*
    Testing Programmes
        1. Write a programme to check if a number lies between 1 and 100
        2. Write a programme to check if a number if prime :)
        3. Solve WaterMelon CF : https://codeforces.com/problemset/problem/4/A
        4. Check and implement a absolute grading system
    */

    /* Check if number is even */
    int num; cin >> num;
    if(num % 2 == 0) {
        // it is even
    }
    else { 
        // it is odd
    }

    /* Nesting If Else*/
    if(num >= 1){
        if(num == 2){
            // num is 2
        }
        else{
            // num >= 1 and num !=2
        }
    }
    else{
        // num < 1
    }
        
}
