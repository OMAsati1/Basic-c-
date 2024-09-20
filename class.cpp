// #include<iostream>
// using namespace std;
// class student
// {
// // private:
//     char name[20];
//     int id;
//     float marks;
// public :
// void input() {
//     cout<<"enter name "<<endl;
//     cin>>name;
//     cout<<"enter id "<<endl;
//     cin>>id;
//     cout<<"enter marks "<<endl;
//     cin>>marks;}
//     void output() {
// cout<<"name is "<<name<<endl;
// cout<<"id is "<<id<<endl;
// cout<<"marks is "<<marks;
//     }

// };
// int main(){
//     student om;
// om.input();
// om.output();
//     return 0;
// }
#include <iostream>
using namespace std;
class student
{
    // private:
    char name[20];
    int id;
    float m1, m2, m3, sum;

public:
    void input();
    void display();
    void addition();
};
void student ::input()
{
    cout << "enter name " << endl;
    cin >> name;
    cout << "enter id " << endl;
    cin >> id;
    cout << "enter marks " << endl;
    cin >> m1 >> m2 >> m3;
}
void student ::display()
{
    cout << "name is " << name << endl;
    cout << "id is " << id << endl;
    cout << "marks is " << m1<<" "<<m2<<" "<<m3<<endl;
    
}
void student ::addition()
{
    sum=m1+m2+m3;
     cout << "total marks is " <<sum;
}

int main()
{
    student om;
    om.input();
    om.display();
    om.addition();

    return 0;
}