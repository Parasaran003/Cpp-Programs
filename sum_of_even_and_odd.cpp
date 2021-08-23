#include <iostream>
using namespace std;
int main()
{
    int i, num; 
    int oddSum=0,evenSum=0;
    cout<<"Enter the value of num = ";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        if(i%2==0)  
            evenSum=evenSum+i;
        else
            oddSum=oddSum+i;
    }
    cout<<"Sum of all odd numbers are = "<< oddSum<<endl;
    cout<<"Sum of all even numbers are = "<<evenSum<<endl;
    return 0;
}  