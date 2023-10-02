// Default Arguments
#include <iostream>
using namespace std ;

void display(char='*',int=3); // function declaration with default arguments
 int main()
 {  int count=5; // count is declared but not used
      cout<<"\nBoth argument passed: ";
     display('$',5);} // both argument passed, as char i.e. $ and int i.e. 5 is passed so it is printed 5 times
    void display(char c,int count) // function definition with default arguments
    {for(int i=1;i<=count;i++)
    cout<<c;
    }