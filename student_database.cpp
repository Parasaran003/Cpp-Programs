#include<iostream>
using namespace std;
class student
{
  public:
        char name[20],dept[10],hobbies[20];
        int rollno,age,average;
        int m1,m2,m3,m4,m5;
  public:
        void perdetails()
        {
            cout<<" Enter the Name : ";
            cin>>name;
            cout<<" Enter the Rollno : ";
            cin>>rollno;
            cout<<" Enter the Department : ";
            cin>>dept;
            cout<<" Enter the Age : ";
            cin>>age;
            cout<<" Enter the Hobbies : ";
            cin>>hobbies;
        }
        void marks()
        {
            cout<<"Enter the marks(out of marks) : "<<endl;
            cin>>m1>>m2>>m3>>m4>>m5;
            average = (m1+m2+m3+m4+m5)/5;
        }
        void result()
        {
            cout<<" Name : "<<name<<endl;
            cout<<" Rollno : "<<rollno<<endl;
            cout<<" Department : "<<dept<<endl;
            cout<<" Age : "<<age<<endl;
            cout<<" Average : "<<average<<endl;
        }
};
int main()
{
    student a,b,c;
    a.perdetails();
    a.marks();
    a.result();
    b.perdetails();
    b.marks();
    b.result();
    c.perdetails();
    c.marks();
    c.result();
    return 0;
}