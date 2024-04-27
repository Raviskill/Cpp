#include<iostream>
using namespace std;

class accounten
{
 int salary=30000;
 int salary1=40000;

public:

int salary2=50000;
void printdata()
{
    cout<<salary<<endl;
    cout<<salary1<<endl;
}




};

class boss : public accounten
{
public:
float bones;
void getdata()
{
    cout<<"enter the bones:-"<<endl;
    cin>>bones;
}


};
int main()
{
    boss c;
    c.getdata();
    cout<<"bones is:-"<<c.bones<<endl;
    cout<<"salary is:-"<<c.salary2<<endl;
   c.printdata();
    return 0;
}

