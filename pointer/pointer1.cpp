#include<iostream>
using namespace std;
int main(){
    //pointer to int is created and pointing to some garbage value
    // int *p=0;
    // cout<<*p<<endl;
  /*
  int i =5;
  int *p =&i;
  cout<<*p<<endl;
  int *q=0; 
  q=&i;
  cout<<q<<endl;
  cout<<*q<<endl;
  */

 int num =5;
 int a= num ;
 a++;
cout<<num <<endl;;

int *p =&num;
cout<<"before "<<num<<endl;
(*p)++;
cout<<"after "<<num<<endl;
//copying a pointer
int *q=p;
cout<<p<<"_"<<q<<endl;
cout<<*p<<"_"<<*q<<endl;
// importent concept
int i =3;
int *t=&i;
*t=*t+1;
cout<<(*t) <<t<<endl;
t=t+1;
cout<<t<<endl;

  
    return 0;
}