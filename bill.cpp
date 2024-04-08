#include<iostream>
using namespace std;
int main()
{
    float rate,qut,amunt=0,dis=0,bill_amunt=0,gst=0,net_amunt=0;

    cout<<"enter the rate:-";
    scanf("\n%f",&rate);

    cout<<"enter the qut:-";
     scanf("\n%f",&qut);
    

    cout<<"\nrate";
    cout<<"\t\tqut";
    cout<<"\t\tamunt";
    cout<<"\t\tdis";
    cout<<"\t\tbill_amut";
    cout<<"\t\tgst";
    cout<<"\t\tnet_amout";

    printf("\n%f",rate);
     printf("\t%f",qut);

    amunt=rate*qut;
    printf("\t%f",amunt);

    dis=amunt*5/100;
    printf("\t%f",dis);

    bill_amunt=amunt-dis;
    printf("\t%f",bill_amunt);

    gst=bill_amunt*18/100;
    printf("\t\t%f",gst);

    net_amunt=bill_amunt+gst;
    printf("\t%f",net_amunt);

    return 0;
}