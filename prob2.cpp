#include<iostream>
using namespace std;

int fact(int numb){
    int facto=1;
    for(int i=1;i>0;i--){ facto=facto*i;
    }
    return facto;}

int main(){
    int numb;
    cout<< " integer: "; cin>>numb;
    cout<<fact(numb);
    if(numb>0){ cout<<"Factorial : "<<fact(numb);
    }else { cout<<"Number";
    }
}
