#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("data.txt"); // creates a file named data.txt
cout<<"file created";
out<<"This is for Demo"; // inserts this data in file
cout<<"Data inserted";
return 0;
}