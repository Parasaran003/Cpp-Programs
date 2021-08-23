#include<iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout<<"Select Addition,Subtraction,Multiplication,Division"<<endl;
    cout<<"Enter the operator(1,2,3,4) : "<<endl;
    cin>>operation;
    cout<<" Enter the numbers = "<<endl;
    cin>>num1>>num2;
    switch(operation)
    {
        case '1' :
        {
            cout<<" Sum of Two Numbers =  "<<num1+num2<<endl;
            break;
        }
        case '2' :
        {
           cout<<" Subtraction of Two Numbers =  "<<num1-num2<<endl;
           break;
        }
        case '3' :
        {
           cout<<" Multiplication of Two Numbers =  "<<num1*num2<<endl;
           break;
           
        }
        case '4' :
        {
            cout<<" Division of Two Numbers =  "<<num1/num2<<endl;
            break;
        }
        default :
        {
            cout<<" Error Operator you have enter is not correct! "<<endl;
            break;
        }
    }
    return 0;
}