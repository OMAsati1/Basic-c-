#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            cout << A[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;

    int p, q;
    cin >> p >> q;
    int B[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << B[i][j] << " ";
        }

       
       
    }
    if (n != p)
    {
        cout << "multipication not possible";
    }
    int C[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
             C[i][j]  = 0;
            for (int k = 0; k < p; k++)
            {
                 C[i][j]  += A[i][k]*B[k][j];
            }
            
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}