#include<iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}