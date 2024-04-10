#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    int admno;
    float eng,mat,sic;
    float total;

    

    

    public:
    string name;
    void ctotal()
    {
       total=eng+mat+sic;
    }
    void takdeta(int admno1,float eng1,float mat1,float sic1);

   
    

    void showdata()
    {
        cout<<"admno is :-" <<admno<<endl;
        cout<<"sname is :-" <<name<<endl;
        cout<<"english mark:-"<<eng<<endl;
        cout<<"english mark:-"<<mat<<endl;
        cout<<"english mark:-"<<sic<<endl;
        cout<<"total:-"<<total<<endl;
        

    }
    



};
void Student :: takdeta(int admno1,float eng1,float mat1,float sic1)
{
    admno=admno1;
    eng=eng1;
    mat=mat1;
    sic=sic1;

}


int main()
{
     Student c;
     c.takdeta(1,20,20,30);
     c.name=" chavda ravi";
      c.ctotal();
     c.showdata();
    
    return 0;
}
 

   