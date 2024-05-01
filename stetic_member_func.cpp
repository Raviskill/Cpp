#include<iostream>
using namespace std;

class employe
{
 int id;
static int count;

 public:
 void getdata()
 {
    cout<<"enter the employ id:-";
    cin>>id;
    count++;
 }

 void printdata()
 {
    cout<<"employ id is:-"<<id<<endl;
 }

 void getcount()
{
    cout<<"employ count is:-"<<count<<endl;
}

};
 int employe :: count;
 int main()
 {
    employe a,b,c;
    a.getdata();
    a.printdata();
    a.getcount();

    b.getdata();
    b.printdata();
    b.getcount();

    c.getdata();
    c.printdata();
    c.getcount();
 }