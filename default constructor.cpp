#include <iostream>
using namespace std;
class employee
{
    public: char name[20];
    int ID,salary;
  void get()
  {
      cout<<"Enter name:";
      cin>>name;
      cout<<"Enter ID:";
      cin>>ID;
      cout<<"Enter salary:";
      cin>>salary;
  }
  void display()
  {
       cout<<"\nName:"<<name<<endl;
      
      cout<<"ID:"<<ID<<endl;
      
      cout<<"Salary:"<<salary<<endl;
      
  }
  employee()
  {
      get();
      display();
  }
};

int main()
{
employee e;
    return 0;
}
