#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    ifstream infile("number.txt");
    string line;
    int total=0;
    while(! infile.eof()){ // do reading untill end of the file
    getline(infile,line); //fetch a line from number.txt and put it in string
    stringstream(line)>>total; // converting line string to int by stringstream func and assigning the whole data to total
    cout<<line<<endl;
    cout<<total +1;
    }
    infile.close();
}