#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    // Insertion
    mp.insert({1, 1});
    mp[2] = 4;
    mp.insert(make_pair(3, 9));

    // Search for a key
    if(mp.find(1) != mp.end()){
        cout << "Key, Value: " << 1 << " " << mp[1] << endl;
    }

    if(mp.find(4) == mp.end()){
        cout << "Key missing: " << 4 << endl;
    }

    // Note: if 5 is not in the key but we access mp[5], then it initializes mp[5] to 0 and adds {5, 0} to map
    cout << mp.size() << endl;
    if(mp[5] == 0) {}
    cout << mp.size() << endl;

    // Element with key just >= 
    auto itr1 = mp.lower_bound(1);
    if(itr1 == mp.end()){
        cout << "No such key >= 1" << endl;
    }
    else{
        pair<int,int> ele = *itr1;
        cout << "The key, value just >= 1 " << ele.first << " " << ele.second << endl;
    }

    // Element with key just >
    auto itr2 = mp.upper_bound(1);
    if(itr2 == mp.end()){
        cout << "No such key > 1" << endl;
    }
    else{
        pair<int,int> ele = *itr2;
        cout << "The key, value just > 1 " << ele.first << " " << ele.second << endl;
    }

    cout << mp.size() << endl;
    // Removing elements with key 3
    mp.erase(3);
    cout << mp.size() << endl;

    // Iterate through the map
    for (auto ele: mp){
        cout << ele.first << " " << ele.second << endl;
    }

    for(auto itr = mp.begin(); itr != mp.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    // check if map is empty
    if(mp.empty()){}
    if(mp.size() == 0){}



    // clear the map
    mp.clear();

    // BASIC USE CASE
    map<string, int> prize;
    prize.insert(make_pair("Adharsh", 1));
    prize.insert({"Sakshi", 2});
    prize["Laxmi"] = 3;

    cout << "Adharsh recieved " << prize["Adharsh"] << endl;
    cout << "Sakshi recieved " << prize["Sakshi"] << endl;
    cout << "Laxmi recieved " << prize["Laxmi"] << endl;

}


