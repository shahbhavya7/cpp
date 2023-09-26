#include<iostream>
using namespace std;
 
 class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"X is "<<x;
        cout<<"Y is "<<y;
    }
};

int main(){
    int t,u;
    cout<<"Enter x : "; cin>>t;
    cout<<"Enter y : "; cin>>u;
    point corner = point(t,u);
    corner.display();
}