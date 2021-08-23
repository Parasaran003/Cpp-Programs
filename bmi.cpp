#include<iostream>
using namespace std;
class bmi
{

 public:
     float height,bmi,weight,metric_height;


     int BMI()
     {
         cout<<"Enter the height(cm)and weight(kg)"<<endl;
         cin>>height>>weight;
         metric_height = height/100;
         bmi = weight/(metric_height*metric_height);
         return bmi;
     }
 };

int main()
{
   bmi a,b,c;
   cout<<"The BMI of Person a = "<<a.BMI()<<endl;
   cout<<"The BMI of Person a = "<<b.BMI()<<endl;
   cout<<"The BMI of Person a = "<<c.BMI()<<endl;
}
