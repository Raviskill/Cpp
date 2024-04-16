#include<iostream>
using namespace std;

float cricle;
float r;
class compex
{
    public:
    compex()
    {

    cout<<"enter the value of r:-";
    cin>>r;

    cricle=3.14*r*r;
    cout<<"circal:-"<<cricle;
    }
};
int main()
{
    compex();
}
