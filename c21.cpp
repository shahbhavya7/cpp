// Function Overloading
#include<iostream>
using namespace std;
class displaydemo{
    public:
        void disp(int x){cout<<" \n x is "<<x;} // display with 1 int parameter
        void disp(double x){cout<<" \n x is"<<x;} // display with 1 double parameter
        void disp(int x, int y){cout<<" \n x and y is"<<x<<y;}}; // fn with same name and 2 int parameter
    int main(){ // fn being called depend on parameters passed
        displaydemo demo; // display is called with int value
        demo.disp(5);
        demo.disp(9.132);
        demo.disp(45,156);
        return 0;
 }

