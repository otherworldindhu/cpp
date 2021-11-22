#include <iostream>
using namespace std;
class college
{ public:
    college()
    {
        cout<<"SRM UNIVERSITY"<<endl;
    }
};
class student:public college
{
    public:
    student()
    {
        cout<<"STUDENT AT SRM\n"<<endl;
    }
  
};
class teacher:public college
{
    public:
    teacher()
    {
    cout<<"TEACHER AT SRM";
    }
};

int main()
{ student s;
teacher t;
    return 0;
}
