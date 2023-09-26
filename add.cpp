#include<iostream>
using namespace std;

int add(int,int){
    return 0;
}// declaration
int main() { // main 
int a,b;
cout<<"Enter a and b"<<endl;
cin>>a>>b;
cout<< add(a,b);
return 0;
}

// Defination

int add(int a,int b)
{int c=a+b;
return c;
}