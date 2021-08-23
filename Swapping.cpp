#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the values of a and b = ";
    cin>>a>>b;
    cout<<"Before Swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    temp = a;
    a = b;
    b= temp; 
    cout<<"After Swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
    
}