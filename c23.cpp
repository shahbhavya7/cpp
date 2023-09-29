#include<iostream>
using namespace std;
class shape {
    public:
        virtual void calculate()  // virtual function it requires some implementation in base class
            {cout<<"Area of your Shape";} // Implementation, if we remove it code wont run
        
};

class rectangle:public shape {
    public:
        int width = 5, height = 7, area ;
            void calculate(){
                area=height*width;
                    cout<<"Area of Rectangle \n "<<area;}
};

class square:public shape {
    public:
        int side = 5, area ;
            void calculate(){
                area=side*side;
                    cout<<" \n Area of Square \n "<<area;}
};

    int main(){
        shape *S; // base class pointer , S represents base class
        rectangle r; // creating object for class rectangle
        S= &r; // Intialization of variable fn , assigning shape fn to rectangle 
        S->calculate(); // calling rectangle function
        square sq;  // creating object for class square 
        S= &sq; //  Intialization of variable fn , assigning shape fn to square
        S->calculate(); // calling square function
}