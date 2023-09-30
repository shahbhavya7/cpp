// Access specifiers in inheritance 
#include <iostream>
using namespace std ;

class base{
    private:
        int hra=900;
    public:
        int sal=50000;
     void disp(){
            cout<<"hra="<<hra<<endl; // as hra is private to access it we need to use a member fn in its class in form of display
        }
    protected:
        int da=2000;
};
class derived: public base{
    public:
        int bonus=3000;

void display(){
    cout<<"da="<<da<<endl;} // as da is protected we need a member fn to access it in derived class
    // for protected fn we dont need to use a member fn in its class to access it in derived class we can use member fn in anywhere in derived class to access it
};
    int main(){
        derived d1;
        d1.disp(); // accessing hra using member fn
        cout<<"salary="<<d1.sal<<endl; // as sal is public we can access it directly 
        d1.display(); // accessing da using member fn
        cout<<"bonus="<<d1.bonus<<endl; // as bonus is public we can access it directly
        
    }