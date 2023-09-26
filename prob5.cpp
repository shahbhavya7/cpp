#include<iostream>
using namespace std;
 class Rectangle{
    int length ,breadth ;
     public:
         void inputs(){
             cout<<" length and breadth: ";
             cin>>length>>breadth ;}
         void area(){
             cout<<"area of rectangle:"<<endl;
            cout<<(length * breadth); }

         void perimeter(){
             cout<<endl;
             cout<<" perimeter of the rectangle:"<<endl;
             cout<<(2*(length + breadth));
         }};