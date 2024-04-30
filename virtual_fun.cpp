#include<iostream>
using namespace std;

class base
{
    public :

    int a=10;
    virtual void print()=0;

  
    
};

class derive1: public base
{
int b=20;
void print()
{
    cout<<"the valu of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
}


};

int main()
{
    base * base_obj_poi;
    derive1 derive_obj;
     
     base_obj_poi = &derive_obj;
      base_obj_poi -> print();

      return 0;
     

}