#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    if(n % 2 == 0)
    {
        cout<<"The Number is Even!"<<endl;
    }
    else
    {
        cout<<"The Number is Odd!"<<endl;
    }
    return 0;
}