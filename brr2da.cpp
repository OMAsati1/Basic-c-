#include <iostream>

using namespace std;

int main()
{

    int a[2][3] = {{4, 6, 3}, {3, 8, 9}};
    for (int i = 0; i < 2; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"  +"<< endl;
    int b[2][3] = {{14, 26, 43}, {53, 78, 19}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"   ="<< endl;
    int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}