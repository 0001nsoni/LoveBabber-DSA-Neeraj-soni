#include <iostream>
using namespace std;
int main()
{
    int n, i = 1,k=1;
  
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        { char ch='A'+k-1;
            cout << ch;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}