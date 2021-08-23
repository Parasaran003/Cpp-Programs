#include<iostream>
using namespace std;

 class marks
 {
 public:
    float maths,chem,bio,eng,phy,average_mark;

    int average()
    {
        cout<<"Enter your Maths,Chemistry,Biology,English and Physics Marks(out of 100)"<<endl;
        cin>>maths>>chem>>bio>>eng>>phy;
        average_mark = (maths+chem+bio+eng+phy)/5;
        return average_mark;
    }
 };
int main()
{
    marks a,b,c;
    cout<<"The Average of marks the person = "<<a.average()<<endl;
    cout<<"The Average of marks the person = "<<b.average()<<endl;
    cout<<   "The Average of marks the person = "<<c.average()<<endl;
}
