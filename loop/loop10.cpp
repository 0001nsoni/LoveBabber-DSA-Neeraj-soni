#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cin >> n;
    int k = 1;
    while (i <= n)
    { int j=1;
        while (j <= i)
        {
            cout << k<<" ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}