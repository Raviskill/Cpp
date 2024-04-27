#include<iostream>
#include<string>
using namespace std;

class base
{
    int no=1;
    public:
    string name="raj";

    void printdata()
    {
        cout<<"the employ no is:-"<<no<<endl;
    }

};

class base1
{
    public:
    float selary=20000;

    void printdata1()
    {
        cout<<"the employ selary is:-"<<selary<<endl;
    }


};

class drive:public base,public base1
{
    public:
    float bones=5000;

    void showdata()
    {
        cout<<"employ bones is:- "<<bones<<endl;
    }
    

};

int main()
{
    drive obj;
    obj.printdata();
    cout<<"employe name is:-"<<obj.name<<endl;
    obj.printdata1();
    obj.showdata();
    
}