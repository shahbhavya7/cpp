// Default Arguments
#include <iostream>
using namespace std ;

void display(char='*',int=3); // function declaration with default arguments
 int main()
 {  int count=5;
     cout<<"\nFirst argument passed: ";
     display('#');} // first argument passed, as char is passed but int is not passed so it is printed 3 times that is default value of int
    void display(char c,int count) // function definition with default arguments
    {for(int i=1;i<=count;i++)
    cout<<c;
    }