#include <iostream>  
using namespace std;

bool is_prime(int n){
    bool prime=true;
    if(n==1) prime=false; 
    else{
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    }
    return prime;
}

int main(){
    int n;
    cout<<" Integer: "; cin>>n;
    if(n==0) ;
    else if(is_prime(n)==true) cout<<"Integer is Prime";
    else cout<<"Integer is not Prime";
    return 0;
}