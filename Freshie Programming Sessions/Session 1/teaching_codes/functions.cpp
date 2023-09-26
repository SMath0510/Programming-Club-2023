/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Declaring a function */

/*
    return_type function_name(arguments){
        // function body
        return _;
    }
*/
void void_function(void){
    cout << "First function\n";
    return;
}

int int_function(void){
    return 1;
}

int int_function_1(int a){
    return a;
}

string str_function(string a, string b){
    return a + b;
}

void float_function(float f1, float f2){
    cout << f1 + f2 << " ";
    return;
}

/* Your main starts here */
int main(){
    /* Using Functions */
    
    // 1. Takes in no argument, gives out no argument
    void_function();

    // 2. Takes in no argument, gives out an argument
    int return_int = int_function();

    // 3. Takes in some arguments and gives out some arguments
    int return_int_1 = int_function_1(7);

    // 4. Takes in a strings and gives their concatenated form
    string concat_string = str_function("hello ", "shaun");

    // 5. Takes in arguments, gives out nothing
    float_function(3.4, 9.2);

    // void -> empty (no argument)
}