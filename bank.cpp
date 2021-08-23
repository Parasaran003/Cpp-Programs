#include<iostream>
using namespace std;
class bank
{
    public:
          char name[30],account_type[20];
          int balance,amount,accountno;
          int withdraw,deposit;
          char choice;
          int w,d;
          void details()
          {
              cout<<"Enter the name : ";
              cin>>name;
              cout<<"Enter the Account no : ";
              cin>>accountno;
              cout<<"Enter the Account type : ";
              cin>>account_type;
              cout<<"Enter the Amount : ";
              cin>>amount;
          }
          void  display()
          {
              cout<<"Name : "<<name<<endl;
              cout<<"Account type : "<<account_type<<endl;
              cout<<"Account Number : "<<accountno<<endl;
              cout<<"Amount : "<<amount<<endl;
          }
          void bal()
          {
              cout<<"Enter the amount to be deposited or withdraw : "<<endl;
              cout<<"Enter W for withdraw and D for Deposit :";
              cin>>choice;
          if(choice=='w')
          {
              cout<<"Enter the amount to be withdrawed : ";
              cin>>withdraw;
              balance = amount - withdraw;
              cout<<"Balance : "<<balance<<endl;
          }
          else
          {
              cout<<"Enter the amount to be deposited : ";
              cin>>deposit;
              balance = amount + deposit;
              cout<<"Balance : "<<balance<<endl;
          }
          }
};
int main()
{
    bank a;
    a.details();
    a.display();
    a.bal();
    return 0;
}
    
