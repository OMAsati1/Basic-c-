#include <iostream>
#include <cmath>
using namespace std;
class simpleCalc
{
public:
    float num1, num2;
    char opr;
    void display1()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "enter your derise operator: ";
        cin >> opr;
        cout << "ans is: ";
    }
    void ans1()
    {

        switch (opr)
        {
        case '+':
            cout << num1 + num2 << endl
                 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl
                 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl
                 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Not Defined" << endl;
                break;
            }
            else
            {
                cout << num1 / num2 << endl
                     << endl;
                break;

            default:
                cout << "invalid operator";
                break;
            }
        }
    }
};
class scientificCalc
{
public:
    float num;
    char opr2;
    int i = 0;
    void display2()
    {
        cout << "Enter number: ";
        cin >> num;
        cout << "enter your l,e,sand c for log , exponential ,sin and cosine";
        cout << " repectively for desire operator: ";
        cin >> opr2;

        cout << "ans is: ";
    }
    void ans2()
    {

        switch (opr2)
        {
        case 'l':
            if (num < 0)
            {
                cout << "log cannot take negative numbers as input";
                break;
            }
            else if (num == 0)
            {
                cout << "log cannot take 0 as input";
                break;
            }
            else
            {
                cout << log10(num);
                break;
            }
        case 'e':
            cout << exp(num);
            break;
        case 's':
            cout << sin(num * M_PI / 180);
            break;
        case 'c':

            if (fmod(num, 90) == 0 && fmod(num, 180) != 0)
            {
                cout << '0';
                break;
            }
            else
            {

                cout << cos(num * M_PI / 180);
                break;
            }

            break;

        default:
            cout << "invalid operator";
            break;
        }
    }
};
class derived : public simpleCalc, public scientificCalc
{
};
int main()
{
    derived om;
    om.display1();
    om.ans1();
    om.display2();
    om.ans2();

    return 0;
}