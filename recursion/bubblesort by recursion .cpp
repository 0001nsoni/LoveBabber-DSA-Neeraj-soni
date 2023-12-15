#include<iostream>
using namespace std;

void sortArray(int *arr,int n)
{
    //base case - already sorted
    if(n==0 || n==1)
    {
        return ;
    }
    //1 case solved
    //largest element to end
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}
int main()
{
    int arr[5]={2,5,1,6,9};
    sortArray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}