#include <iostream>
using namespace std;
char tolovercase(char ch){
    if (ch>='a'&&ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;

    }
    
}
bool checkpalandrom(char a[],int n)
{
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (a[s]!=a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;
    
}
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
  
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "enter your name" << endl;
    cin >> name;
    cout << "your name is" << endl;
    cout << name;
    int len = getlength(name);
    cout << endl<< "length " << getlength(name);
    cout<<endl<<"reverse"<<endl;
    reverse(name,len);
    cout<<name<<endl;
    cout<<"character is to lowercase"
    cout<<checkpalandrom(name,len);

    return 0;
}