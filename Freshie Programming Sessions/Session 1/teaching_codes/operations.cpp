/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){    
    /* Arithmetic Operations */
    
    int a, b; // multiple variable of one type can be declared
    cin >> a >> b; // take in the a and b
    
    int sum = a + b; 
    int sub = a - b;
    int mul = a * b;
    int integer_div = a / b;
    
    /* How to do decimal division? */
    
    float decimal_div = (1.0 * a) / (1.0 * b);
    // float * int -> float :: types
    
    /* Bitwise Operators */
    
    int Xor = (a ^ b);
    int Or = (a | b);
    int And = (a & b);

    /* Logical Operators */
    
    bool b1 = true, b2 = false;
    bool conditional_and = (b1 && b2); // AND OPERATOR
    bool conditional_or = (b1 && b2); // OR OPERATOR
    bool conditional_xor = (b1 ^ b2); // XOR OPERATOR
    
    /* Comparison Operator */
    
    bool is_equal = (a == b);
    bool is_greater = (a > b);
    bool is_greater_eq = (a >= b);
    bool is_less = (a < b);
    bool is_less_eq = (a <= b);
    bool is_not_equal = (a != b);
    
    /* Basic Mathematical Functions */
    
    float square_root = sqrt(9);
    int square_root_int = sqrt(10);
    int ceil_value = ceil(10.1);
    int floor_value = floor(10.1);
    int abs_value = abs(-100);
    int power_value = pow(3, 4);
    
    /* Key words */
    int max_int_value = INT_MAX;
    int min_int_value = INT_MIN;
    int overflow_check = max_int_value + max_int_value;
    
    // using long long int
    long long int max_int_in_long = INT_MAX;
    long long int overflow_long_check = max_int_in_long + max_int_in_long;
    cout << overflow_check << " " << overflow_long_check << endl;    
}
