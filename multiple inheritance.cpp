#include <iostream>
using namespace std;

class teacher
{
    public:
    teacher()
    {
        cout<<"BASE CLASS 1\n";
    }
  
};
class student
{
    public:
    student()
    {
    cout<<"BASE CLASS 2";
    }
};
class college: public teacher,public student
{
    
};
int main()
{ college c;
    return 0;
}
