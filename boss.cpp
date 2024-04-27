#include<istream>
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
}




};

class boss : public accounten
{
public:
int bones=3000;


};
int main()
{
    boss c;
    cout<<c.bones<<endl;
    return 0;
}

