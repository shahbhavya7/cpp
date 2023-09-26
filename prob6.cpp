#include<iostream>
using namespace std;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int A=5,B=6;
    cout<<"A is "<<A<<" and B is "<<B<<endl;
    int *W = &A;
    int *X = &B;
    swap(W,X);
    cout<<" Swap results, A is "<<A<<" and B is "<<B<<endl;
    return 0;
}
