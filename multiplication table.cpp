#include<iostream>
using namespace std;
class table
{
public:
    int n;
public:
    int Table()
    {
       cout<<"Enter the value of n = ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<< i << " = "<< n*i<<endl;
    }
    return 0;
    }
};
int main()
{
    table a,b,c;
    a.Table();
    b.Table();
    c.Table();
}
