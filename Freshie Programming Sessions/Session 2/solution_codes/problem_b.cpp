#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,l;
    cin>>N; 
    //N=number of queries
    for(l=0;l<N;l++){
  //vector
 
 int n,k;
 cin>>n>>k; //size of vector
int nn=n;
n=k;
vector<int> vec;
 for(int i=0;i<n;i++){
int x;
cin>>x;
vec.push_back(x);
 }
vector<int> a;
 for(int i=0;i<n-1;i++){
a.push_back(vec[i+1]-vec[i]);
 }

//check if a is sorted
// a has n-1 elements
int c=0; // c=0 means yes, c=5 means no
for(int i=0;i<n-2;i++){
if(a[i]>a[i+1]){c=6;break;}
}

if(a[0]*(nn-n)<vec[0] && n!=k){c=5;}
cout<<c<<"\n";
if(c==5)cout<<"No\n";
else cout<<"Yes\n";

}
}