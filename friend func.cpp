#include<iostream>
using namespace std;
class data
{
private:
    int radius;
    friend int add(data);
public:
    void get()
    {
        radius = 0; //meter is changed into zero due to its given in private to make to public
    }
};
int add(data a)
{
    cin>>a.radius;
    return a.radius;
}
int main()
{
  data d;
  cout<<"The Radius  = "<<add(d)<<endl;
  return 0;
}
