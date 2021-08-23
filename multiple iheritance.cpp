#include<iostream>
using namespace std;
class student
{
public:
    char name[25];
    int rollno,age;
     void details()
     {
         cout<<"Enter the name : ";
         cin>>name;
         cout<<"Enter the Rollno : ";
         cin>>rollno;
         cout<<"Enter the Age : ";
         cin>>age;
     }
};
class exam:public student
{
public:
    int m1,m2,m3,m4,m5,average;
    void mark()
    {
        cout<<"Enter the marks(out of 100)m1,m2,m3,m4 and m5 = "<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
        average = (m1+m2+m3+m4+m5)/5;
    }
};
class result:public exam
{
public:
    void displayresult()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollno<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Average : "<<average<<endl;
    }
};
int main()
{
    result p;
    p.details();
    p.mark();
    p.displayresult();
    return 0;
}
