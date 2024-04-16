#include<iostream>
using namespace std;

class complex
{
    public:
   float squre,a=10;
   float surcal;
   float tringle;

   complex()
   {
     squre=a*a;
     cout<<"squre:-"<<squre<<endl;
   }
    complex(float r)
   {
     surcal=3.14*r*r;
     cout<<"squre:-"<<surcal<<endl;
   }
   complex(float b,float h)
   {
     tringle=0.5*b*h;
     cout<<"tringal:-"<<tringle<<endl;
   }


};
int main()
{
    complex obj,obj1(10),obj2(10,20);
}
