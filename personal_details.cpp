#include<iostream>
using namespace std;
class person
{
    public:
          char name[20],place[30],num[10];
          int dob,month,date,year,age;
          float weight;
          
  void details()
  {
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the date month year : ";
    cin>>date>>month>>year;
    cout<<"Enter the weight : ";
    cin>>weight;
    cout<<"Enter the place : ";
    cin>>place;
    cout<<"Enter the moblie number : ";
    cin>>num;
  }
  void result()
  {
      cout<<"Name :"<<name<<endl;
      cout<<"Age :"<<age<<endl;
      cout<<"Weight :"<<weight<<endl;
      cout<<"Date of birth :"<<date<<"/"<<month<<"/"<<year<<endl;
      cout<<"place :"<<place<<endl;
      cout<<"Mobile number :"<<num<<endl;
  }
};
int main()
{
    person p;
    p.details();
    p.result();
    return 0;
}