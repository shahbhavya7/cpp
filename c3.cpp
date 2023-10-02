#include <iostream>
using namespace std ;

void greet(); 
int main(){
    cout<<"Hello"<<endl; 
    greet(); // calling function    

}
void greet(){ // function definition
    cout<<"Good Morning"<<endl; // printing value of static variable
}

