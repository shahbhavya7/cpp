// Static variable
#include <iostream>
using namespace std ;

int fun(); // function prototype
int main(){
    int i;
    for(i=0;i<5;i++){ // loop to call function 5 times
        cout<<"Value of count ="<<fun()<<endl; // calling function
    }
    fun(); // calling function
    return 0;
}
int fun(){ // function definition
    static int count=0; // static variable
    count++; // incrementing static variable
    return count;
    cout<<"Value of count ="<<count<<endl; // printing value of static variable
}
