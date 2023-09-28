// Exceptions and multiple catch handlers
#include<iostream>
using namespace std;
void test (int x)
{try
  {
    if(x==1)throw x;
else 
    if(x==0)throw 'x';
else if(x== -1)throw 1.0;
cout<<"\n End of try block \n";
  }
catch (int m)
  {cout<<"\n Catching an int \n";}
catch(char c)
  {cout<<"\n Catching an char \n";}
catch ( double d)
  {cout<<"\n Catching an double \n";}
cout<<"End of catch"<<endl;
}

  int main(){
    cout<<" \n x==1 \n ";test(1);
    cout<<" \n x==0 \n";test(0);
    cout<<" \n x==-1 \n ";test(-1);
    cout<<" \n x==2 \n";test(2); // as 2 is not thrown anywhere it wont be caught and it reaches end of the block

    return 0;
  }
    
  

