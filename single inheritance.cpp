#include <iostream>
using namespace std;

class college
{
  public: college()
  {
      cout<<"SRM University";
  }
};
class student: public college
{
    
};
int main()
{ student s;
    return 0;
}