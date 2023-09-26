#include<iostream>
using namespace std;
void display(char='*',int=3);
int main(){
    int count=5;
    cout<<"no arg passed"<<endl;
    display();
    cout<<"1st arg passed"<<endl;
    display('#');
    cout<<"Both arg passed"<<endl;
    display('$',count);
}
void display(char c,int count){
    for(int i=1;i <= count;i++){cout<<c;}

}