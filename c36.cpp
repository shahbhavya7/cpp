// constructor method opening writing file
#include<iostream>
#include<fstream>
using namespace std;
main(){
    string str= "OOP file handling session";
    ofstream out("abc2.txt");
    out<<str;
    return 0;
    out.close();
}
