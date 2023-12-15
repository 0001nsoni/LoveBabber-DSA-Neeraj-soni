#include<iostream>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"I am A"<<endl;

    }

};
class B 
{
    public: 
    void func()
    {
        cout<<"I am B" <<endl;
    }
};


int main()
{
    A obj1;
    B obj2;
    obj1.A::func();
    return 0;
}