#include <iostream>
using namespace std;
class student
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int r)
    {
        roll_Number = r;
    }
    void get_roll_Number(void)
    {
        cout << "The roll number is " << roll_Number << endl;
    }
};
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float , float );
    
    void get_marks();
    
};
   void exam :: set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
void exam ::get_marks()
{
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}
class result : public exam
{
protected:
    float percentage;

public:
    void Display()
    {
        get_roll_Number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 <<"%"<< endl;
    }
};
int main()
{
  result harry;
  harry.set_roll_Number(55);
  harry.set_marks(99.9,90);
  harry.Display();
    return 0;
}