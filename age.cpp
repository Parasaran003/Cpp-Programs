 #include<iostream>
using namespace std;
class age
{
public:
       int birthyear,currentyear,AGE;
public:
    int Age()
    {
      cout<<"The Birth year"<<endl;
      cin>>birthyear;
      cout<<"The Current year"<<endl;
      cin>>currentyear;
      AGE = currentyear - birthyear;
      return AGE;
    }
};
int main()
{
    age a,b,c;
    cout<<"The Age of a is"<<a.Age()<<endl;
    cout<<"The Age of b is"<<b.Age()<<endl;
    cout<<"The Age of c is"<<c.Age()<<endl;
}
