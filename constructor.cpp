
//1.Default Constructor
#include<iostream>
using namespace std;

 class construct
 {
 public:
    int a,b;

    construct()
    {
        a=20;
        b=30;
    }
 };
 int main()
 {
     construct c;
     cout<<"The Value of a = "<<c.a<<endl;
     cout<<"The Value of b = "<<c.b<<endl;
     return 0;
 }

