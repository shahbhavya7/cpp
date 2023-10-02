// Default Arguments
#include <iostream>
using namespace std ;

void display(char='*',int=1); // function declaration with default arguments
 int main()
 {  int count=5;
     cout<<"No argument passed: ";
     display(); }// no argument passed, as nothing is passed default arguments that is * is printed 3 times
    void display(char c,int count) // function definition with default arguments
    {for(int i=1;i<=count;i++)
    cout<<c;
    }
    
 