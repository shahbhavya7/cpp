#include<iostream>
#include<cmath>
using namespace std;

class Circle{
    int radius;
    float pi=3.14;
    float area;
    public:
    void find_area(int );
};
   void Circle::find_area(int radius){cout<<"Area"<<radius*radius*pi;}

    


int main(){
    Circle obj;
    int radius;
    cout<<"put radius";
    cin>>radius;
    obj.find_area(radius);
}