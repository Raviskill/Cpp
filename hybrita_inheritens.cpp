#include<iostream>
using namespace std;

class base
{
    int a=10;
    int b=10;

    public:
    int c=10;
    void printdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }

};

class base2
{
    int a1=20;
    public:
    int x1=0;

    void showsdata()
    {
        cout<<a1<<endl;
    }
};
class base3: public base2
{
    public:
    int d1=50;
    int y2=0;
    void showdata1()
    {
        cout<<d1<<endl;
    }
    
};



class drive: public base
{
    public :
    int d=50;

};

class drive1:public base3
{
    public:
    void showdata2()

    {
      cout<<x1<<endl;
      cout<<y2<<endl;
    }
};

int main()
{
    drive obj;
    drive1 obj1;

    cout<<obj.c<<endl;
    cout<<obj.d<<endl;

    obj.printdata();

    obj1.showsdata();
    obj1.showdata1();
    obj1.showdata2();

    return 0;
}