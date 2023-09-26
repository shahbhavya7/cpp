#include<iostream>

using namespace std;

class Student
{
    public: 
    int roll;
    string name;
    float marks;

    public:
    void input(){
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;   
    }
    void display(){
        cout<<"Student Details are: "<<endl;
        cout<<"Roll no. is "<<roll<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Marks are "<<marks<<endl;
    }  
};
int main(){
    Student st;
    st.input();
    st.display();
}