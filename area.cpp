#include<iostream>
using namespace std;

class area
{
public:
    float r,Area;
public:
    int AREA()
    {
         cout<<"Enter the radius = ";
         cin>>r;
         Area = 3.14*r*r;
         return Area;
    }
};
int main()
{
    area a;
    cout<<"Area = "<<a.AREA()<<endl;
}
