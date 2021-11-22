#include <iostream>

using namespace std;
class employee
{
    public:
    int id;
    employee()         //default constructor
    {
    cout<<"ENTER ID:";
    cin>>id;
    
    }
    employee(int s)           //parameterized constructor
    {
        id=s;
    }
    employee( employee & e0)       //copy constructor
    {
        id=e0.id;
    }
    void show_data()
    {
        cout<<"\n ID="<<id;
    }
};

int main()
{
    employee e,e1(20000);
    e.show_data();
    e1.show_data();
    employee e3(e);
     e3.show_data();
    
}
