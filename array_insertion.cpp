#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n],position,element;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the poistion of the element to be added = ";
    cin>>position;
    cout << "Enter the element to be added in the array = ";
    cin >> element;
    for(int i=n-1;i>=position;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position] = element;
    cout<<"The New Array After Insertion of the element = "<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}