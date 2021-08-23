#include<iostream>
using namespace std;
int main()
{
    int p,r,t,i;
    cout<<"Enter the principle = ";
    cin>>p;
    cout<<"Enter the rate of interest = ";
    cin>>r;
    cout<<"Enter the time = ";
    cin>>t;
    i = (p*r*t)/100;
    cout<<"Simple Interest = "<<i<<endl;
    return 0;
} 