// Multiple Inheritance
#include <iostream>
using namespace std ;

class m{
    protected: 
        int m;
        public: 
            void get_m(){  // defining get m 
                m=40;   // assigning m a value
            cout<<" \n m="<<m;   // predefining cout for m
            }
};
class n{
    protected: 
        int n;
        public: 
            void get_n(){ 
                n=45;
            cout<<" \n n="<<n;
            }
};

class D: public m, protected n { // Deriving a class D from classes m and n
    public:
        void display(){  // defining display fn and calling get m and get n fn from above classes to this class
            get_m();
            get_n();
        }
};

    int main(){
        D d1 ; // defining an object d1 of class D
        d1.display(); // calling display fn from class D
        d1.get_m(); // here m is also coming by calling though d1 is member fn of class D as m is a public class we cant do same for class n
         return 0; // as it is protected during derivation of Class D
    }