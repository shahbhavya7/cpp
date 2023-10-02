// Constructor with Parameters
#include <iostream>
using namespace std ;
class employee{
    public:
        int id;
        string name;
        float salary;
        employee(int i,string n,float s){ // constructor with parameters , here we are passing values to the constructor
            id=i;
            name=n;
            salary=s;
        }
        void display(){
            cout<<id<<"  "<<name<<"  "<<salary<<endl; // printing values
        }
};
int main(){
    employee e1=employee(101,"Bhavya",100000); // creating object of class employee and passing values to constructor
    employee e2=employee(102,"Raj",200000);
    e1.display(); // calling member function display() using object of class employee
    e2.display();
    return 0;
}