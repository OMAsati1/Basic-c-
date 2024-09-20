#include <iostream>
using namespace std;
template <class T>
class om
{
public:
    T data;
    om(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void om<T>::display()
{
    cout << data;
}
// void func(int a)
// {
//     cout << "I am the first func()" << endl;
// }
template <class T>
void func(T a)
{
    cout << "I am templatised func() "<<a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am templatised func() "<<a << endl;
}
int main()
{
    // om<int> o(4);
    // om<double> o(4.656);
    // om<char> o('t');
    // o.display();
    // cout<<o.data<<endl;
    func(6);
    func1(8);
    return 0;
}