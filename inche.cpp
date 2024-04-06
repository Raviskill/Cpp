#include<iostream>
using namespace std;

int main()
{
    float inche;
    float centimeter=2.54;

    printf("enter the velue of inche:-");
    scanf("%f",&inche);

    float total=0;
    total=inche*centimeter;

    cout<<total;
    return 0;

}