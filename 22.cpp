#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
public:
    void chk_bin(void);
    void read(void);

    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
}
void binary ::ones_compliment(void)

{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying the compliment of your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // oops
    /*class employee {
        class definition
    } harry, om, rohan*/
    binary b;
    b.read();
    //  b.chk_bin(); /*we declare it in ones_compliment function*/
    // b.display();
    b.ones_compliment();
    b.display();
    return 0;
}