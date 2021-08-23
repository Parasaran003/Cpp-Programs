#include<iostream>
using namespace std;
class data
{
public:
    int n,multiply;
    data()
    {
        n = 20;
    }
    data(int a,int b)
    {
        multiply = a*b;
    }
    int display()
    {
        cout<<"The value of n = "<<n<<endl;
    }
    int result()
    {
         cout<<"The multiplied value = "<<multiply<<endl;
    }
};
int main()
{
    data d;
    d.display();
    data d1(20,30);
    d1.result();
    return 0;
}
