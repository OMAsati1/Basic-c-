#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; //it is declared outside the class

public:
    void setData(void)
    {
        cout << "Enter the id of employee: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << " The id of employee is: " << id << " and this is employee number " << count << endl;
    }
    static void getCount()
    {
        cout << "The value of count is " << count << endl;
    }
};
// count is static data data member of class employee
int employee ::count=500; /*default value is 0 and we can initialise value only from here not from class*/
int main()
{
    employee om;
    employee jk;
    employee dk;

    om.setData();
    om.getData();
    employee :: getCount();

    jk.setData();
    jk.getData();
    employee :: getCount();

    dk.setData();
    dk.getData();
    employee :: getCount();

    return 0;
}