#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;

    public:
    void setdeta(int x,int y)
    {
        a=x;
        b=y;

    }

    void printdata()
    {
        cout<<"the first valu is:-"<<a<<endl;
        cout<<"the scond value is:-"<<b<<endl;
    }

    complex operator+(complex c)
    {
        complex t;
        t.a=a+c.a;
        t.b=b+c.b;

        cout<<"the a:-"<<t.a<<endl;
        cout<<"the b:-"<<t.b<<endl;

         return t;

    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdeta(3,6);
    c2.setdeta(2,4);

    cout<<"the first input:-"<<endl;
    c1.printdata();
    cout<<"the second input:-"<<endl;
    c2.printdata();

    cout<<"the finale out put"<<endl;
    c3=c1+c2;
    c3.printdata();
    return 0;
}
