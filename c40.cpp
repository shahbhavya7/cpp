#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outfile; //declaring file stream variable
    outfile.open("number.txt",ios::app);

    if(!outfile.is_open()){cout<<"problem with opening the file";}
    else{
        outfile<<200<<endl;
        cout<<"Done Writing"<<endl;
    }
    outfile.close();
}