#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n],position;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the poistion of the element to be deletion = ";
    cin>>position;
    for(int i=position;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    cout<<"The New Array After Deletion of the element = "<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}