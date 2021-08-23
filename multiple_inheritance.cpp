#include<iostream>
using namespace std;
class person 
{
  public:
           char name[30];
           person()
           {
               cout<<" Enter the name : ";
               cin>>name;
           }
};
class Age : public person
{
  public: 
         int age,rollno;
         Age()
         {
            cout<<" Enter the age : ";
            cin>>age;
            cout<<"Enter the rollno = ";
            cin>>rollno;
         }
};
class dob 
{
    public:
    int m1,m2,m3,m4,m5,total;
    dob()
    {
        cout<<" Enter the marks(out of marks) : "<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
        total = (m1+m2+m3+m4+m5);
    }
};
class details : public dob,Age
{
   public:
   void show()
   {
     cout<<" Name : "<<name<<endl;
     cout<<" Rollno : "<<rollno<<endl;
     cout<<" Age : "<<age<<endl;
     cout<<" Total = "<<total<<endl;
     
   }
};
int main()
{
    details d;
    d.show();
    return 0;
}