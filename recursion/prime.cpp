#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value";
    cin >> n;
    int j = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ++j;
        }
    }
    if (j > 0)
    {
        cout << "not prime ";
    }
    else
    {
        cout << "prime";
    }
    return 0;
}