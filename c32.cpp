// Ordered Map
#include<iostream>
#include<map>
using namespace std;
int main (){
std::map<std::string,int>map; // creating map of strings which act as key for int that is for values
map["one"]=1;
map["two"]=2;
map["three"]=3;
std::map<std::string,int>::iterator it=map.begin(); // putting an iterator pointing to first element in map
while(it!=map.end()){ // iterating through the map and printing elements 
    std::cout<<"key"<<it ->first<<"value"<<it ->second<<std::endl; // it ->first is for the key and it ->second is for value 
    ++it;
}
// it! means it is not equal to map and there are other elements
}