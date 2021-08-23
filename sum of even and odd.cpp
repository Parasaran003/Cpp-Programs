#include<iostream>
using namespace std;
int main()
{
    int N,even_sum,odd_sum;
    cout<<"Enter the value of n = ";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(N%2 == 0)
        {
            even_sum+=N;
        }
        else
        {
            odd_sum+=N;
        }
    }
    cout<<"The Sum of all even numbers"<<N<<" = "<<even_sum<<endl;
    cout<<"The Sum of all odd numbers"<<N<<" = "<<odd_sum<<endl;
    return 0;
}    