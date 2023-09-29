// Operator overloading practical
#include<iostream>
using namespace std;


class complex {
    public:
        int real,img;
    public:
        complex(int r=0,int i=0)
            {
                real=r;
                img=i; 
            }
            // this is automatically called when + is called between two complex number
            complex operator+(const complex& obj) // overloading of + operator in complex class , here operator is keyword 
            // object is constant of complex type
                {complex temp;
                    temp.real=real+obj.real;
                    temp.img=img+obj.img;
                        return temp; }
            complex operator-(const complex& obj)
                 {complex temp;
                    temp.real=real-obj.real;
                    temp.img=img-obj.img;
                        return temp; }
            void print(){cout<<real<<"+i"<<img<<" \n ";}
};
        int main(){
        complex c1(10,5) , c2(2,4);
        complex c3=c1+c2; // calling + operator
        c3.print();
        complex c4=c1-c2; // calling - operator
        c4.print();
        }
