// Array in Ascending
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={3,5,1,2,4};
    std::sort(std::begin(arr),std::end(arr)); // sort by using begin and end for loop
    for(int i:arr){
        std::cout<<i<<" ";
    }


}
