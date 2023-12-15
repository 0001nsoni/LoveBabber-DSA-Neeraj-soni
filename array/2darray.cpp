#include <iostream>
using namespace std;
void printSum(int arr[][4],int row,int col){
    cout<<"your sum is =";
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
        
    }
    

}

int largestRowSum(int arr[][4],int row ,int col){
    
    int maxi =INT_MIN;
    int rowIndex=-1;
     for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
        {
            sum+=arr[row][col];
        }
        if (sum>maxi)
        
        {
        maxi=sum;
        rowIndex=row;
        }
        
        
        
    }
    return rowIndex+1;

    
 }

    int main()

{
    int arr[3][4];
    cout << "enter the elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "printing the array" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  printSum(arr,3,4);
  cout<<"largest sum row ->"<<largestRowSum(arr,3,4);

    return 0;
}