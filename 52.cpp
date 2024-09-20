#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void getData()
    {
        cout << "the id of the item is " << id << endl;
        cout << "the price of the item is " << price << endl
             << endl;
    }
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
};
int main()
{
    int size = 3;
    // int *ptr=&size;
    // general shop item
    // vegetable item
    // hardware item
    int p, i;
    float q;
    shop *ptr = new shop[size];
    // shop *ptrTemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        (ptr+i)->setData(p, q);
        // ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "item number is " << i + 1<<endl;
        (ptr+i)->getData();
        // ptrTemp++;
    }

    return 0;
}