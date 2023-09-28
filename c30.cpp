// Binary Search in Array
#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[], int arrysize){
    for(int i=0;i<arrysize;++i)  // show all members of array using loop
    cout<<a[i]<<",";}

    int main (){
int a[]={1,5,8,9,6,7,3,4,2,10};
int asize=sizeof(a)/sizeof(a[0]); // this command calculates size of array which is req for display fn i.e show
cout<<"\n The array is : \n";
show(a,asize);
 
 cout<<"\n Let's say we want to search for"<<endl;
 cout<<"\n 2 in the array so we first sort it \n";
 sort(a,a+asize); // sort function is used by passing starting and ending iterators of array as arguments start iter is shown by array name and end iter is shown by adding size of array to start iter
 cout<<"\n array after sort is : \n";
 show(a,asize); // show number from start i.e a till end i.e asize

 cout<<"\n now we do binary search \n";
 if(binary_search(a,a+10,2)) // start that is "a" till end that is "a+10" and to find that is "2"
  cout<<"\n Element found\n ";
  else
  cout<<"\n Not found \n";

cout<<"\n now we do binary search for 10 \n";
 if(binary_search(a,a+10,10))
  cout<<"\n Element found \n";
  else
  cout<<"\n Not found \n";

  return 0;

     }
    
