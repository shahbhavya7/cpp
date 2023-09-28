// Template
#include<iostream>
using namespace std;
template <typename T> 
T mymax(T x,T y){
    return(x>y)? x:y; // return the bigger value out of from x and y
}
int main(){
cout<<mymax<int>(3,7)<<endl;
cout<<mymax<double>(3.0,7.0)<<endl;
cout<<mymax<char>('g','e')<<endl;


}
