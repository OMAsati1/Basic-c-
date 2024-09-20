#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int r[] = {2, 4, 6, 7, 9, 32, 45, 68};
    for (int i = 0; i <= 7; i++)
    {
        cout << r[i] << " ";
    }
    cout << "\nsize of array" << endl;
    cout << sizeof(r) / 4;

    return 0;
}