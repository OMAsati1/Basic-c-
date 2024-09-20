#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 300000;
        cout << "Enter the id of employee: ";
        cin >> id;
       
    }
    void getid(void)
    {
        cout << "The id of employee is: " << id <<"\nSalary of the employee is: "<<salary<< endl;
    }
};

int main()
{
    // employee om , dk ,jk ,mk;
    // om.setid();
    // om.getid();
    employee xyz[4];
    for (int i = 0; i < 4; i++)
    {
        xyz[i].setid();
        xyz[i].getid();
    }

    return 0;
}
