#include<iostream>
using namespace std;
class sum
{
public:
    int a,b,sum,sub;
    int addition()
    {
        cout<<"Enter the value of a and b = ";
        cin>>a>>b;
        sum = a+b;
        cout<<"The sum = "<<sum<<endl;
    }
    int subtraction()
    {
        cout<<"Enter the value of a and b = ";
        cin>>a>>b;
        sum = a-b;
        cout<<"The sub = "<<sub<<endl;
    }


};
int main()
{
  sum a;
  a.addition();
  a.subtraction();
  return 0;
}
