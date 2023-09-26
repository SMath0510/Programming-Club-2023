/* Consider this as a formality in coding :: though this is really important */
#include<bits/stdc++.h>
using namespace std;

/* Your main starts here */
int main(){
    /* Vectors :: Similar to arrays, but dynamic size*/
    vector<int> vec1(10); // declared a vector of size 10
    vector<int> vec2(20, 0); // declared a vector of size 20 with all initial values as 0
    vec1[0] = 100; // modified the 1st element in vec1 to 100

    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;
    /* Vector Functions
        vec.size() -> gives the size of the vector
        vec.push_back(e) -> pushes back an element e in the vector (size increases by 1)
        vec.pop_back() -> removes the last element of the vector (size reduces by 1)
        vec.empty() -> returns true if vector is empty else returns false
        vec.insert(e, i) -> inserts element e at the ith position in the vector
        vec.clear() -> clears the entire vector (size = 0)
        vec.erase(element) -> removes the element from the vector
    */

    vector<float> float_vec;
    cout << float_vec.size() << endl; // initial size <= 0
    for(int i = 0; i < 7; i++){
        float_vec.push_back(i);
    }
    for(int i = 0; i < float_vec.size(); i++){
        cout << float_vec[i] << " "; // space seperated printing
    }
    cout << endl;
}