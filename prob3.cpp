#include<iostream>
using namespace std;

void fibonacci(int number){
    int p,q,r;
    cout<<"0";
    p=1;
    for(int i=2;1<=number;i++){
        r=q;
        q=p;
        p=r;
        cout<<q<<",";

    }
}
int main(){
    int number;
    cout<<"Enter number :";
    cin>>number;
    fibonacci(number);
    return 0;
}