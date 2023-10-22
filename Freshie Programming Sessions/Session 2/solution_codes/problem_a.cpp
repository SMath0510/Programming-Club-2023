#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,l;
    cin>>N;
    //N=number of queries
    for(l=0;l<N;l++){
  //vector
 
 int n;
 cin>>n; //size of vector


vector<int> vec;
 for(int i=0;i<n;i++){
int x;
cin>>x;
vec.push_back(x);
 }


//sorting array,checking if adjacent elements differ at max by 1


sort(vec.begin(),vec.end());


int k=0;// flag k: k becomes 5 if answer is NO
for(int i=0;i<n-1;i++){
if(vec[i+1]-vec[i]>1){k=5; cout<<"NO\n"; break;}
}
if(k==0){cout<<"YES\n";}


}
}
