#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "diplaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vect1;
    vector<char> vect2(4);
    vector<char> vect3(vect2);
    vector<int> vect4(4, 7);
    // display(vect1);
    // vect2.push_back('5');
    // display(vect2);
    // display(vect3);
    display(vect4);

    int element;
    int size = 5;
    // cout<<vect1.size()<<endl;
    // cout<<vect2.size()<<endl;

    // cout << "Enter the size of the vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an element to add this vector: ";
    //     cin >> element;
    //     vect1.push_back(element);
    // }

    // display(vect1);

    // vector <int> :: iterator iter = vect1.begin();
    // vect1.insert(iter+1,2,345);
    // vect1.insert(iter,345);
    // display(vect1);

    return 0;
}