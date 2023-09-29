// Pure Virtual Function
#include<iostream>
using namespace std;
  
  // pure virt fn provide common interface for several base classes without having need of implementation in base class
class car {
    public:
    virtual void start ()=0; // These are pure virtual functions as virtual keyword and equated to 0
    virtual void stop()=0; // pure virt fn requires implementation in derived class if we remove start or stop fn from any derived class it wil error
};

class innova:public car{
    public:
        void start(){
            cout<<"innova started \n ";}
        void stop(){
            cout<<"innova stopped \n ";
        }
};

class swift:public car{
    public:
        void start(){
            cout<<"swift started \n ";}
        void stop(){
            cout<<"swift stopped \n ";
        }
};

int main(){
    car *c = new innova();
    c->start(); // pointer reflecting innova of base class car shown by c pointing innova start fn
    c->stop();
    c= new swift(); 
    c->start();   // pointer reflecting swift of base class car shown by c pointing swift start fn
    c->stop();

}