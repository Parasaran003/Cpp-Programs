#include<iostream>
using namespace std;
class calc
{
    public:
   float area,volume;
   void Area(float length,float breadth)
   {
       area = length*breadth;
   }
   void Volume(float length,float breadth,float height)
   {
       volume = length*breadth*height;
   }
   void display()
   {
       cout<<"Area of the room = "<<area<<endl;
       cout<<"Volume of the room = "<<volume<<endl;
   }
};
int main()
{
  calc c;
  c.Area();
  c.Volume(22.2,18.3,28.4);
  c.display();
  return 0;
}
