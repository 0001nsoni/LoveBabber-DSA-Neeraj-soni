#include <iostream>
using namespace std;

void print(int *p)
{

    cout << p << endl;
}
void update(int *p)
{
    p = p + 1;
    cout << "inside functoin " << p << endl;
}
void valupdate(int *p)
{
    *p = *p + 1;
}
int getsum(int arr[], int n)
{
    cout<<"size of array =>"<<sizeof(arr)<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    print(p);
    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;
    cout << "before update val " << *p << endl;
    valupdate(p);
    int arr[5] = {1, 2, 3, 4, 5};
    cout << getsum(arr, 5) << endl;
    

    cout << "after update val " << *p << endl;
    return 0;
}