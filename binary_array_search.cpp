#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int low=0,high=n-1,arr[n],key,mid,flag;
    mid = (low+high)/2;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched = ";
    cin>>key;
    for(int i=low;i<=high;i++)
    {
       if(key<arr[mid])
       {
           high = mid-1;
       }
       else if(key>arr[mid])
       {
           low = mid+1;
       }
       else if(key==arr[mid])
       {
           low=mid;
       }
    }
    for(int i=low;i<=high;i++)
    {
      if(key==arr[i])
      {
          flag=1;
      }
    }
    if(flag==1)
    {
        cout<<"Value is found!"<<endl;
    }
    else
    {
        cout<<"Value is not found"<<endl;
    }
}
