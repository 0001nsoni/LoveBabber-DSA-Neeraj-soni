#include<iostream>
using namespace std;
class A{
public:
void sayHello()
{
    cout<<"Hello its neeraj";
}
void sayHello(string name)
{
    cout<<"hello "<<name;
}
};
int main()
{
    A obj;
    obj.sayHello();
    return 0;
}