#include<iostream>
using namespace std;
class student //parent class or base class
{
public:
     char name[25];
     int rollno,age;
     int getdetails()
     {
         cout<<"Enter the name : ";
         cin>>name;
         cout<<"Enter the rollno : ";
         cin>>rollno;
         cout<<"Enter the your age : ";
         cin>>age;
     }
};
class exam:public student  //child class or derived class
{
public:
     int m1,m2,m3,m4,m5,average;
     int mark()
     {
         cout<<"Enter the marks(out of 100)m1,m2,m3,m4 and m5 = "<<endl;
         cin>>m1>>m2>>m3>>m4>>m5;
     }
     int result()
     {
         cout<<"Name : "<<name<<endl;
         cout<<"Roll Number : "<<rollno<<endl;
         cout<<"Age : "<<age<<endl;
         average = (m1+m2+m3+m4+m5)/5;
         cout<<"The Average mark = "<<average<<endl;
     }
};
int main()
{
    exam m;
    m.getdetails();
    m.mark();
    m.result();
    return 0;
}
