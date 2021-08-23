#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rno;

public:
    void acceptname()
    {
        cout << "\n enter roll no and name..." << endl;
        cin >> rno >> name;
    }
    void displayname()
    {
        cout << "the rollno is " << rno << endl
             << "the name is " << name << endl;
    }
};
class detail
{
public:
    int date, month, year;
    void acceptdob()
    {
        cout << "enter the dob :" << endl;
        cin >> date >> month >> year;
    }
    void displaydob()
    {
        cout << "the dob is " << date << "/" << month << "/" << year << endl;
    }
};
class exam : public student, public detail
{
public:
    int m1, m2, m3, m4, m5, total;
    void accepmark()
    {
        cout << "enter the mark for five subjects one by one " << endl;
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
        total = m1 + m2 + m3 + m4 + m5;
    }
    void displaymark()
    {
        cout << "the marks of the subject are "
             << "\t" << m1 << "\t" << m2 << "\t" << m3 << "\t" << m4 << "\t" << m5 << endl;
        cout << "the total is " << total << endl;
    }
};
int main()
{
    exam e;
    e.acceptname();  //calling base class function using derived class object
    e.displayname(); //calling base class function using derived class object
    e.accepmark();
    e.displaymark();
    e.acceptdob();
    e.displaydob();
    return 0;
}