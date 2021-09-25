#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int key,flag,arr[n],count=0;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter  the element to be searched = ";
    cin>>key;
    for (int i=0;i<n;i++)
    {
        if (key==arr[i])
        {
            flag = 1;
            break;
        }
        count++;
    }
    if(flag==1)
    {
        cout<<"Value is found !"<<endl<<"In the position = "<<"arr"<<"["<<count<<"]"<<endl;
    }
    else
    {
        cout<<"Value is not found !"<<endl;
    }
    return 0;
}