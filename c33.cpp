// Unordered Map
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int>umap; // declaring umap to be of string int type as key will be string type and mapped value will be int type
umap["geeks for geeks"]=10; // assigning key and mapped value using [] operator
umap["Practice"]=20;
umap["Contribute"]=10;

for(auto x:umap)  // transversing unordered map meaning covering all elemnts using loop if not transversed then it will show only one element
cout<<x.first<<""<<
x.second<<endl;


}
