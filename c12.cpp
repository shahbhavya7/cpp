// Array of objects
#include <iostream>
using namespace std;

class employee
{
    int id;
    char name[20];

public:
    void getdata(); // member function to get data
    void putdata(); // member function to display data
};
void employee::getdata() // defining member function getdata()
{
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
}
void employee::putdata() // defining member function putdata()
{
    cout << "Id: " << id << " ";
    cout << "Name: " << name << " ";
    cout << endl;
}
int main()
{
    employee emp[30]; // declaring array of objects of class employee, meaning 30 employees can be stored
    int i, n; 
    cout << "Enter number of employees: "; 
    cin >> n;
    for (i = 0; i < n; i++) // loop to get data of n employees, loop will be executed till n entered by user 
    {
        cout << "Enter details of employee " << i + 1<< endl; // i+1 is used to display employee number
        emp[i].getdata(); // calling member function getdata() using object of class employee
    }
    cout << "Details of employees are: " << endl; 
    for (i = 0; i < n; i++) // loop to display data of n employees, loop will be executed till n entered by user
    {
        emp[i].putdata(); // calling member function putdata() using object of class employee
    }
}