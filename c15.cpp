// Copy Constructor
#include <iostream>
using namespace std ;

class point {
    private:
        int x,y;
    public:
        point(int x1, int y1) {x=x1; y=y1;}
        point(const point &p2) {x=p2.x; y=p2.y;} // copy constructor , here we are passing an object of class point as a parameter for p2
        int getX() {return x;} // here we are using p2.x and p2.y to access the private members of class point
        int getY() {return y;} // declaring getX and getY fn to access private members of class point
};
    int main(){
        point p1(10,15);
        point p2=p1;
        point p3(p2);
        cout<<"p1.x="<<p1.getX()<<" p1.y="<<p1.getY()<<endl; // p1.getx() and p1.gety() are used to access private members of class point after assigning value to p1 and p2
        cout<<"p2.x="<<p2.getX()<<" p2.y="<<p2.getY()<<endl;
        cout<<"p3.x="<<p3.getX()<<" p3.y="<<p3.getY()<<endl;
        return 0;
    }