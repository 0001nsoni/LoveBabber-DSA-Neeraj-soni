#include<iostream>
using namespace std;
bool isEven(int num)
{
    if (num&1)
    {
    return 0;
    }
    else{
        return 1;
    }
    

}
int main()
{
    int num;
    cin>>num;
    if (isEven(num))
    {
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
    
}