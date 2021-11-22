#include <iostream>
using namespace std;

class student
{
    public:
    student()
    {
        cout<<"STUDENT AT SRM"<<endl;
    }
  
};
class teacher:public student
{
    public:
    teacher()
    {
    cout<<"TEACHER AT SRM"<<endl;;
    }
};
class college: public teacher,public student
{ public:
    college()
    {
        cout<<"SRM UNIVERSITY"<<endl;
    }
};

int main()
{ college c;
    return 0;
}

//multiple+hierarchical inheritance is used