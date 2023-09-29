// Fraction with den 0
#include<iostream>
using namespace std;
int main(){
    double numerator,denominator,divide;
    cout<<"Enter numerator";
    cin>>numerator;
    cout<<"Enter denominator";
    cin>>denominator;

    try{ // throw exception if numerator is zero
        if(denominator==0)throw 0; // not executed when denominator = 0
        divide=numerator/denominator;
        cout<<numerator<<"/"<<denominator<<"="<<divide;
    }
    catch(int num_exception){
        cout<<"Error cannot divide by"<<num_exception;
    }
}
