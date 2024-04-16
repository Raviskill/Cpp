#include<iostream>
using namespace std;
float squre;
float a;

class complex
{
public:
complex()
{
    cout<<"enter the valu of A:-";
    cin>>a;

    squre=a*a;
    cout<<"squre:-"<<squre;
}



};
int main()
{
    complex();
}