#include<iostream>
using namespace std;
int main()
{
    int n;
    long double factorial = 1.0;
    cout<<"Enter a positive integer = "<<endl;
    cin>>n;

    if(n<=0)
    {
        cout<<"Error! Factorial of a negative number doesn't exist."<<endl;
    }
    else
    {
        for( int i=1;i<=n;i++)
        {
            factorial*=i;
        }
         cout<<"The Factorial of "<<n<<" = "<<factorial;

    }
    return 0;
}
