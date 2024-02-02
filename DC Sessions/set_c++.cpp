#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;

    // Inserting the elements
    s.insert(1);
    s.insert(2);
    s.insert(1);

    cout << s.size() << endl;
    
    // Finding the element
    if(s.find(2) != s.end()){
        cout << "Found 2" << endl;
    }
    
    // Finding the element
    if(s.find(3) == s.end()){
        cout << "Did not find 3" << endl;
    }

    // Element just >= 
    auto itr1 = s.lower_bound(1);
    if(itr1 == s.end()){
        cout << "No such element >= 1" << endl;
    }
    else{
        int ele = *itr1;
        cout << "The element just >= 1 " << ele << endl;
    }

    // Element just > 
    auto itr2 = s.upper_bound(1);
    if(itr2 == s.end()){
        cout << "No such element > 1" << endl;
    }
    else{
        int ele = *itr2;
        cout << "The element just > 1 " << ele << endl;
    }

    int f_1 = s.count(1);
    cout << f_1 << endl;

    int f_3 = s.count(3);
    cout << f_3 << endl;
    // if(s.count() == 0) Element not found

    // Removing elements
    s.erase(1);
    cout << s.count(1) << endl;

    // Check if set is empty
    if(s.size() == 0){}
    if(s.empty()){}

    // Iterate through the set
    for (auto ele: s){
        cout << ele << " ";
    }
    cout << endl;

    for(auto itr = s.begin(); itr != s.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;

    // Clear a set
    s.clear();

}


