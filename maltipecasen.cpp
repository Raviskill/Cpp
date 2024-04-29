#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    int y;

    void setdata()
    {
        cout<<"enter the valu of x:-"<<endl;
        cin>>x;
        cout<<"enter the valu of y:-"<<endl;
        cin>>y;


    }

    

};

class drive1 : public base
{
    public:
    void sum()
    {
        cout<<"the sum of X and y:-:"<<x+y<<endl;
    }

};

class drive2 : public base
{
    public:
    void multi()
    {
        cout<<"the multiply of X and y:-:"<<x*y<<endl;
    }

};

class drive3 : public base
{
    public:
    void adisan()
    {
        cout<<"the adisen of X and y:-:"<<x-y<<endl;
    }

};

class drive4 : public base
{
    public:
    void ditricsan()
    {
        cout<<"the adisen of X and y:-:"<<x/y<<endl;
    }

};


int  main()
{
    drive1 obj1;
    drive2 obj2;
    drive3 obj3;
    drive4 obj4;

    obj1.setdata();
    obj1.sum();

    obj2.setdata();
    obj2.multi();

    obj3.setdata();
    obj3.adisan();

    obj4.setdata();
    obj4.ditricsan();

    return 0;
    
}
