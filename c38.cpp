// read char by char
#include<iostream>
#include<fstream>
using namespace std;
main(){
    ifstream openfile("data.txt"); // declare and open file
    char ch;
    while(! openfile.eof())// do untill end of the file
    {
        openfile.get(ch); // get one by char
        cout<<ch; // display that char
 }
 openfile.close();
}