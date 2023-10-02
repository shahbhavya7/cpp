// Class,Member fn and Obkect
#include <iostream>
using namespace std;

class add
{
public:
    int num1, num2, result; // data members

public:
    void read() // member function to read two numbers
    {
        cout << "Enter number 1";
        cin >> num1;
        cout << "Enter number 2";
        cin >> num2;
    }
    void sum() // member function to add two numbers
    {
        result = num1 + num2;
    }
    void display() // member function to display sum
    {
        cout << "Sum is " << result << endl;
    }
}; // class ends here
int main()
{
    add obj1; // creating object of class add
    cout << "simple addition" << endl;
    obj1.read(); // calling member function read() using object of class add
    obj1.sum(); // calling member function sum() using object of class add
    obj1.display();  // calling member function display() using object of class add
    return 0; 
}