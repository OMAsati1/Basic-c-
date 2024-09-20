#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;
    public: 
     void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(){
        cout<<"Your result is:"<<endl
        <<"maths: "<<maths  <<endl
        <<"physics: "<<physics <<endl;
    }
};
class Sports : virtual public Student
{
    protected :
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"Your PT score is: "<<score<<endl;
    }
};
class result : public Test, public Sports{
    private :
    float total;
    public:
    void display(){
     total = maths + physics + score;
     print_number();
     print_marks();
     print_score();
     cout<<"Your total score is: "<<total<<endl;
    }
};
int main()
{
    result om;
    om.set_number(55);
    om.set_marks(90.6,70.8);
    om.set_score(9);
    om.display();

    return 0;
}