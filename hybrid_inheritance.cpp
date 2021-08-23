#include<iostream>
using namespace std;
class A
{ 
    public:
    int x;
    A()
    {
        x = 10;
    }
};
class B : public A
{
    public:
    int y;
    B()
    {
      y = 20;
    }
};
class C : public B
{
   public:
   int sum;
   C()
   {
     sum = x+y;
   }
};
class D : public C
{
    public:
     void display()
     {
         cout<<"Sum  = "<<sum<<endl;
     }
};
int main()
{
    D d;
    d.display();
    return 0;
}