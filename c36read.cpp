#include<iostream>
#include<fstream>
using namespace std;
//main()
//{string str1;
//ifstream in("abc2.txt");
//in>>str1;
//cout<<str1;
//in.close();
//return 0;} 
// this code only gives OOP as output not entire sentence

main(){
string str1;
ifstream in("abc2.txt");
while(getline(in,str1)){
    cout<<str1;
}
in.close();

}
