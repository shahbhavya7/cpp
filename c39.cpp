// Read line by line
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main(){
    ifstream openfile("data.txt");
    string line; // done by defining a string in name of line
    while(! openfile.eof()){
        getline(openfile,line);
        cout<<line;
    }
    openfile.close();
}