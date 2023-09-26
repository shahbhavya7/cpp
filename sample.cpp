#include<iostream>
#include<fstream>
using namespace std;
main(){
    string str="This is Word Welcome";
    ofstream outfile("fout4.docx");
     outfile<<str;
        cout<<"Code executed";
        
        return 0;
        outfile.close();
    }
