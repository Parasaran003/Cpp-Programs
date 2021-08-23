#include<iostream>
using namespace std;
class copyvalue
{
public:
    int a,b;
    copyvalue() //default constructor declaration
    {
        cout<<"Enter the value of a and b : ";
        cin>>a>>b;
    }
    copyvalue(copyvalue&x) // x i the variable to get a and b
    {
        a = x.a;
        b = x.b; //get the value of and b
    }
    int display()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};
int main()
{
    copyvalue c; //object is created
    copyvalue d = c; // now c is copied to d
    c.display();// here the value of c is printed
    d.display(); //here the value of d is printed as same as c
    return 0;
}
