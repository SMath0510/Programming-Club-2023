#include<bits/stdc++.h>
using namespace std;

// Do not swap when s1.size() < s2.size()
// If length same then the element that comes first remains first
bool sort_by_length(string &s1, string &s2){
    return s1.size() < s2.size();
}

// If length same then the element that comes lexicographically first comes first
bool sort_by_length_modified(string &s1, string &s2){
    if(s1.size() == s2.size()){
        return s1 < s2;
    }
    return s1.size() < s2.size();
}

// Normal compare is lexicographic compare
bool sort_by_lexicographic_order(string &s1, string &s2){
    return s1 < s2;
}

// Pairs

bool f_inc_s_dec(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

bool f_inc_s_inc(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

bool f_dec_s_inc(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}

bool f_dec_s_dec(pair<int, int> &p1, pair<int,int> &p2){
    if(p1.first == p2.first){
        return p1.second > p2.second;
    }
    return p1.first > p2.first;
}

bool pair_sum(pair<int, int> &p1, pair<int,int> &p2){
    return (p1.first + p1.second) < (p2.first + p2.second);
}

int main(){
    vector<string> vs = {
        "Shaun",
        "Chahel", 
        "Shauna", 
        "Ayman"
    };
    vector<string> vs1 = vs;
    vector<string> vs2 = vs;

    sort(vs.begin(), vs.end(), sort_by_length);
    sort(vs1.begin(), vs1.end(), sort_by_length_modified);
    sort(vs2.begin(), vs2.end(), sort_by_lexicographic_order);

    for(auto &str : vs) cout << str << " ";
    cout << "\n";

    for(auto &str : vs1) cout << str << " ";
    cout << "\n";

    for(auto &str: vs2) cout << str << " ";
    cout << "\n";

    vector<pair<int,int>> vp = {
        {1,1},
        {1,2},
        {2,1},
        {3,4},
        {4,3}
    };

    vector<pair<int,int>> vp1 = vp;
    vector<pair<int,int>> vp2 = vp;

    sort(vp.begin(), vp.end(), f_inc_s_dec);
    sort(vp1.begin(), vp1.end(), f_dec_s_inc);
    sort(vp2.begin(), vp2.end(), pair_sum);

    for(auto &ele : vp) cout << ele.first << " " << ele.second << endl;

    for(auto &ele : vp1) cout << ele.first << " " << ele.second << endl;

    for(auto &ele : vp2) cout << ele.first << " " << ele.second << endl;        
}