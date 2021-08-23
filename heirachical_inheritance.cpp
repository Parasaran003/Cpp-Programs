#include<iostream>
using namespace std;
class student
{
public:
      char name[34],dept[10];
      int dob,age;
      void getdetails()
      {
          cout<<"Enter the name : ";
          cin>>name;
          cout<<"Enter the birthyear : ";
          cin>>dob;
          cout<<"Enter the age : ";
          cin>>age;
      }
};
class studetails :public student
{
public:
      void studet()
      {
          cout<<"Name : "<<name<<endl;
          cout<<"Dob : "<<dob<<endl;
          cout<<"Age : "<<age<<endl;
      }    
};
int main()
{
    studetails c;
    c.getdetails();
    c.studet();
    return 0;
}