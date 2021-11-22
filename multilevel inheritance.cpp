#include <iostream>
using namespace std;
class college
{ public:
    college()
    {
        cout<<"BASE CLASS"<<endl;
    }
};
class staff:public college
{
    public:
    staff()
    {
        cout<<"DERIVED CLASS"<<endl;
    }
  
};
class teacher:public staff
{
    public:
    teacher()
    {
    cout<<"ANOTHER DERIVED CLASS";
    }
};

int main()
{ teacher t;;
    return 0;
}
