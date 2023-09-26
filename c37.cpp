// validation_constructor method
#include<iostream>
#include<fstream>
using namespace std;
/*main(){
    ofstream outfile("fout.txt");
    if(! outfile){ // check or validate that file exist before and can be opened or not
        cout<<"cannot open";
        return 1;
        return 0;
    }
}*/

// validation_open fn method
main(){
    ofstream outfile;
    outfile.open("fout2.txt");
    if(! outfile.is_open()){
        cout<<"cannot open file";
        return 1;
        return 0;
    }
}
