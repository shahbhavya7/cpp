// Operator overloading
class complex {
    public:
        int real,img;
            complex operator+(const complex& obj){ // overloading of + operator in complex class , here operator is keyword 
            // object is constant of complex type
                complex temp;
                    temp.real=real+obj.real;
                    temp.img=img+obj.img;
                        return temp; }
};
        int main(){
        complex num1,num2,result;  // initialize number 1 and 2
        result=num1+num2; }      // calls custom + operator