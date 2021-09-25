#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n],temp;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i];
    }
    cout<<"The Largest Number of the Array = "<<arr[n-1]<<endl;
}