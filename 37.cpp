#include <iostream>
using namespace std;
// base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34000.0;
    }
    employee() {}
};
// derived class syntax
/*class{{derived-class-name}} : {{visibility-mode}} {{base-class-name}} {
    members, methods etc......
};
NOTE: Deafault visibility mode is private */
// creating a programmer class derived from base class employee
// Private visibility mode : public member of base class become private memeber of derived class
// public visibility mode : public member of base class become private memeber of derived class
// private member of base class are never inherited
class programmer : public employee
{
public:
  int languageCode;
    programmer(int inpid)
    {
        id = inpid;
     languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harry(1), om(2);
    cout << harry.salary << endl;
    cout << om.salary << endl;
    programmer skillf(10);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}