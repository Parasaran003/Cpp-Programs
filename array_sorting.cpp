#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n],temp;
    char choice;
    cout<<"Enter the elements of the array = "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the choice of the array sorting"<<endl<<"Ascending Order - a"<<endl<<"Descending Order - d"<<endl;
    cout<<"Enter the Choice = ";
    cin>>choice;
    switch(choice)
    {
        case 'a':
        {
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
            cout<<"Array Sorting In Ascending Order = "<<endl;
            for(int j=0;j<n;j++)
            {
                cout<<arr[j]<<endl;
            }
            break;
        }
        case 'd':
        {
            for(int i=0;i<n-1;i++)
            {
                for(int j=0;j<n-1-i;j++)
                {
                    if(arr[j]<arr[j+1])
                    {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    }
                }
            }
            cout<<"Array Sorting In Descending Order = "<<endl;
            for(int j=0;j<n;j++)
            {
                cout<<arr[j]<<endl;
            }
            break;
        }
        default:
        {
            cout<<"Choice You Have Entered Is Invalid !"<<endl;
            cout<<"Please Tryagain!!"<<endl;
        }
    }
}