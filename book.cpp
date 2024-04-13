#include<iostream>
#include<string>
using namespace std;
 
 class book
 {
    private:
    int book_no;
    string book_title;
    float price;
    float total_cost(int n)
    {
        return n*price;
    }


    public:
    void input()
    {
        cout<<"enter the book no:-";
        cin>>book_no;
        cout<<"enter the prise:-";
        cin>>price;
        cout<<"enter the book tital";
        cin>>book_title;
    }

    void purchse()
    
    {
        int numcopies;
        cout<<"book no is:-"<<book_no<<endl;
        cout<<"price is:-"<<price<<endl;
        cout<<"book tital is:-"<<book_title<<endl;
        float totalcost=total_cost(numcopies);
        cout<<"total cosdt to b paid"<<totalcost<<endl;
        
    }


 };

 int main()
 {
    book book1;
    book1.purchse();
    book1.input();

    return 0;
 }