#include<iostream>
using namespace std;
class add
{
   public:
         int sum(int a , int b)
         {
                 return a+b;
         }
        int sum(int a , int b , int c)
        {
                return a+b+c;
        } 
};
int main()
{
        add d;
        cout<<"Sum = "<<d.sum(10,20)<<endl;
        cout<<"Sum = "<<d.sum(20,50,70)<<endl;
        return 0;
}