#include <iostream>
using namespace std;

struct mystructure
{
    int my_num;
    string my_name;
} mystructure;
int main()
{
    mystructure.my_num = 10; // assigning value to my_num
    mystructure.my_name = "Bhavya"; // assigning value to my_name
    cout << "My name is " << mystructure.my_name << " and my number is " << mystructure.my_num << endl; // printing values
    return 0;
}
