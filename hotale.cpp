#include<iostream>
using namespace std;
class sample
{
    int x;
    int y;

    public:

    friend sample storedata (sample o1,sample o2);
    
        void getdata (int a,int b);
        void printdata();
    
};

void sample :: getdata(int a,int b)
{
    x=a;
    y=b;
}
void sample::printdata()
{
    cout<<x<<":"<<y<<endl;
}
sample   storedata(sample o1,sample o2)
{
    sample o3;
    o3.getdata((o1.x+o2.x),(o1.y+o2.y));

    return o3;
}
int main()
{
    sample c,c1,sum;

    c.getdata(10,5);
    c.printdata();

    c1.getdata(5,7);
    c1.printdata();

    sum=storedata(c,c1);
    sum.printdata();

    return 0;
}
#include<iostream>
using namespace std;

class Hotel
{
private:
    string name = "XYZ Hotel";
    int menuOption;
    int selectItem;
    int billOption;

public:
    void displayHotelName()
    {
        cout << "Welcome to " << name << "!" << endl;
    }

     void printData()
    {
        cout<<"enter 0 exit"<<endl;
        cout << "Enter 1 to open the menu" << endl;
        cout << "Enter 2 to select an item" << endl;
        cout << "Enter 3 to show the bill" << endl;
        cin >> menuOption;
    }
    void manuopen()
    {
        if(menuOption=1)
        {
        cout<<"\t\t\t\tmanu"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"\t1           kaju kari       RS:-100"<<endl;
        cout<<"\t2          kaju kari       RS:-100"<<endl;
        cout<<"\t3           kaju kari       RS:-100"<<endl;
        cout<<"\t4           kaju kari       RS:-100"<<endl;

        cout<<"exit to manu to entrer 0"<<endl;
        cin>>menuOption;
    
    }
}
};

int main()
{
    Hotel hotel;

    hotel.displayHotelName();
    hotel.printData();
    hotel.manuopen();

    return 0;
}