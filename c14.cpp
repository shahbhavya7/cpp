// Constructor Overloading
#include <iostream>
using namespace std ;
class line{
    public:
        // multiple constructors in a class
        line(int a);
        line(int x,int y);
        line(int p,int q,int r);
};

line::line(int a){ // defining constructors
    cout<<"object created and intiated to value  "<<a<<endl; 
}
line::line(int x,int y){ // defining constructors
    int z=x+y; 
        cout<<"object created and intiated to value  "<<z<<endl;
}
line::line(int p,int q,int r){ // defining constructors
    int s=p+q+r;
        cout<<"object created and intiated to value  "<<s<<endl;
}
int main(){
    line l1(10); // calling constructors , here when we pass 10 it automatically calls the constructor with one parameter
    line l2(10,55);
    line l3(10,55,65);
        return 0;
}

