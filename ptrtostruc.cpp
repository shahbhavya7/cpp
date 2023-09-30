// Pointer to Structure
#include <iostream>
using namespace std ;
struct distance{
    int feet; // declaring feet and inch as members of structure distance
    float inch;};

int main(){
    ::distance *ptr, d; // declaring ptr as pointer to structure distance and d as object of structure distance
    ptr=&d; // assigning address of d to ptr so that *ptr can be used in place of d
    cout<<"Enter feet: ";
    cin>>(*ptr).feet;
    cout<<"Enter inch: ";
    cin>>(*ptr).inch;
    cout<<"Displaying information."<<endl;
    cout<<"Distance = "<<(*ptr).feet<<" feet "<<(*ptr).inch<<" inches";
    return 0;
}
