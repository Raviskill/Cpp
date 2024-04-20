#include<iostream>
using namespace std;

void squre()
     {
      int squre;
      int a=10;
     squre=a*a;
     cout<<"squre:-"<<squre<<endl;
   }
   void surcal(int r)
   {
    int surcal;
    surcal=3.14*r*r;
     cout<<"squre:-"<<surcal<<endl;
   }
   void tringle(int b,int h)
  {
    int tringle;
     tringle=0.5*b*h;
     cout<<"tringal:-"<<tringle<<endl;
     }
     void volume(int l,int b,int h)
     {
      int volume;
     volume=l*b*h;
     cout<<"volume:-"<<volume<<endl;
     }
     void cone(float r,float h,float a,float b)
     {
      float cone;
      cone=a*b*(r*r)*h;
      cout<<"cone:-"<<cone<<endl;

     }
     void rombone(int a,int b)
     {
      int romnone;
      romnone=a*b;
      cout<<"romen:-"<<romnone;

     }
   int main()
   {
squre();
surcal(10);
tringle(10,20);
volume(10,20,30);
cone(0.3,3.14,10,20);
rombone(10,20);
    return 0;
   }
