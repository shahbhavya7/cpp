// Friend Class
#include <iostream>
using namespace std;

class B; // forward declaration of class B
class A // class A is friend of class B
{
private:
    int a;

public:
    A() // constructor to initialize a to 10
    {
        a = 10;
    }
    friend class B; // friend class
};
class B
{
private:
    int b; 

public:
    void showA(A &x) // function showA can access private member of class A , as it is friend of class A , &x is reference to memory location of class A
    {
        cout << "A::a=" << x.a; // accessing private member of class A
    }
};
int main()
{
    A a; // creating object of class A
    B b; // creating object of class B
    b.showA(a); // calling function showA() of class B
    return 0;
}
