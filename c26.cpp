#include<iostream>
using namespace std;

int main(){
    try{
        int age;
        cout<<"Enter age";
        cin>>age;
        if(age>=18)
        {cout<<"Access Granted";}
        else
        {throw(age);} // if not satisfy then it throws error which is caught and printed with a statement gracefully
    }
    catch(int x){
        cout<<"Access Denied";
    }
}